nome = input()
salarioBase = float(input())
vendas = float(input())
salarioFinal = salarioBase + vendas*0.15
print("TOTAL = R$ {:.2f}".format(salarioFinal))