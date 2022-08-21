import java.io.*;
class Factorial
{
	public static void main(String args[])throws IOException
	{
		int f=1,n;
		BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
		System.out.println("Enter a number:");
		n=Integer.parseInt(br.readLine());
		for(int i=1;i<=n;i++)
		f=f*i;
			{
			System.out.println("factorial of "+n+"="+f);
			}
	}
}
