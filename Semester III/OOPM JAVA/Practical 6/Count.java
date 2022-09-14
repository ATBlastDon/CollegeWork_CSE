import java.util.*;
class Count
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int ac=0,uc=0,lc=0,spc=0,dc=0,syc=0;
		System.out.println("Enter a multiword string");
		String s=sc.nextLine();
		for(int i=0;i<s.length();i++)
		{
			if(Character.isLetter(s.charAt(i)))
			{
				ac++;
				if(Character.isUpperCase(s.charAt(i)))
					uc++;
				else if(Character.isLowerCase(s.charAt(i)))
					lc++;
			}
			else if(Character.isDigit(s.charAt(i)))
				dc++;
			else if(Character.isWhitespace(s.charAt(i)))
				spc++;
			else
				syc++;
		}
		System.out.println("Alphabets="+ac);
		System.out.println("Uppercase="+uc);
		System.out.println("Lowercase="+lc);
		System.out.println("Digits="+dc);
		System.out.println("Whitespace="+spc);
		System.out.println("Special characters="+syc);
	}
}