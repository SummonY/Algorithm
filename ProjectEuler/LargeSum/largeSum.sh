#!/bin/bash

cat hundred.txt | paste -s -d+ | bc | head -c 10
