double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int n=nums1Size+nums2Size;
    int merged_arr[n];
    int c1=0;   // counter for nums1 array
    int c2=0;   // counter for nums2 array
    for(int i=0;i<n;i++) {
        if(c1<nums1Size && c2<nums2Size) {
            if(*(nums1+c1)>*(nums2+c2)) {
                merged_arr[i]=*(nums2+c2);
                c2++;
            } 
            else {
                merged_arr[i]=*(nums1+c1);
                c1++;
            }
        }
        else if(c1==nums1Size) {
            merged_arr[i]=*(nums2+c2);
            c2++;
        }
        else if(c2==nums2Size){
            merged_arr[i]=*(nums1+c1);
            c1++;
        }
    }
    
    // finding the median in the merged array
    double median;
    if(n%2==0) {
        median=(merged_arr[(n-1)/2]+merged_arr[n/2])/2.0;
    }
    else {
        median=merged_arr[n/2];
    }
    return median;
}