import java.util.*;

public class Main {
    public static void main(String args[])
 {
   Scanner scn = new Scanner(System.in);
    int max = Integer.MIN_VALUE;
    for(int i = 0;i < 5;i++){

        int n = scn.nextInt();

        if(n > max){

            max = n;
        }

       }

       System.out.println(max);
       }
  }
