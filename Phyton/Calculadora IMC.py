print("****************************")
print("Calculadora de IMC")
print("****************************")
print()

nome = input("Digite o nome do paciente: ")
idade = int(input("Digite a idade do paciente: "))
peso = float(input("Digite o peso do paciente em Kg: "))
altura = float(input("Digite a altura do paciente em M: "))

imc = peso / (altura ** 2)

print(f"O paciente {nome}, de {idade} anos, está com o índice de massa corporal igual a {imc:.2f}.")
