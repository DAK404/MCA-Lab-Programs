class fin{  
  public static void main(String args[]){  
  try{  
   int data=25/0;  
   System.out.println(data);  
  }
  catch(ArithmeticException e1)
{ 
  System.out.println(e1);
   }  

  catch(Exception e2)
  {
     System.out.println(e2);
   }  
  finally
  {
   System.out.println("finally block is always executed");
   }  
  System.out.println("rest of the code...");  
  }  
}  
