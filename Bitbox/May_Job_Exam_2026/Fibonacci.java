import java.util.Scanner;

public class Fibonacci {
    void func(int a, int b, int n){
        if(n==0){
            return;
        }
        System.out.println(a);
        func(b, a+b, n-1);
    }
    public static void main(String[] args) {
        Fibonacci fn = new Fibonacci();
        fn.func(0,1,20);
    }
}