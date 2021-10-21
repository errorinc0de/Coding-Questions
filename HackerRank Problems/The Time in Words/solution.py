#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeInWords' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER h
#  2. INTEGER m
#

def timeInWords(h, m):
    n = [
        "zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "quarter",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine",
        "half"
    ]
    m = int(m)
    h = int(h)
    if not m:
        return "%s o' clock" % n[h]
    if m>30: 
        m = 60 - m
        w = "to"
        h = (h+1)%12 or 12
    else:
        w = "past"
    o = " minutes"
    if m==1:
        o = " minute"
    elif not m%15:
        o = ""
    m = n[m]
    h = n[h]
    
    return "%s%s %s %s"%(m,o,w,h)

print(timeInWords(input(), input()))