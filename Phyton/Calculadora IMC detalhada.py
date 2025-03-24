print("****************************")
print("Calculadora de IMC")
print("****************************")
print()

nome = input("Digite o nome do paciente: ")
idade = int(input("Digite a idade do paciente: "))
peso = float(input("Digite o peso do paciente em Kg: "))
altura = float(input("Digite a altura do paciente em M: "))

imc = peso / (altura ** 2)
if imc <18.5:
    classificacao="Abaixo do Peso"
elif imc <24.9:
    classificacao="Peso normal"
elif imc <29.9:
    classificacao="Sobrepeso"
elif imc <34.9:
    classificacao="Obesidade grau 1"
elif imc <39.9:
    classificacao="Obesidade grau 2"
else:
    classificacao="Obesidade grau 3"
print(f"Nome: {nome}")
print(f"Idade: {idade} anos")
print(f"Altura: {altura:.2f}m")
print(f"Peso: {peso:.2f}kg")
print(f"IMC: {imc:.2f}")
print(f"Classificação: {classificacao}")
    
    
