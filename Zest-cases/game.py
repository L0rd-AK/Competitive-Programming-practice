
t=int(input())
for i in range(t):
    n,k=input().split()
    n=int(n);k=int(k)
    lis=list(map(int,input().split()))
    if k in lis:
        print('YES')
    else:
        print("NO")