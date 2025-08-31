import java.util.Scanner;

public class nextprime {
    public static void main(String args[]) {
        // Your Code Here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(n==2){
            System.out.println(3);
        }
        else if(n==3){
            System.out.println(5);
        }
        //int count=0;
        else{for(int i=n+1;i<n*n;i++){      //I can use 2n instead
            if(i%2==0||i%3==0||i%5==0){
                continue;
            }
            //count++;
        System.out.println(i);
        break;}
            
        }
        
        
    }
}