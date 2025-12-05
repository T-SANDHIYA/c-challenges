int calPoints(char** operations, int operationsSize) {
    int static stack[10005];
    int top = -1, temp,result=0;
    for(int i=0;i<operationsSize;i++){
        if(strcmp(operations[i],"C")==0){
            if(top>=0)
              --top;

        }
        else if(strcmp(operations[i],"D")==0){
            
            stack[++top]=2*stack[top];

        }
        else if(strcmp(operations[i],"+")==0){
             temp = stack[top]+stack[top-1];
             stack[++top]=temp;
            
        }
        else{
            stack[++top] = atoi(operations[i]);
           
        }
    }

   
    for(int i =0;i<=top;i++){
        result = result + stack[i];

    }
    return result;
        
    
}