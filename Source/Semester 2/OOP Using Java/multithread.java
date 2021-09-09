class S1 extends Thread{  
    S1()
{
   System.out.println("starting thread1");
}
 public void run(){  
   System.out.println("task one");  
 }  
}  
  
class S2 extends Thread
{  
    S2()
{
   System.out.println("starting thread2");

}

 public void run(){  
   System.out.println("task two");  
 }  
}  
  
class multithread{  
 public static void main(String args[]){  
  S1 t1=new S1();  
  S2 t2=new S2();
t1.start();
t2.start();

 }  
}  
