print("*****************************")
print("FGTS")
print("*****************************")
print()

nome = input("Digite o seu nome: ")
cpf = input("Digite o seu CPF: ")
salario = float(input("Digite o seu salário: "))  # Converte o salário para float
fgts = salario * 0.08
print(f"O {nome}, portador do CPF {cpf}, tem um FGTS equivalente a R$ {fgts:.2f}.")
