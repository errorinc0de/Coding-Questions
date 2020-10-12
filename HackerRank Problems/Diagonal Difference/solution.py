#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr,n):
    main_dig=0
    sec_dig=0
    
    for i in range(1,n+1):
        
        main_dig=main_dig+arr[i-1][i-1]
        sec_dig=sec_dig+arr[i-1][n-i]
     
       
    ans=abs(main_dig - sec_dig)
    return ans


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr,n)
    
    fptr.write(str(result) + '\n')

    fptr.close()

    

