#Christmas Gifts
n = int(input())
a = list(map(int, input().split()))
x = int(input())

order = sorted(range(n), key=lambda i: a[i])

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

start = a.index(x)

ans = []
stack = [start]

while stack:
    v = stack.pop()
    ans.append(a[v])

    if right[v] != -1:
        stack.append(right[v])

    if left[v] != -1:
        stack.append(left[v])

print(*ans)