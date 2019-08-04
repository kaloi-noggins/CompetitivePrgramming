x, y = [int(n) for n in input().split()]
if x < y | y == 0:
    print("divisao impossivel")
else:
    print("{:.1f}".format(x/y))
