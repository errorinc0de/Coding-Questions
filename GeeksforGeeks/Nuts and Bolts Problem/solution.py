'''
author : Shreya Pawaskar
link : https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1
'''

t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(str,input().split()))
    l1=list(map(str,input().split()))
    l.sort()
    l1.sort()
    for j in range(0,len(l)):
        print(l[j],end=" ")
    print(" ")
    for j in range(0,len(l1)):
        print(l[j],end=" ")
    print(" ")