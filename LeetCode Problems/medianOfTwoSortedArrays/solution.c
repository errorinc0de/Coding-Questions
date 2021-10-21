double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i=0,j=0,k=0,len, index;
    long int arr[1000000];
    while(i<nums1Size && j<nums2Size){
        if(nums1[i]<=nums2[j]){
            arr[k]=nums1[i];
            i++;
        }
        else{
            arr[k]=nums2[j];
            j++;
        }
        k++;
    }
    if(nums1Size == nums2Size) {
        if(j==nums2Size){
            while(i<nums1Size){
                arr[k]=nums1[i];
                i++;
                k++;
            }
        }
        else {
            while(j<nums2Size){
                arr[k]=nums2[j];
                j++;
                k++;
            }
        }
        
    }
    else if(nums1Size>nums2Size){
        while(i<nums1Size){
            arr[k]=nums1[i];
            i++;
            k++;
        }
    }
    else{
        while(j<nums2Size){
            arr[k]=nums2[j];
            j++;
            k++;
        }
    }
    len=(nums1Size+nums2Size);
    
    if(len==1)
        return arr[0];
    else if(len%2==0){
        index = len/2;
        return (double)(arr[index-1]+arr[index])/2;
    }
    else{
        return (arr[len/2]);
    }
}
