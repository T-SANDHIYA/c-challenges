char* reverseVowels(char* s) {
    int n = strlen(s);
    int i=0, j=n-1;
    while(i<j){
        if((s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')&&(s[j]=='A'||s[j]=='a'||s[j]=='e'||s[j]=='E'||s[j]=='i'||s[j]=='I'||s[j]=='o'||s[j]=='O'||s[j]=='u'||s[j]=='U')){

            char temp = s[i];
            s[i]=s[j];
            s[j]= temp;
            j--;
            i++;
          
        }
        else if((s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')&&(s[j]!='A'||s[j]!='a'||s[j]!='e'||s[j]!='E'||s[j]!='i'||s[j]!='I'||s[j]!='o'||s[j]!='O'||s[j]!='u'||s[j]!='U')){
            j--;
            
        }
        else if((s[i]!='A'||s[i]!='a'||s[i]!='e'||s[i]!='E'||s[i]!='i'||s[i]!='I'||s[i]!='o'||s[i]!='O'||s[i]!='u'||s[i]!='U')&&(s[j]=='A'||s[j]=='a'||s[j]=='e'||s[j]=='E'||s[j]=='i'||s[j]=='I'||s[j]=='o'||s[j]=='O'||s[j]=='u'||s[j]=='U')){
                i++;
        }
        else{
            i++;
            j--;
        }
        

    }
    
   

    
    
    return s;

}