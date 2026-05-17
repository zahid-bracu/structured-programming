public class Palindrom{
    public static void main(String [] args){
        int n=1441;
        int x=n;
        int r=0;
        while(n!=0){
            int digit=n%10;
            r=r*10+digit;
            n=n/10;
        }
        if(r==x){
            System.out.println("Palindrom");
        }else{
            System.out.println("Not Palindrom");
        }
    }
}