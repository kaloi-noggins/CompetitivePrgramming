a,b,c = [float(x) for x in input().split()]
a1 = (a*c)/2
a2 = 3.14159*c**2
a3 = ((a+b)*c)/2
a4 = b**2
a5 = a*b
print("TRIANGULO: {:.3f}".format(a1))
print("CIRCULO: {:.3f}".format(a2))
print("TRAPEZIO: {:.3f}".format(a3))
print("QUADRADO: {:.3f}".format(a4))
print("RETANGULO: {:.3f}".format(a5))