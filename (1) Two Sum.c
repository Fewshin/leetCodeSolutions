/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* numsFound = (int*)malloc(sizeof(int)*2);
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            // if (j == i) { 
            //     continue;
            // }
            if (nums[i] + nums[j] == target) {
                numsFound[0] = i;
                numsFound[1] = j;
                return numsFound;
            }
        }
    }
    return numsFound;
}