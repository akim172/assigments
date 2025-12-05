#!/bin/sh

if [ $# -ne 1 ]; then
    echo "Usage: hollow_triangle.sh <height>"
    exit 1
fi

if [ ${1} -le 0 ]; then
    echo "Error: height must be a positive integer"
    exit 1
fi

rows=${1}
count=1


while [ "$count" -le "$rows" ]; do
    printf "*"
    if [ "$rows" -eq 1 ]; then
        printf "\n"
        exit 0
    elif [ "$count" -eq "$rows" ]; then
        printf "*%.0s" $(seq 1 $((rows-1)))
    elif [ "$count" -eq 2 ]; then
        printf "*"
    elif [ "$count" -ne 1 ]; then
        printf " %.0s" $(seq 1 $((count-2)))
        printf "*"
    fi
    printf "\n"
    count=$((count+1))
done