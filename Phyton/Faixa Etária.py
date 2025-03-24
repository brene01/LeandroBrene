print("*"*25)
print("Classificação de Faixa Etária de Idade")
print("*"*25)
nome=input("Digite o nome do cidadão\n")
idade=int(input("Digite a idade do cidadão\n"))
if idade<=12:
    print(f"O cidadão {nome}, possui {idade} anos e encotra-se classificado como crinaça")
elif idade<=17:
    print(f"O cidadão {nome}, possui {idade} anos e encotra-se classificado como adolescentes")
elif idade<=59:
    print(f"O cidadão {nome}, possui {idade} anos e encotra-se classificado como adulto")
else:
    print(f"O cidadão {nome}, possui {idade} anos e encotra-se classificado como idoso")
