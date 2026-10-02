#More One Night
n = int(input())
a = list(map(int, input().split()))

pos = [0] * n
for i, x in enumerate(a):
    pos[x - 1] = i

child = [False] * n
st = []

for v in pos:
    last = -1

    while st and st[-1] > v:
        last = st.pop()

    if st:
        child[st[-1]] = True

    if last != -1:
        child[v] = True

    st.append(v)

print(child.count(False))