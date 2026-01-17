class Solution {
    public int singleNumber(int[] nums) {
        int rem = 0;
        for(int c : nums){
            rem ^=c;
        }
        return rem;
       
        
    }
}