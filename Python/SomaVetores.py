N :int
soma: float; media: float

N = int(input("Quantos numeros voce ira digitar?"))

vet: [float] = [0 for x in range(N)]

for i in range(0 , N):
    vet[i]= float(input("Digite Um Numero:"))

print("VALORES: ", end = ' ')
for i in range( 0 , N):
    print(f"{vet[i]}  ", end = ' ')

soma =0
print()
for i in range(0 , N):
    soma = soma + vet[i]

print(f"SOMA: {soma:.2f}")
media = 0

media = soma/ N
print(f"MEDIA: {media:.2f}")