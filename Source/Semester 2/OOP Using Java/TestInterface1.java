interface Printable{
    void print();
}
public class TestInterface1 implements Printable{
    public void print()
    {
        System.out.println("Hello");
    }
    public static void main(String args[])
    {
        TestInterface3 obj=new TestInterface3();
        obj.print();
    }
}