nome=input("Digite o nome do aluno: ")
av1=float(input("Digite a nota da AV1 do aluno: "))
av2=float(input("Digite a nota da AV2 do aluno: "))
media=(av1+av2)/2
if(media>=6):
    print(f"{nome} está aprovado com a média {media:.1f}")
elif(media>=4):
    print(f"{nome} está exame final com média {media:.1f}")
else:
    print(f"{nome} está reprovado com a média {media:.1f}")
