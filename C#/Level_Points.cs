using System;
using System.Collections.Generic;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int levels = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine(Points(levels));
        }

        
        static int Points(int levels)
        {
            int result = 0;
            //your code goes here
            for(int i = 1; i <= levels; i++) {
                result += i;
            }

            return result;

        }

    }

}
