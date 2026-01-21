class Solution {
    public boolean isArraySpecial(int[] nums) {

        int i = 0 ;
        while(i+1<nums.length){
            if((nums[i]%2!=0)&&(nums[i+1]%2!=0)){
                return false;
                
            }
            if((nums[i]%2==0)&&(nums[i+1]%2==0)){
                return false;
                
            }

            i++;

        }
        return true;
        
    }
}