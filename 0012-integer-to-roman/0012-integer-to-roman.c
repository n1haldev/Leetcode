char * intToRoman(int num){
    char *roman=malloc(sizeof(char)*100);
    memset(roman,0,sizeof(char)*100);
    int i=0;
    while(num!=0) {
        if(num>=1000) {
            roman[i++]='M';
            num-=1000;
        }
        else if(num>=900 && num<1000) {
            roman[i++]='C';
            roman[i++]='M';
            num-=900;;
        }
        else if(num>=500 && num<900) {
            roman[i++]='D';
            num-=500;
        }
        else if(num>=400 && num<500) {
            roman[i++]='C';
            roman[i++]='D';
            num-=400;
        }
        else if(num>=100 && num<400) {
            roman[i++]='C';
            num-=100;
        }
        else if(num>=90 && num<100) {
            roman[i++]='X';
            roman[i++]='C';
            num-=90;
        }
        else if(num>=50 && num<90) {
            roman[i++]='L';
            num-=50;
        }
        else if(num>=40 && num<50) {
            roman[i++]='X';
            roman[i++]='L';
            num-=40;
        }
        else if(num>=10 && num<40) {
            roman[i++]='X';
            num-=10;
        }
        else if(num==9) {
            roman[i++]='I';
            roman[i++]='X';
            num-=9;
        }
        else if(num>=5) {
            roman[i++]='V';
            num-=5;
        }
        else if(num==4) {
            roman[i++]='I';
            roman[i++]='V';
            num-=4;
        }
        else if(num>=1) {
            roman[i++]='I';
            num-=1;
        }
    }
    return roman;
}