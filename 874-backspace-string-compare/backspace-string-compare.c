bool backspaceCompare(char* s, char* t) {
    char stack1[1000];
    char stack2[1000];
    int top1 =-1, top2 =-1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='#'){
            if(top1>=0)top1--;
            
        }
        else{
            stack1[++top1]=s[i];
        }
    }
    for(int j=0;t[j]!='\0';j++){
        if(t[j]=='#'){
            if(top2>=0)top2--;
        }
        else{
            stack2[++top2]=t[j];
        }
    }
    stack1[++top1] = '\0';
    stack2[++top2] = '\0';
    int i=0;
    while (stack1[i] != '\0' || stack2[i] != '\0') {
        if (stack1[i] != stack2[i])
            return false;
        i++;
    }

    return true;


    
}