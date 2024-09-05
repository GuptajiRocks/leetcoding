package rotatearray;
import java.util.*;
public class one {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7};
        int n = arr.length;
        int co = 0;
        while (co < 2) {
            int temp = arr[n-1];
            for (int i = 0; i < n-1; i++) {
                arr[n-i] = arr[n-1-i];
            }
            arr[0] = temp;
            co++;
        }

        System.out.println(Arrays.toString(arr));

    }
}