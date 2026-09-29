#J-Jonathan the Farmer
import sys

def main():
    data = sys.stdin.read().split()
    idx = 0
    n = int(data[idx]); idx += 1
    k = int(data[idx]); idx += 1

    needed = []
    for _ in range(n):
        x1 = int(data[idx]); idx += 1
        y1 = int(data[idx]); idx += 1
        x2 = int(data[idx]); idx += 1
        y2 = int(data[idx]); idx += 1
        needed.append(max(x2, y2))

    needed.sort()
    print(needed[k - 1])

main()