nome = input("Qual é o nome do funcionário?\n")
salario = int(input("Qual é o salário do funcionário?\nR$"))
tempo = int(input("Quanto tempo de empresa?\n"))

if tempo<=5:
    novo_sal=salario + (salario * 0.06)
elif tempo<=10:
    novo_sal=salario + (salario * 0.10)
elif tempo <= 15:
    novo_sal = salario + (salario * 0.15)
else: novo_sal = salario + (salario * 0.20)

print(f"o salário recalculado do funcionario {nome} corresponde a R${novo_sal:.2f}")
