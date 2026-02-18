import math

base : float ; altura:float; perimetro : float ; area : float ; diagonal: float

base = float(input("Qual a base do retangulo:"))
altura = float(input("Qual a altura do retangulo:"))

area = base * altura
perimetro = (base + base) + ( altura + altura)
diagonal = math.sqrt( (base ** 2) + ( altura ** 2))

print(f"AREA : {area:.2f}")
print(f"PERIMETRO: {perimetro :.2f}")
print(f"DIAGONAL: {diagonal:.4f}")


