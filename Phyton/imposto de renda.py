print("****************************")
print("Calculadora de Imposto de Renda")
print("****************************")
print()

nome = input("Digite o nome do contribuinte: ")
cpf = int(input("Digite o CPF do contribuinte: "))
renda=float(input("Digite o valor da renda bruta do contribuinte: "))

if(renda<1903.98):
    classificacao="Contribuinte Isento"
elif(renda<2825.65):
    classificacao="7.5% "
elif(renda<3751.05):
    classificacao="15%"
elif(renda<4664.68):
    classificacao="22.5%"
else:
    classificacao="27.5"

print(f"Nome: {nome}")
print(f"CPF: {cpf}")
print(f"Salario: {renda: .2f}")
print(f"Imposto de Renda: {classificacao}")
    
    
