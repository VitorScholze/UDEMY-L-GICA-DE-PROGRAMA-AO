// See https://aka.ms/new-console-template for more information
using System;
using System.Collections.Concurrent;
using System.Globalization;

namespace Problema_Retangulo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double b, h, perimetro,diagonal,area;

            Console.Write("Qual a bease do retangulo?:");
            b = double.Parse(Console.ReadLine(), CI);
            Console.Write("Qual a altura do retangulo?:");
            h = double.Parse(Console.ReadLine(), CI);


            area = b * h;
            perimetro = (b * 2) + (h * 2);
            diagonal = Math.Sqrt((b * b) + (h * h));

            Console.WriteLine(area.ToString("F4", CI));
            Console.WriteLine(perimetro.ToString("F4", CI));
            Console.WriteLine(diagonal.ToString("F4", CI));



        }
    }
}