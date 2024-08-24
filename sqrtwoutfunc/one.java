import java.util.Scanner;
public class one {
    public static int sqe(int num) {
        if (num != 1) {
            for (int i = 0; i <= (num/2); i++) {
                if (i*i == num) {
                    return i;
                }
            }
        } else {
            return 0;
        }
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number you wish to calculate square root of: ");
        int num = sc.nextInt();
        int res = sqe(num);
        System.out.println(res);        
    }
}