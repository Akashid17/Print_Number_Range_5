
using System;

class ArithmeticX
{
	public void DisplayRangeReverse(int iNo1, int iNo2)
	{
		if(iNo1 > iNo2)
		{
			Console.WriteLine("Invalid Range");
			return;
		}

		for(int i = iNo2; i >= iNo1; i--)
		{
			Console.Write(i+" ");
		}
		Console.WriteLine();
	}
}

class Demo
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter First Number");
		int iValue1 = Convert.ToInt32(Console.ReadLine());

		Console.WriteLine("Enter Second Number");
		int iValue2 = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		aobj.DisplayRangeReverse(iValue1,iValue2);
	}
}