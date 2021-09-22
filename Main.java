
import java.lang.*;
import java.util.*;

class ArithmeticX
{
	public void DisplayRangeReverse(int iNo1, int iNo2)
	{
		if(iNo1 > iNo2)
		{
			System.out.println("Invalid Range");
			return;
		}

		for(int i = iNo2; i >= iNo1; i--)
		{
			System.out.print(i+" ");
		}
		System.out.println();
	}
}

class Main
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter First Number");
		int iValue1 = sobj.nextInt();

		System.out.println("Enter Second Number");
		int iValue2 = sobj.nextInt();
		
		ArithmeticX aobj = new ArithmeticX();
		aobj.DisplayRangeReverse(iValue1,iValue2);
	}
}