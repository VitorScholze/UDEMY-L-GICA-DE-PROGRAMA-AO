x : int ; z: int

print("Digite dois numeros:")
x = int(input())
z = int(input())

while( x != z):
    if(x > z):
        print("DECRESCENTE")
    else:
        print("CRESCENTE")

    print("Digite outros dois numeros:")
    x = int(input())
    z = int(input())