class A extends Thread
{
	public void run()
	{
		System.out.println("Thread A started!");
		for(int i=0;i<5;i++)
		{
			System.out.println("From A: i="+i);
		}
		System.out.println("Thread A stopped!");		
	}
}
class B extends Thread
{
	public void run()
	{
		System.out.println("Thread B started!");
		for(int j=0;j<5;j++)
		{
			System.out.println("From B: j="+j);
		}
		System.out.println("Thread B stopped!");
	}	
}
class ThreadDemo
{
	public static void main(String args[])
	{
		System.out.println("Main Thread started!");		
		A a = new A();
		B b = new B();
		a.start();
		b.start();
	}
}