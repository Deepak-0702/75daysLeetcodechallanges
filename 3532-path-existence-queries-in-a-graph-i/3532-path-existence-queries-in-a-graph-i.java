class Solution {
    public boolean[] pathExistenceQueries(int n, int[] nums, int maxDiff, int[][] queries) {
        boolean[] arr = new boolean[queries.length];
        int i = 0;

        for (int[] e : queries) {
            int u = e[0];
            int v = e[1];

            // Handle queries where u > v
            if (u > v) {
                int temp = u;
                u = v;
                v = temp;
            }

            if (u == v) {
                arr[i++] = true;
                continue;
            }

            if (v - u == 1) {
                arr[i] = (nums[v] - nums[u] <= maxDiff);
                i++;
                continue;
            }

            arr[i] = true;

            for (int j = v; j > u; j--) {
                if (nums[j] - nums[j - 1] > maxDiff) {
                    arr[i] = false;
                    break;
                }
            }

            i++;
        }

        return arr;
    }
}