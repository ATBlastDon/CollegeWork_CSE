import java.util.Scanner;
class MatrixSum
{
	public static void main(String args[])
	{
		int dsum=0,ndsum=0,r,c;
		int[][] m=new int[3][3];
		Scanner sc=new Scanner(System.in);
		for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				System.out.print("Enter element:"+r+":"+c+"\t");
				m[r][c]=sc.nextInt();
				if(r==c)
					dsum=dsum+m[r][c];
				else
					ndsum=ndsum+m[r][c];
			}
		}
		for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
				System.out.print(m[r][c]+" ");
			System.out.println();
		}
		System.out.println("Sum of Diagonal elements="+dsum);
		System.out.println("Sum of non-diagonal elements="+ndsum);
	}
}