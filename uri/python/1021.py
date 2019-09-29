n= int(float(input())*100)

print("NOTAS:")
print(str(n//10000)+" nota(s) de R$ 100.00")
n%=10000

print(str(n//5000)+" nota(s) de R$ 50.00")
n%=5000

print(str(n//2000)+" nota(s) de R$ 20.00")
n%=2000

print(str(n//1000)+" nota(s) de R$ 10.00")
n%=1000

print(str(n//500)+" nota(s) de R$ 5.00")
n%=500

print(str(n//200)+" nota(s) de R$ 2.00")
n%=200

print("MOEDAS:")
print(str(n//100)+" moeda(s) de R$ 1.00")
n%=100

print(str(n//50)+" moeda(s) de R$ 0.50")
n%=50

print(str(n//25)+" moeda(s) de R$ 0.25")
n%=25

print(str(n//10)+" moeda(s) de R$ 0.10")
n%=10

print(str(n//5)+" moeda(s) de R$ 0.05")
n%=5

print(str(n)+" moeda(s) de R$ 0.01")