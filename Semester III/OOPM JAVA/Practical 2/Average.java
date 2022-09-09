class Avg
{
	public static void main(String args[])
		{
			int a,b,c,d,e;
			a=Integer.parseInt(args[0]);
			b=Integer.parseInt(args[1]);
			c=Integer.parseInt(args[2]);
			d=Integer.parseInt(args[3]);
			e=Integer.parseInt(args[4]);
			double avg;
			avg=(a+b+c+d+e)/5;
			System.out.println("average of number is:" +avg);
		}
}