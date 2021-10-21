try:
    t=int(input())
    for i in range(t):
        n,k=map(int,input().split())
        l=list(map(int,input().split()))
        store=0
        flag=0
        for i in range(0,len(l)):
            item=l[i]
            l[i]+=store
            if(l[i]>=k):
                store=abs(l[i]-k)
            else:
                j=i+1
                flag=1
                break
        if(flag==0):
            print("YES")
        else:
            print("NO",j)
except:
    pass