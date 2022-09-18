using System;
class ReadIntegerApp
{
    static int ReadInt()
    {
        char ch;
        int n = 0;
        while (!char.IsDigit(ch = (char)Console.Read())) ;
        do
        {
            n = n * 10 + (ch - '0');
            ch = (char)Console.Read();
        } while (char.IsDigit(ch)); // 숫자가 아닌 글자 입력 시 벗어남
        return n;
    }
    public static void Main()
    {
        Console.Write("*** input data : ");
        Console.WriteLine("*** read data : " + ReadInt() + " " + ReadInt());
    }
}


