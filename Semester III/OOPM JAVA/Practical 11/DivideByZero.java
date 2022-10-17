class DivideByZero
{
	public static void main(String args[])
	{
		int x,y;
		x=Integer.parseInt(args[0]);
		y=Integer.parseInt(args[1]);
		try
		{
			System.out.println("Division="+(x/y));
			System.out.println("No Exception!!");
		}
		catch(ArithmeticException e)
		{
			System.out.println("Divide by zero exception occured!!"+e);
		}
		System.out.println("After try-catch blocks..");
	}
}