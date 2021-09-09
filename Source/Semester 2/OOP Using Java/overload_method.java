class overload_method
 { 
void add(int a, int b)
 { 
System.out.println("sum = " +(a+b));
 } 
void add(String s1, String s2) 
{ 
System.out.println("Concat = " +(s1+s2)); 
} 
public static void main(String[] args) 
{ 
overload_method o=new overload_method(); 
o.add(23,12); 
o.add("REVA","University"); 
} 
}
