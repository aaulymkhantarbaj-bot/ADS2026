#I-Oshiete oshiete yo sono shikumi wo
import sys

def main():
    data = sys.stdin.read().split()
    idx = 0
    n = int(data[idx]); idx += 1
    m = int(data[idx]); idx += 1
    a = list(map(int, data[idx:idx+n]))

    def blocks_needed(x):
        # минимальное число блоков, чтобы сумма в каждом блоке <= x
        count = 1
        current = 0
        for v in a:
            if current + v > x:
                count += 1
                current = v
            else:
                current += v
        return count

    lo, hi = max(a), sum(a)

    while lo < hi:
        mid = (lo + hi) // 2
        if blocks_needed(mid) <= m:
            hi = mid
        else:
            lo = mid + 1

    print(lo)

main()