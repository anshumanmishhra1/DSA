package heaps;
import java.util.*;

public class HeapIntro {

    public static void makeHeap(int[] arr, int n) {
        ArrayList<Integer> ans = new ArrayList<>();
        ans.add(arr[0]); // Add the root element

        for (int i = 1; i < n; i++) {
            ans.add(arr[i]);
            int child = i;
            int parent = (child - 1) / 2;

            // Bubble up the current element to maintain max-heap property
            while (child > 0 && ans.get(child) > ans.get(parent)) {
                // Swap child with parent
                int temp = ans.get(child);
                ans.set(child, ans.get(parent));
                ans.set(parent, temp);

                // Update child and parent indexes
                child = parent;
                parent = (child - 1) / 2;
            }
        }

        // Print the resulting heap
        System.out.println("Heap: " + ans);
    }

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        makeHeap(arr, n);
    }
}
