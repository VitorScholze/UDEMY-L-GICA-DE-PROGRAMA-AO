
using System;
using System.Collections.Concurrent;
using System.Globalization;
using System.Net.Http.Headers;

namespace Problema_Retangulo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int idade1, idade2;
            String nome1, nome2;
            double media;

            Console.WriteLine("Dados da primeira pessoa:");
            Console.Write("NOME:");
            nome1 = Console.ReadLine();
            Console.Write("IDADE:");
            idade1 = int.Parse(Console.ReadLine());

            Console.WriteLine();
            Console.WriteLine("Dados da seungda pessoa:");
            Console.Write("Nome:");
            nome2 = Console.ReadLine();
            Console.Write("IDADE:");
            idade2 = int.Parse(Console.ReadLine());

            media = ((double)idade1 + idade2) / 2;

            Console.WriteLine();
            Console.WriteLine("A idade media entre "+ nome1 + " e "+ nome2 + " eh de " +media+ " anos.");


        }
    }
}
