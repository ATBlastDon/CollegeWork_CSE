import java.util.*;
class VectorDemo
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		Vector<String> v=new Vector<String>(); //Vector v=new Vector();
		char ch='y';
		int opt;
		String s,s1;
		while(ch=='y'||ch=='Y')
		{
			System.out.println("Choose an option:\n1:Insert\n2:Update\n3:Search\n4:Delete\n");
			opt=sc.nextInt();
			switch(opt)
			{
				case 1:
					System.out.println("Enter city to be added");
					s=sc.next();
					if(v.contains(s))
						System.out.println("City already exists!");
					else
					{
						v.addElement(s);
						System.out.println(s+" added successfully!");
						System.out.println(v);
					}					
					break;
				case 2:
					System.out.println("Enter city to modify");
					s1=sc.next();
					if(v.contains(s1))
					{
						int i=v.indexOf(s1);
						System.out.println("Enter new city name");
						s=sc.next();
						v.setElementAt(s,i);
						System.out.println("City updated successfully!");
						System.out.println(v);
					}
					else
						System.out.println("City doesn't exist in vector!!");
					break;
				case 3:
					System.out.println("Enter city name to search");
					s=sc.next();
					if(v.contains(s))
						System.out.println(s+" is present at location "+v.indexOf(s));
					else
						System.out.println("City doesn't exist in vector!!");	
					break;
				case 4:
					System.out.println("Enter a city to delete");
					s=sc.next();
					if(v.contains(s))
					{
						v.removeElement(s);
						System.out.println(s+" deleted successfully!");
						System.out.println(v);
					}
					else
						System.out.println("City doesn't exist in vector!!");
					break;
				default:
					System.out.println("Invalid choice\n");
					break;
			}
			System.out.println("Continue?(y/n)");
			ch=sc.next().charAt(0);
		}
	}
}