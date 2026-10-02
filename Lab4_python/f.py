#Triangle Binary Search Tree
n = int(input())
a = list(map(int, input().split()))

order = list(range(n))
order.sort(key=lambda i: a[i])

left = [-1] * n
right = [-1] * n
stack = []

for v in order:
    last = -1

    while stack and stack[-1] > v:
        last = stack.pop()

    if stack:
        right[stack[-1]] = v

    if last != -1:
        left[v] = last

    stack.append(v)

ans = 0

for i in range(n):
    if left[i] != -1 and right[i] != -1:
        ans += 1

print(ans)