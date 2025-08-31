import java.util.Scanner;

public class prime {
    public static void main(String args[]) {
        // Your Code Here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        boolean prime=true;
        if(n==1)
        prime=false;
        if(n==2||n==3)
        prime=true;
        if(n%2==0||n%3==0)
        prime=false;
        for(int i=5;i*i<n;i=i+6){
            if(n%i==0|| n%(i+2)==0){
                prime=false;
            }
        }
        if(prime==true){
            System.out.println("True");
        }
        else{
           
            System.out.println("False");
        }
    }
}