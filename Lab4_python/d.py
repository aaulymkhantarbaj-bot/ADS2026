#Aureole
n = int(input())
a = list(map(int, input().split()))

pos = [0] * n

for i in range(n):
    pos[a[i] - 1] = i

left = [-1] * n
right = [-1] * n
stack = []

for v in pos:
    last = -1

    while stack and stack[-1] > v:
        last = stack.pop()

    if stack:
        right[stack[-1]] = v

    if last != -1:
        left[v] = last

    stack.append(v)

queue = [0]
level = [0]
head = 0
sums = []

while head < len(queue):
    v = queue[head]
    lev = level[head]
    head += 1

    if lev == len(sums):
        sums.append(0)

    sums[lev] += a[v]

    if left[v] != -1:
        queue.append(left[v])
        level.append(lev + 1)

    if right[v] != -1:
        queue.append(right[v])
        level.append(lev + 1)

print(len(sums))
print(*sums)