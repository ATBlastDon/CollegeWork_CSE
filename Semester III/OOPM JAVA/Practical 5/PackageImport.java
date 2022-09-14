import p1.PackageDemo;
import java.util.*;

class PackageImport
{
	public static void main (String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number 'n': ");
		int n = sc.nextInt();
		PackageDemo pd = new PackageDemo();
		pd.sumNatural(n);
	}
}
