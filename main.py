st, fn = map(int, input().split())

res = []
a, b = 0, 1

while a <= fn:
    if a >= st:
        if not res or res[-1] != a:
            res.append(a)

    a, b = b, a + b

if not res:
    print("В заданном диапазоне нет чисел Фибоначчи")
else:
    print(*map(str, res))
