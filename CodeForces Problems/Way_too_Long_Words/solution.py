

//Solution for Way too Long  Words

n = int(input())

for i in range(n):
    x=input()
    
    if len(x)>10:
        c=0
        a=list(x)
        for i in range(1,len(a)-1):
            c=c+1
        y=str(c)
        print(a[0]+y+a[len(a)-1])
    else:
        print(x)
