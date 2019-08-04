p=0
q=0
preco=0
while 1<p<5:
    a=input()
aux=False;
while 1<q<500 or aux==False:
    for i in range(0,p):
        cod, q = [int(i) for i in input().split]
        if cod==1001:
            preco = 1.50 * q
        elif cod==1002:
            preco = 2.50 * q
        elif cod==1003:    
            preco = 3.50 * q
        elif cod==1004:
            preco = 4.50 * q
        elif cod==1005:
            preco = 5.50 * q
        else:    
            aux=True;
print("{:.2f}".format(preco))