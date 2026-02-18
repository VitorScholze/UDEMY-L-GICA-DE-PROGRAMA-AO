using System;
using System.Globalization;

namespace NomeDoProjeto
{
    internal class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, i;
            double soma, media;

            Console.Write("Quantos numeros voce ira digitar:");
            N = int.Parse(Console.ReadLine());

            double[] vet = new double[N];

            for(i = 0; i < N; i++)
            {
                Console.Write("Digite um numero:");
                vet[i] = double.Parse(Console.ReadLine(), CI);

            }
            Console.WriteLine();
            Console.Write("VALORES:");

            soma = 0;
            for (i = 0; i < N; i++)
            {
                Console.Write(vet[i].ToString("F1", CI) + " ");
                soma = soma + vet[i];
            }
            Console.WriteLine();
            Console.WriteLine("SOMA:" + soma.ToString("F2", CI));

            media = soma / N;
            Console.WriteLine("MEDIA:" + media.ToString("F2" , CI));

  




}
    }
}
