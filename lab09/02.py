n = int(input())
dress = list(map(int, input().split()))

var = set()

for i in range(n):
    var.add(dress[i])
    if len(var) == 3:
        print(i + 1)
        break
else:
    print(n)
