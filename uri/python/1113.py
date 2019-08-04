while True:
    a,b = [int(n) for n in input().split()]
    if a==b:
        exit(0)
    if a>b:
        print("Decrescente")
    else:
        print("Crescente")