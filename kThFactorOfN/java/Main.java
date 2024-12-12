import java.util.ArrayList;
import java.util.List;

class Main {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int n = (int)(Math.random() * 1000000);
        int k = 15;
        System.out.println(sol.kthFactor(n, k));
    }

    static class Solution {
        public int kthFactor(int n, int k) {
            List<Integer> factors = new ArrayList<>();
            for (int i = 1; i <= n; i++) {
                if (n % i == 0) {
                    factors.add(i);
                }
            }
            if (factors.size() < k) {
                return -1;
            }
            return factors.get(k - 1);
        }
    }
}