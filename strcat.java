import java.util.*;
class Str
{
    public void strcpyX(String str1,String str2)
    {
        int size1=str1.length();
        int size2=str2.length();
        char arr1[]=str1.toCharArray();
        char arr2[]=str2.toCharArray();
        int i=0,j=0;
        char arr3[]= new char[str1.length()+str2.length()];
        for(i=0;i<size1;i++)
        {
            arr3[i]=arr1[i];
        }
        for(j=0;j<size2;i++,j++)
        {
            arr3[i]=arr2[j];
        }
        String nStr=new String(arr3);
        System.out.println(nStr);    }
}
public class Main
{
	public static void main(String[] args)
	{
	    Scanner s=new Scanner(System.in);
		Str s1=new Str();

		System.out.println("Enter String1");
		String str1=s.nextLine();
		System.out.println("Enter String2");
		String str2=s.nextLine();
		
		s1.strcpyX(str1,str2);
	}
}

