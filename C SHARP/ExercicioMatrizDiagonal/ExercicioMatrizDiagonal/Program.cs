using System;

namespace NomeDoProjeto
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int N, i, j,cont;

            Console.Write("Qual sera a ordem da matriz:");
            N = int.Parse(Console.ReadLine());

            int[,] mat = new int[N,N];

            for(i = 0; i< N;i ++)
            {
                for( j = 0; j < N; j ++)
                {
                    Console.Write("Elemento [" + i + ", " + j+ "]:");
                    mat[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine("DIAGONAL PRINCIPAL:");

            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if( i == j)
                    {
                        Console.Write(mat[i , j] + " ");

                    }
                }
            }
            Console.WriteLine();
            cont = 0;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (mat[i , j] < 0)
                    {
                        cont = cont + 1;

                    }
                }
            }

            Console.WriteLine("QUANTIDADE DE NUMEROS NEGATIVOS:" + cont);







        }
    }
}

