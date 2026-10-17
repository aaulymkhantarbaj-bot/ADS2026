#New GPA
import sys
data = sys.stdin.read().split()
sc = {"A+": 4.0, "A": 3.75, "B+": 3.5, "B": 3.0, "C+": 2.5, "C": 2.0, "D+": 1.5, "D": 1.0, "F": 0.0}
n = int(data[0])
p = 1
st = []
for _ in range(n):
    last, first, k = data[p], data[p + 1], int(data[p + 2])
    p += 3
    tot = 0.0
    cr = 0
    for _ in range(k):
        tot += sc[data[p]] * int(data[p + 1])
        cr += int(data[p + 1])
        p += 2
    gpa = tot / cr if cr else 0.0
    st.append((gpa, last, first))
st.sort()
for g, l, f in st:
    print(l, f, "%.3f" % g)