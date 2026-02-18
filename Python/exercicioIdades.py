nome1: str; nome2:str
idade1: int ; idade2 : int

nome1 = input("Qual o nome da primeira pessoa ?:")
idade1 = int(input("Qual a idade da primeira pessoa ?:"))
print()
nome2 = input("Qual o nome da segunda pessoa?:")
idade2= int(input("Qual a idade da segunda pessoa?:"))

media = (idade1 + idade2) / 2

print(f" A idade media entre {nome1} e {nome2} eh de {media:.1f} anos ")