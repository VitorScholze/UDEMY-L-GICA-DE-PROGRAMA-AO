#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

   double altura ,base , diagonal , area , perimetro ;

   printf("Base do Retangulo:");
   scanf("%lf", &base);

   printf("Altura do Retangulo:");
   scanf("%lf", &altura);

   area= base * altura;
   perimetro= 2 * base + 2 * altura;
   diagonal= sqrt(base * base + altura * altura);


   printf("AREA: %.4lf", area);
   printf("\n");
   printf("PERIMETRO: %.4lf", perimetro);
   printf("\n");
   printf("DIAGONAL: %.4lf", diagonal);

    return 0;
}
