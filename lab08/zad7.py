for t in input().split():
    x = int(t)
    if x < 0:
        print("Найдено отрицательное число:", x)
        break
else:
    print("Все числа неотрицательные")
