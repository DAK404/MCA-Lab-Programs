import java.util.Arrays; 
import java.util.Collections; 
  
public class stringsort 
{ 
    public static void main(String[] args) 
    { 
        String [] arr = {"odd","even", "apple","zebra"}; 
        Arrays.sort(arr); 
        System.out.printf("Modified arr[] : %s", Arrays.toString(arr)); 
    } 
}
