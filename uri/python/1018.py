entrada= int(input())
n100=entrada//100
resto=entrada%100
n50=resto//50
resto=resto%50
n20=resto//20
resto=resto%20
n10=resto//10
resto=resto%10
n5=resto//5
resto=resto%5
n2=resto//2
resto=resto%2
n1=resto//1
resto=resto%1
print(str(entrada))
print(str(n100)+" nota(s) de R$ 100,00")
print(str(n50)+" nota(s) de R$ 50,00")
print(str(n20)+" nota(s) de R$ 20,00")
print(str(n10)+" nota(s) de R$ 10,00")
print(str(n5)+" nota(s) de R$ 5,00")
print(str(n2)+" nota(s) de R$ 2,00")
print(str(n1)+" nota(s) de R$ 1,00")