#K-th element in Binary Search Tree
n, k = map(int, input().split())
a = list(map(int, input().split()))

if k > n:
    print(-1)
else:
    a.sort()
    print(a[k - 1])