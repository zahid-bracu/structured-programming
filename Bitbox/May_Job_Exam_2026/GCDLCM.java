import java.util.Scanner;

public class GCDLCM {
    public static void main(String[] args) {
        // Using try-with-resources to automatically close the scanner
        try (Scanner sc = new Scanner(System.in)) {
            
            System.out.print("Enter two integers: ");
            int a = sc.nextInt();
            int b = sc.nextInt();

            int x = a;
            int y = b;

            // Euclidean algorithm loop
            while (y != 0) {
                int rem = x % y;
                x = y;
                y = rem;
            }

            int gcd = x;
            
            // Fixed to prevent integer overflow: divide before multiplying
            int lcm = (a / gcd) * b; 

            System.out.println("GCD = " + gcd);
            System.out.println("LCM = " + lcm);
        }
    }
}