j=0                                 //initialising the temporary variable as 0
u=int(input())                        //inputing the number of queries 
for j in range(0,u):
    x,y,z=input().split()        //taking the input in a single line
    x=int(x)
    y=int(y)
    z=int(z)
    a=(x+y+z)//2                  //dividing it equally and giving the max candles each can have
    print(a)