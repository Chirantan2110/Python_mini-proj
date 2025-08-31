import java.util.Scanner;
public class factorial {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int i=1;
        int n=sc.nextInt();
        for( i=1;i<=n;i++){
            i=n*i;
        }
        System.out.println(i);
    }
    
}
