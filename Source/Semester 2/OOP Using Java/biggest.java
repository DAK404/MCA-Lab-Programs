import java.util.*;
class biggest
{
	public static void main(String args[])
	{
	int n1, n2, n3, big;
		n1=Integer.parseInt(args[0]); 
		n2= Integer.parseInt(args[1]);
		n3= Integer.parseInt(args[2]);
		if(n1>n2 && n1>n3)
			big=n1;
		else if(n2>n1 && n2>n3)
			big=n2;
		else
			big=n3;
		System.out.println("Biggest No: " + big);
	     }
                    }
