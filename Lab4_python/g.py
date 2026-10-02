# Killua and Hunter exam
n = int(input())
a = list(map(int, input().split()))

# убираем повторы, сохраняя первый порядок
first = {}
b = []

for x in a:
    if x not in first:
        first[x] = len(b)
        b.append(x)

n = len(b)

order = list(range(n))
order.sort(key=lambda i: b[i])

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

height = [0] * n
ans = 0

for v in range(n - 1, -1, -1):
    hl = 0
    hr = 0

    if left[v] != -1:
        hl = height[left[v]]

    if right[v] != -1:
        hr = height[right[v]]

    height[v] = max(hl, hr) + 1

    ans = max(ans, hl + hr + 1)

print(ans)