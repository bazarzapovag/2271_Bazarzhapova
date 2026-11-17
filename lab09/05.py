kozir = input()
n = int(input())

rang = ["6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"]

res = []

for _ in range(n):

    xod = input().split()
    otb = input().split()

    dos1, mast1 = xod[0], xod[1]
    dos2, mast2 = otb[0], otb[1]

    a = rang.index(dos1)
    b = rang.index(dos2)

    if mast1 == mast2 and b > a:
        res.append("1")
    elif mast2 == kozir and mast1 != kozir:
        res.append("1")
    else:
        res.append("0")

print(" ".join(res))
