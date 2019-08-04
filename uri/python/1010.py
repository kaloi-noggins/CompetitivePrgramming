cod1, n1, p1 = input().split()
cod2, n2, p2 = input().split()
preco = int(n1)*float(p1) + int(n2)*float(p2)
print("VALOR A PAGAR: R$ {:.2f}".format(preco))