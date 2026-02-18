using System;

namespace NomeDoProjeto
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int x, y, z, menor;

            Console.Write("Primeiro Valor:");
            x = int.Parse(Console.ReadLine());
            Console.WriteLine("Segundo Valor:");
            y = int.Parse(Console.ReadLine());
            Console.WriteLine("Terceiro Valor:");
            z = int.Parse(Console.ReadLine());

            menor = 0;

            if (x < y && x < z)
            {

                menor = x;

            }
            else if (y < x && y < z)
            {
                menor = y;
            } else
            {

                menor = z;

            }
            Console.WriteLine("MENOR NUMERO:" + menor);
           






        }
    }
}