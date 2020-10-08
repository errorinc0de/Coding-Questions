class Solution {
    public void duplicateZeros(int[] arr) {
        int n = arr.length - 1;
                for (int i = 0; i < n; i++) {
                        if (arr[i] == 0) {
                                for(int j = n - 1; j > i; j--) {
                                        arr[j + 1] = arr[j];
                                }
                                arr[i + 1] = 0;
                                i++;
                        }
                }
                for (int i = 0; i < n; i++) {
                        System.out.println(arr[i]);
                }

    }
}
