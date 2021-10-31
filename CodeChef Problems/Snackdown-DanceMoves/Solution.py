
t=int(input())
for a in range (t):
    x,y=list(map(int,input().split()))
    if(x==y):
        print(0);
    elif(x<y):
        dif=y-x
        if(dif%2==0):
            print(int(dif/2))
        else:
            print(int((dif/2)+2))
    else:
        dif=x-y
        print(int(dif))
        
