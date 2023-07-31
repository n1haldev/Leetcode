bool rotateString(char * s, char * goal){
    for(int i=0;i<strlen(s);i++) {
        if (strcmp(s, goal) == 0) 
            return true;
        for(int j=0;j<strlen(goal)-1;j++) {
            int temp = s[j];
            s[j] = s[j+1];
            s[j+1] = temp;
        }
    }
    return false;
}

// void rotate(char *s)
// {
//     char temp;
//     //printf("String before rotation : %s\n",s);
//     for(int i=0;i<strlen(s)-1;i++){
//         temp = s[i];
//         s[i] = s[i+1];
//         s[i+1] = temp;
//         }
//     //printf("String after rotation : %s\n",s);
// }



// bool rotateString(char * s, char * goal){
//     for(int i=0;i<strlen(s);i++){
//         rotate(s);
//         if(strcmp(s,goal)==0){return true;}
//     }
//     return false;
// }