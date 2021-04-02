#!/bin/bash
set -e

export SPARK_MASTER_HOST=localhost
./spark-3.1.1-bin-hadoop2.7/sbin/start-master.sh
