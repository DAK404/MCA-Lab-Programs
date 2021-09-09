import java.util.*;
class sod_pal
{
	public static void main(String args[])
	{		
		int n,rev=0, t,res,sum=0;
		Scanner s= new Scanner(System.in);
		System.out.print("Please Enter No. =  ");
		n=s.nextInt();
		t=n; 
	        System.out.print("Sum of digits of a number " +n+ " is = ");		
                while(n>0)
		{
			res=n%10;
                        rev = rev *10 + res;
			n=n/10;
			sum=sum+res;
		}
		System.out.println(+sum);
		if(rev==t)
                    System.out.println("Given number is a palindrome");
		else
		    System.out.println("Given number is not a palindrome");
		
	}
}
