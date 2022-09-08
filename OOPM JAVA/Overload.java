class Area
{
	int r;
	int l,b;
	void area(int a)
	{
	  double m;
	   r=a;
	   m=3.14*r*r;
	   System.out.println(" the area of circle is  "+m);
	}
      void area(int x,int y)
	{
		double p;
		l=x;
		b=y;
		p=l*b;
		System.out.println(" the perimeter of rectangle is  "+p);	
	}
}
class OverLoad
{
	public static void main(String args[])
	{
		Area a1=new Area();
		a1.area(4);
		a1.area(4,5);
	}
}