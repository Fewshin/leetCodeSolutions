double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int* combined = malloc(sizeof(int) * (nums1Size + nums2Size));
    //int endValue = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    double median = 0;

    // for (int i = 0; i < nums1Size; i) {
    //     for (int j = 0; j < nums2Size; j) {
    //         if (nums1[i] < nums2[j]) {
    //             combined[k] = nums1[i];
    //             k++;
    //             i++;
    //             //break;
    //         } 
    //         else {
    //             combined[k] = nums2[j];
    //             k++;
    //             j++;
    //         }
    //     }
    // }

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            combined[k] = nums1[i];
            i++;
        }
        else {
            combined[k] = nums2[j];
            j++; 
        }
        k++;
    }
    while (i < nums1Size) {
        combined[k] = nums1[i];
        i++;
        k++;
    }
    while (j < nums2Size) {
        combined[k] = nums2[j];
        j++;
        k++;
    }

    if ((nums1Size + nums2Size) % 2 == 0) {
        median = ((double)combined[(nums1Size + nums2Size)/2] + (double)combined[(nums1Size + nums2Size)/2 + - 1])/2;
    } 
    else {
        median = (double)combined[(nums1Size + nums2Size)/2];
    }

    //free(combined);

    return median;
}