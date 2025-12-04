int searchInsert(int* nums, int numsSize, int target) {
    int lb = 0;
    int ub = numsSize-1;
    int val =0;
    while(lb<=ub){
        int mid = lb+(ub-lb)/2;
        if(nums[mid]==target){
            return  mid;
        }
        else if(nums[mid]>target){
            ub = mid -1;
        }
        else{
            lb = mid+1;
        }
    }
    return lb;
    
}