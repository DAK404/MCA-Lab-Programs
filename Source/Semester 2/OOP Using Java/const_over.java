class Rectangle
{
   int length;
   int width;

   void area() 
   {
     System.out.println("Area=" +(length*width));
   }

     Rectangle()
    {
        length=10;
        width=10;
     }
        Rectangle(int a)
         {
             length=width=a;
           }
         Rectangle(int a, int b)
         {
             length=a;
             width=b;
          }
}
class const_over
{
public static void main(String args[])
{
Rectangle r1= new Rectangle();
Rectangle r2=new Rectangle(5);
Rectangle r3=new Rectangle(20,10);
System.out.println(" ");
r1.area();
r2.area();
r3.area();
}
}
