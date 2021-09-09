class Sup 
{ 
int x; 
Sup(int a)    //constructor
{ 
this.x=a; 
} 
void display()
 { 
System.out.println("x in Super= "+x);
 }
 } 

class sub extends Sup
 {
 int y; 
sub(int a,int b) 
{ 
super(a);
 this.y=b; 
} 
void display() 
{ 
System.out.println("\nX in Super Class="+x); 
System.out.println("Y in Sub Class="+y);
 }
 }

class override 
{ 
public static void main(String naren[]) 
{ 
sub o=new sub(100,200); 
o.display(); 
} 
}
