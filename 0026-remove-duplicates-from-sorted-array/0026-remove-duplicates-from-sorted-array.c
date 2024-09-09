int removeDuplicates(int* nums, int numsSize) {
    // int arr[numsSize],j=0,c=1;
    // // arr[0]=nums[0];
    // for(int i=1;i<numsSize;i++){
    //     if(nums[i]==nums[j]){
    //         j++; 
    //         continue;
    //     }
    //     if(nums[i]!=nums[j]){//For Unique Element
    //         nums[i]=nums[j];
    //         j++;
    //         c++;
    //     }
    // }
    // return c+1;
    if (numsSize == 0) {
        return 0;
    }

    int j = 0;  // Index for the next unique element

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[j]) {
            j++;          // Move to the next position for a new unique element
            nums[j] = nums[i];  // Update the array in place
        }
    }

    return j + 1;  // Return the count of unique elements
}