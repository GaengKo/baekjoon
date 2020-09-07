using System;

namespace ConsoleApp
{
    class Program
    {
        static void Main()
        {
            string a = Console.ReadLine();
            string[] b = a.Split(' ');
            Console.WriteLine(double.Parse(b[0])/ double.Parse(b[1]));
        }
    }
}