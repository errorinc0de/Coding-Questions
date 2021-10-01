'''
author : Shreya Pawaskar
link : https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1
'''

t=int(input())
for it in range(0,t):
    n=int(input())
    l=input().split()
    for i in range(0,len(l)):
        l[i]=int(l[i])
    
    l1=[]#o(1)
    
    for i in range(0,(len(l)//2)):
        l1.append(l[len(l)-1-i])
        l1.append(l[i])
    
    if len(l)%2!=0:#odd length
        l1.append(l[(len(l)//2)])
    
    for j in range(0,len(l1)):#printing
        print(l1[j],end=" ")
    print(" ")
        
    