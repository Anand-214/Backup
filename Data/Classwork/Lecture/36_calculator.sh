#!/bin/bash

number=1
size=${#number}
length=$((size-1))
operator=${number:$length:1}
output=${number:0:1}
