# Get subtree
n = int(input())
a = list(map(int, input().split()))
x = int(input())

pos = a.index(x)

left = -10**18
right = 10**18

for v in a[:pos]:
    if v < x:
        left = max(left, v)
    elif v > x:
        right = min(right, v)

ans = 0

for v in a[pos:]:
    if left < v < right:
        ans += 1

print(ans)