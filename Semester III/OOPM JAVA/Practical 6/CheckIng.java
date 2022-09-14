import java.util.*;
class CheckIng
{
	public static boolean check(String s)
	{
		if(s.endsWith("ing"))
			return true;
		else
			return false;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a string");
		String s=sc.next();
		boolean c=CheckIng.check(s);
		if(c)
			System.out.println(s+" ends with ing");
		else
			System.out.println(s+" does not end with ing");
	}
}