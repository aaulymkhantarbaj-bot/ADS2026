#Mountains
n, m = map(int, input().split())
a = list(map(int, input().split()))

order = list(range(n))

# Если значения одинаковые, более позднее значение должно идти влево
order.sort(key=lambda i: (a[i], -i))

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

root = 0

for _ in range(m):
    path = input().strip()

    cur = root

    for c in path:
        if c == 'L':
            cur = left[cur]
        else:
            cur = right[cur]

        if cur == -1:
            break

    if cur == -1:
        print("NO")
    else:
        print("YES")