class Solution {
    public boolean isHappy(int n) {
        int rem =0, result =0;
        while(n!=1 && n!=4){
            result =0;
            while(n>0){
                rem = n%10;
                result += rem *rem;
                n = n/10;
            }
            n = result;
           
          

        }
        return n ==1;

        
    }
}