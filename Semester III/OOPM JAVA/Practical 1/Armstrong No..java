class Armstrong
{
	public static void main(String args[])
	{
		int n,temp,t,d,sum=0;
		n=Integer.parseInt(args[0]);
		temp=n;
		while(n!=0)
			{
				d=n%10;
				sum=sum+d*d*d;
				n=n/10;
			}
		if(sum==temp)
		{
		System.out.println(temp+"is Armstrong");
		}
		else
		System.out.println(temp+"is not a Armstrong");

	}
}