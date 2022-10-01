class StringBufferDemo
{
	public static void main(String[] args)
	{
	StringBuffer str = new StringBuffer("Finolex");
	System.out.println("Length=" + str.length());
        System.out.println("Capacity=" + str.capacity());
	str.append(" Academy");
	System.out.println("Append operation=" + str);
	str.replace(0,7,"Star");
	System.out.println("replace operation=" + str);
	str.reverse();
	System.out.println("reverse operation=" + str);
	str.insert(5,'X');
	System.out.println("insert operation=" + str);
	}
}
