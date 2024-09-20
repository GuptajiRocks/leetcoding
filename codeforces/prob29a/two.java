package codeforces.prob29a;
import java.util.Scanner;
//import java.util.Arrays;
public class two {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len = sc.nextInt();
        int[][] arr = new int[len][2];
        int tc, te;
        for (int i = 0; i < len; i++) {
            tc = sc.nextInt();
            te = sc.nextInt();
            
            if (tc > te) {
                arr[i][0] = te;
                arr[i][1] = tc;
            } else {
                arr[i][0] = tc;
                arr[i][1] = te;
            }
        }

        for (int i = 0; i < len; i++) {
            System.out.println(arr[i][0]+" "+arr[i][1]);
        }

        sc.close();
    }
}