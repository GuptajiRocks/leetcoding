
public class one {
    public static int sqe(int num) {
        if (num != 1) {
            for (int i = 0; i < (num/2); i++) {
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
        int res = sqe(4);
        System.out.println(res);

        
    }
}