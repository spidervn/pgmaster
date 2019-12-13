#chkconfig: 12345 26 26
LOG_DIR=/var/log/postgresql 
LOG_FILE=db_spider_dev.log

CONFIG_PATH=/etc/postgresql/9.6/spidervn_dev
DATA_PATH=/data/db/spidervn_dev
SERVICE_NAME="DBNAME"

PG_BIN_PATH=""
USER_TO_RUN=postgres

start()
{
                if [ ! -e $UNIX_DIR ]
                then
                        mkdir -p $UNIX_DIR
                fi

                if [ ! -e $LOG_DIR ]
                then
                        mkdir -p $LOG_DIR
			chown -R postgres $LOG_DIR
                fi
		server_status=$(su -c "${PG_BIN_PATH}pg_ctl status -D $DATA_PATH" - $USER_TO_RUN)
                if echo "$server_status" | grep -q "server is running"; then
                        echo "$SERVICE_NAME still running"
                else
                        echo "Start $SERVICE_NAME"
                        su -c "${PG_BIN_PATH}pg_ctl start -D $CONFIG_PATH -l $LOG_DIR/$LOG_FILE" - $USER_TO_RUN
                        echo '[OK]'
                fi
}

stop()
{
        echo "Stopping $SERVICE_NAME"
       	su -c "${PG_BIN_PATH}pg_ctl stop -m fast -D $CONFIG_PATH" - $USER_TO_RUN 
	echo '[OK]'
}

status()
{
	su -c "${PG_BIN_PATH}pg_ctl status -D $DATA_PATH" - $USER_TO_RUN
}

case "$1" in
        start)
                start
                ;;

        stop)
                stop
                ;;
        restart)
                stop
                start
                ;;
        status)
                status
                ;;
        *)
                echo "Usage: $0 {start|stop|restart|status}"
                ;;
esac