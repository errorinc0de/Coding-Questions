t = int(input())
for i in range(t):
    n = int(input())
    if(n%12 == 6):
        print(n+1,'WS')
    elif(n%12 == 7):
        print(n-1,'WS')
    elif(n%12 == 5):
        print(n+3,'MS')
    elif(n%12 == 8):
        print(n-3,'MS')
    elif(n%12 == 4):
        print(n+5,'AS')
    elif(n%12 == 9):
        print(n-5,'AS')
    elif(n%12 == 3):
        print(n+7,'AS')
    elif(n%12 == 10):
        print(n-7,'AS')
    elif(n%12 == 2):
        print(n+9,'MS')
    elif(n%12 == 11):
        print(n-9,'MS')
    elif(n%12 == 1):
        print(n+11,'WS')
    elif(n%12 == 12 or n%12 == 0):
        print(n-11,'WS')