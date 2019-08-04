idEmpregado = int(input())
horasDeTrabson = int(input())
valorHora = float(input())
salario = horasDeTrabson*valorHora
print("NUMBER = "+str(idEmpregado))
print("SALARY = U$ {:.2f}".format(salario))