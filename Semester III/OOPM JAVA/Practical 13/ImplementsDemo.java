class AThread implements Runnable
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
class BThread implements Runnable
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
class ImplementsDemo
{
	public static void main(String args[])
	{
		System.out.println("Main Thread started!");		
		AThread a = new AThread();
		BThread b = new BThread();
		Thread t1 = new Thread(a);
		Thread t2 = new Thread(b);		
		t1.start();
		t2.start();
	}
}