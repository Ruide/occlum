#!/bin/bash
set -e

# apt-get update
# apt-get install -y openjdk-11-jdk
wget https://mirrors.gigenet.com/apache/spark/spark-3.1.1/spark-3.1.1-bin-hadoop2.7.tgz
tar -xvzf spark-3.1.1-bin-hadoop2.7.tgz