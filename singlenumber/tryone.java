package singlenumber;
import java.util.*;
public class tryone {
    public static int single(int[] arr) {
        LinkedHashMap<Integer,Integer> s1 = new LinkedHashMap<>();
        for (int i = 0; i<arr.length; i++) {
            int count = 0;
            for (int j = 0; j<arr.length; j++) {
                if (arr[i] == arr[j]) {
                    count = count + 1;
                }
            }

            s1.put(i,count);
        }
        
        for (int i = 0; i<s1.size(); i++) {
            System.out.println();
        }
        
                

        return 0;
    }
    
}
