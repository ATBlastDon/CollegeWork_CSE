class A
{
	int x;
	void set_x(int p)
	{
		x=p;
	}
	void show_x()
	{
		System.out.println("x="+x);
	}
}
class B extends A
{
	int y;
	void set_y(int p,int q)
	{
		set_x(p);
		y=q;
	}
	void show_y()
	{
		show_x();
		System.out.println("y="+y);
	}
}
class SingleInheritance
{
	public static void main(String args[])
	{
		A a=new A();
		a.set_x(5);
		a.show_x();
		B b=new B();
		b.set_y(50,100);
		b.show_y();
	}
}