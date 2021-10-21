T = int(input())
for case in range(T):
    N,K = map(int,input().rstrip().split(' '))
    A = list(map(int,input().rstrip().split(' ')))
    dp = [False]*(K+1)
    dp[0] = True
    for c in A:
        for i in range(c,len(dp)):
            dp[i] |= dp[i-c]
    print(max(i for i in range(len(dp)) if dp[i]))