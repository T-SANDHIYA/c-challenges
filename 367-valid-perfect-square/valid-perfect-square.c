bool isPerfectSquare(int num) {
    long int i=2;
   
    if(num==1){
        return true;
    }
    if(num<=0){
        return false;
    }
    
    while(i<num){
       
        if(i*i==num){
            return true;
        }
        i++;

    }
    return false;


    
}