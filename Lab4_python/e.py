#Width
n = int(input())

left = [-1] * (n + 1)
right = [-1] * (n + 1)

for _ in range(n - 1):
    parent, child, side = map(int, input().split())

    if side == 0:
        left[parent] = child
    else:
        right[parent] = child

queue = [1]
head = 0
answer = 0

while head < len(queue):
    level_size = len(queue) - head

    if level_size > answer:
        answer = level_size

    for _ in range(level_size):
        v = queue[head]
        head += 1

        if left[v] != -1:
            queue.append(left[v])

        if right[v] != -1:
            queue.append(right[v])

print(answer)