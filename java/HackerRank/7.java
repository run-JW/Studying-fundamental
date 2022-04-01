import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int result = a;
            int temp = 0;
            
            for (int j = 0; j < n; j++) {
                temp = pow(2, j) * b;
                result += temp;
                 
                System.out.print(result + " ");
            }
            System.out.println();
        }
        in.close();
    }
    
    public static int pow(int a, int b) {
        int result = a;
        if (b == 0) return 1;
        if (b == 1) return a;
        
        for (int i = 2; i <= b; i++) {
            result *= a;
        }
        
        return result;
    }
}
