import sys
def find_cool(n,arr):
    s=set()
    for i in range(n):
        if i in s:
            print(1)
            print(i)
            return
        s.add(arr[i])
    print(-1)
t=int(sys.stdin.readline().strip())
for _ in range(t):
    n=int(sys.stdin.readline().strip())
    arr=list(map(int,sys.stdin.readline().split()))
    find_cool(n,arr)
            