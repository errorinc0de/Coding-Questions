class Solution {
    public boolean validMountainArray(int[] A) {
        int flaginc = 1, flagdec = 1, flagpivot = 1, count = 0;
        if (A.length < 3)
            return false;
                for (int i = 0; i < (A.length - 1); i++) {
                        if(A[i + 1] > A[i])
                                flaginc = 0;
                        else {
                                flagpivot = 0;
                                break;
                        }
                        count++;
                }
                for (int i = count; i < (A.length - 1); i++) {
                        if(A[i + 1] < A[i])  
                                flagdec = 0;
                        else {  
                                flagdec = 1;
                                break;       
                        }
                }
                if (flaginc == 0 && flagdec == 0 && flagpivot == 0)
                        return true;
                else
                        return false;
    }
}

