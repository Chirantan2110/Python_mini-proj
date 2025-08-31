import java.util.Scanner;
public class operator{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int c;
        System.out.println("enter a number");
        int p=sc.nextInt();
        for(int i=1;i<=10;i++){
            c=p*i;
            System.out.print(c+" ");
        }
    }
}