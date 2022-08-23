class Circle
{
	int r;
	double pi=3.142;
	void setValues(int radius)
	{
		r=radius;
	}
	void getValues()
	{
		System.out.println("Radius is"+r);
	}	
	double findArea()
	{
		return(double)(pi*r*r);
	}
	double findPerimeter()
	{
		return(double)(2*pi*r);
	}
}
class CircleDemo
{
	public static void main(String args[])
	{
		Circle c1;
		c1=new Circle();
		c1.setValues(5);
		c1.getValues();
		System.out.println("Area is"+c1.findArea());
		System.out.println("Perimeter is"+c1.findPerimeter());
	}
}