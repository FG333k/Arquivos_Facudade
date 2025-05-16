nome = input("Digiite seu nome: ")
nota1 = float(input("Digite sua primeira nota: "))
nota2 = float(input("Digite sua segunda nota: "))
nota3 = float(input("Digite sua terceira nota: "))

media = (nota1 + nota2 + nota3) / 3

print(f"{nome} sua media foi de {media:.2f}")

if media >= 6:
    print("Parabéns você passou!")
else:
    print("Infelizmente você não passou.")