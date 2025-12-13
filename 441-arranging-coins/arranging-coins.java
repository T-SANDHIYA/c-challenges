class Solution {
    public int arrangeCoins(int n) {
        int i = 1;
        if(n==1){
            return 1;
        }
        else{
            while(i<=n){
                n = n-i;
                if(n==0){
                    return i;
                }
                i++;
            }
            return i-1;

        }
        
    }
}