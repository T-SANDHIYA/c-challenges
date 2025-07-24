class Solution {
    public int fib(int n) {
        int first = 0, second = 1, result = 0;
        if(n==1){
            return 1;
        }
        for(int i=2;i<=n;i++){
            result = first + second;
            first = second;
            second= result;
        }
        return result;
        
    }
}