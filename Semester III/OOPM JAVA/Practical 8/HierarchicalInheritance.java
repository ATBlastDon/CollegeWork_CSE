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
	void set_y(int p, int q)
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

class C extends A
{
	int z;
	void set_z(int p, int q)
	{
		set_x(p);
		z=q;
	}
	void show_z()
	{
		show_x();
		System.out.println("z="+z);
	}
}

class HierarchicalInheritance
{
	public static void main(String args[])
	{
		A a=new A();
		System.out.println("For object of Class A: ");
		a.set_x(5);
		a.show_x();
		B b=new B();
		System.out.println("For Object of Class B: ");
		b.set_y(50,100);
		b.show_y();
		C c=new C();
		System.out.println("For Object of Class C: ");
		c.set_z(10,20);
		c.show_z();
	}
}