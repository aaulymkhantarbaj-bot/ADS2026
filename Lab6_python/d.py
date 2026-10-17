#Calendar
import sys
data = sys.stdin.read().split()
n = int(data[0])
dates = data[1:1 + n]

def key(d):
    day, month, year = map(int, d.split("-"))
    return (year, month, day)

dates.sort(key=key)
print("\n".join(dates))