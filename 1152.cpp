using System;

namespace ConsoleApp
{
    class Program
    {
        static void Main()
        {
            string[] s = Console.ReadLine().Split(' ');
            int k = s.Length;
            if (s[0].Equals(""))
                k--;
            if (s[s.Length-1].Equals(""))
                k--;
            Console.WriteLine(k);
        }
    }
}