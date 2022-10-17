class MyException extends Exception
{
	void handle()
	{
		System.out.println("No negatives please!!!");
	}
}
class CheckException
{
	public static void check(int n) throws MyException
	{
		if(n<0)
		{
			MyException e=new MyException();
			throw e;
		}
		System.out.println("No Exception....Positive accepted!!");
	}
	public static void main(String args[])
	{
		try
		{
			int a=Integer.parseInt(args[0]);
			check(a);			
		}
		catch(MyException me)
		{
			System.out.println("Exception Caught!!");
			me.handle();
		}
		catch(Exception e)
		{
			System.out.println("Other Exception:"+e);
		}
	}
}