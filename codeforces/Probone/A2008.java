package codeforces.Probone;
import java.util.Scanner;

public class A2008 {

    public static void chc(int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            int sum = (arr[i][0] + (2*(arr[i][1])));
            
            if (sum%2 != 0) {
                System.out.println("NO");
            } else {
                int hsum = sum/2;
                if ((hsum%2 == 0) || (hsum%2 != 0 && arr[i][0] > 0)) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len = sc.nextInt();
        int[][] arr = new int[len][2];

        for (int i = 0; i < len; i++) {
            arr[i][0] = sc.nextInt();
            arr[i][1] = sc.nextInt();
        }

        chc(arr);

        sc.close();
        
    }
}
