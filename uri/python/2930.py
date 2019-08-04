condition=False
while condition==False:
    entrega, dataFinal = [int(n) for n in input().split()]
    if int(entrega) in range(1, 26) and int(dataFinal) in range(1, 26):
        condition==True
if dataFinal<