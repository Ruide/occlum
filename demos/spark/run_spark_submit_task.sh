#!/bin/bash
set -e

./spark-3.1.1-bin-hadoop2.7/bin/spark-submit \
--conf 'spark.executor.extraJavaOptions=-Djdk.lang.Process.launchMechanism=POSIX_SPAWN' \
--class org.apache.spark.examples.SparkPi \
--master spark://localhost:7077 \
--deploy-mode client \
/home/occlum/demos/spark/spark-3.1.1-bin-hadoop2.7/examples/jars/spark-examples_2.12-3.1.1.jar