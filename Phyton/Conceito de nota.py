print("*"*25)
print("")
print("*"*25)
nome=input("Digite o nome do aluno\n")
av1=float(input("Digite a nota do aluno na AV1\n"))
av2=float(input("Digite a nota do aluno na AV2\n"))
media=(av1+av2)/2
if(media>=9):
    print("O aluno esta com conceito A")
elif(media>=7.5 <9):
    print("O aluno esta com o conceito B")
elif(media>=6 <7.5):
    print("O aluno esta com o conceito C")
elif(media>4 <6):
    print("O aluno esta com o conceito D")
else:
    print("O aluno esta com o conceito E")
