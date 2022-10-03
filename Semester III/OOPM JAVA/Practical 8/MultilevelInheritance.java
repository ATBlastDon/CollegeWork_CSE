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
class C extends B
{
	int z;
	void set_z(int p, int q, int r)
	{
		//set_x(p);
		set_y(p,q);
		z=r;
	}
	void show_z()
	{
		//show_x();
		show_y();
		System.out.println("z="+z);
	}
}
class MultilevelInheritance
{
	public static void main(String args[])
	{
		A a=new A();
		System.out.println("For object of class A:");
		a.set_x(5);
		a.show_x();
		B b=new B();
		System.out.println("For object of class B:");
		b.set_y(50,100);
		b.show_y();
		C c=new C();
		System.out.println("For object of class C:");
		c.set_z(10,20,30);
		c.show_z();
	}
}