int strStr(char * haystack, char * needle){
    int i,j = 0;
    while(i<strlen(haystack)) {
        j = 0;
        while(j < strlen(needle) && haystack[i+j] == needle[j]) {
            j++;
        }
        if(j == strlen(needle)) {
                return i;
        }
        i++;
    }
    return -1;
}