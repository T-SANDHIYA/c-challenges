class Solution {
    public String convertToBase7(int num) {
        int mul = 1;
        int s = 0;
        int rem =0;

        while(num!=0){
            rem = num%7;
            s = s + rem * mul;
            mul *= 10;
            num = num/7;

        }
        String result = String.valueOf(s);
        return result;

        
    }
}