#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    for i in range(1, n + 1):
        print(str('#'*i).rjust(n))
       
if __name__ == '__main__':
    n = int(input())

    staircase(n)