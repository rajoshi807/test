using System;
using System.Collections.Generic;

class Program
{
    // Generic method to print a list of items
    public static void PrintList<T>(List<T> items)
    {
        foreach (T item in items)
        {
            Console.WriteLine(item);
        }
    }

    static void Main()
    {
        // Using generic List with integer data type
        List<int> intList = new List<int> { 1, 2, 3, 4, 5 };
        PrintList<int>(intList);

        // Using generic List with string data type
        List<string> stringList = new List<string> { "Hello", "World", "CSharp" };
        PrintList<string>(stringList);
    }
}
