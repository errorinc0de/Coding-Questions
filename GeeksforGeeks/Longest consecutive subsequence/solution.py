'''
author : Shreya Pawaskar
link : https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
'''

#input the testcases
t=int(input())
for it in range(0,t,1):
    n=int(input())
    l=list(map(int,input().split()))

    #to remove duplicates
    l=list(set(l))
    #sort the array
    l.sort()
    ans=0
    c=0
    for i in range(0,len(l)-1):
        if (l[i]+1)==l[i+1]:
            c=c+1
        if (l[i]+1)!=l[i+1]:
            c=0
        ans=max(ans,c)
    print(ans+1)

    