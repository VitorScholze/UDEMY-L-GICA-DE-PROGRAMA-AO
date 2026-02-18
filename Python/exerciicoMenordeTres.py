x: int ; y: int ; z: int; menor:int

x = int(input("Primeiro Valor:"))
y = int(input("Segundo Valor:"))
z = int(input("Terceiro numero:"))

menor = 0

if (x < y and x < z):
    menor = x

elif (y < x and y < z):
    menor = y
else:
    menor = z

print(f"MENOR VALOR: {menor}")