n = int(input())
cnt = 0  
number = 2 

while cnt < n:
    pr = True
    d = 2
    while d * d <= number:
        if number % d == 0:
            pr = False
            break
        d += 1
    if pr:
        cnt += 1
        if cnt == n:
            print(number)
    number += 1
