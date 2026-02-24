void moveZeroes(int* nums, int n) {

    if(n==1 && nums[0]==0){
        printf("%d",nums[0]);
    }
    int i =0;
    int j = 1;
    int temp =0;
    while(i<n && j<n){
        if(nums[i]==0 &&nums[j]!=0){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j++;
        }
        else if(nums[i]!=0 && nums[j]!=0){
            i++;
        }
        else if(nums[i]==0 && nums[j]==0){
            j++;
        }
        else{
            i++;
            j++;
        }
        if(i==j){
            
            j++;
        }
    }

    
    

    
}