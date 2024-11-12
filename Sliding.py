for _ in range(int(input())):
    n,m,r,c=map(int,input().split())
    ans=(n-r)*(m*2-1)+m-c
    print(ans)