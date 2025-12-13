bool isPowerOfFour(int n) {
    long temp = 1;
    if(n==0||n<=0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n%4!=0){
        return false;
    }
    while(temp<n){
        temp = temp*4;
        if(temp==n){
            return true;
        }
    }
    return false;
}