class Box
{
	int ln;
	int br;
	int ht;
	Box()
	{
	  ln=0;
	  br=0;
	  ht=0;
	}
	Box(int a,int b,int c)
	{
	  ln=a;
	  br=b;
	  ht=c;

	}
	void show()
	{
	System.out.println("length = "+ln+"  breadth is = "+br+"  the height = "+ht);
	}
}

class BoxDemo
{

	public static void main(String args[])
	{
	  	Box b1=new Box();
		Box b2=new Box(4,5,6);
		b1.show();
		b2.show();
	}
}