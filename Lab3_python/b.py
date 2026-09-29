#B-Patchwork Staccato I
n, q = map(int, input().split())
a = list(map(int, input().split()))

a.sort()

def lower_bound(x):
    l = 0
    r = n

    while l < r:
        m = (l + r) // 2

        if a[m] < x:
            l = m + 1
        else:
            r = m

    return l


def upper_bound(x):
    l = 0
    r = n

    while l < r:
        m = (l + r) // 2

        if a[m] <= x:
            l = m + 1
        else:
            r = m

    return l


def count(l, r):
    return upper_bound(r) - lower_bound(l)


for _ in range(q):
    l1, r1, l2, r2 = map(int, input().split())

    ans = count(l1, r1) + count(l2, r2)

    # если отрезки пересекаются
    left = max(l1, l2)
    right = min(r1, r2)

    if left <= right:
        ans -= count(left, right)

    print(ans)