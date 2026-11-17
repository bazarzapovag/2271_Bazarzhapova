n = int(input())

ryad = ["1234567890", "qwertyuiop", "asdfghjkl", "zxcvbnm"]

for i in range(n):
    password = input()
    ok = True

    for row in ryad:
        found = False
        for ch in password:
            if ch in row:
                found = True
                break

        if not found:
            ok = False
            break

    if ok:
        print("strong")
    else:
        print("weak")
