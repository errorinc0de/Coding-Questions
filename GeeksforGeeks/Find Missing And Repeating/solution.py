'''
author : Shreya Pawaskar
link : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
'''

t=int(input())
for it in range(0,t,1):
    n=int(input())
    
    l= input().split()
    for i in range(len(l)):
      l[i] = int(l[i])
    
    l.sort()
    for j in range(0,n-1):
        if l[j]==l[j+1]:
            print(l[j],end=" ")
            l.remove(l[j])
            break
    
    s=(n)*(n+1)//2
    print(s-sum(l))            