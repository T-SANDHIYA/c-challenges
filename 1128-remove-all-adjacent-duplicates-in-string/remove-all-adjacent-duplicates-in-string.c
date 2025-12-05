char* removeDuplicates(char* s) {
    int top = -1;
    static char stack[100005];
    for(int i =0;s[i]!='\0';i++){
        if(top == -1 || s[i]!=stack[top]){
            stack[++top] = s[i];

        }
        else{
            --top;
        }

    }
    stack[++top] = '\0';
    return stack;
   

    
}