abstract class one
{
  int x;
  abstract void disp();
one()
{
x=0;
}
  void show()
{
 System.out.println("x="+x);
}
}
class two extends one
{
int y;
two()
{
y=20;
}
void disp()
{
  System.out.println("y="+y);
}
}
class abstract1 
{
  public static void main(String [] args)
{
 one t = new two();
 t.show();
 t.disp();
}
}
