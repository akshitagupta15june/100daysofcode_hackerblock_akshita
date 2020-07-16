import java.util.*;
public class Main {
    public static void main(String args[]) {

		Scanner scn=new Scanner(System.in);

        int n=scn.nextInt(),i,j;
       // work for each row
        for(i=1;i<=n;i++){

            int num=1;   // starting number

           // work for values
            for(j=1;j<=i;j++){

                if(j==1)
                    System.out.print(j+"\t");
                else
                {
                    num=num*(i-j+1)/(j-1);     // updating number
                    System.out.print(num+"\t");
                }
            }
            System.out.print("\n");
        }

       

    }
}
