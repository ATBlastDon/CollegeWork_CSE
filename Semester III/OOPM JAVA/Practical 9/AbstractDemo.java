abstract class Figure
{
	double dim1;
	double dim2;
	Figure(double a, double b)
	{
		dim1 = a;
		dim2 = b;
	}
	abstract double area();
}
class Rectangle extends Figure
{
	Rectangle(double a, double b)
	{
		super(a, b);
	}
	double area()
	{
		System.out.println("Inside Area for Rectangle.");
		return dim1 * dim2;
	}
}
class AbstractDemo
{
	public static void main(String args[])
	{
		Rectangle r = new Rectangle(9, 5);
		Figure figref; // this is OK, no object is created
		figref = r;
		System.out.println("Area is " + figref.area());
	}
}