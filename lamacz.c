#include <stdio.h>
int main( int argc, char ** argv){
    int i;
    int posInTab = 0;
    /* rozmiary
     10 - cyfry
     26 - male litery
     26 - duze litery
     ------------
     62 - calosc*/
    int wholeTabLength = 62;
    int bigtab[wholeTabLength];
    
    for(i=97; i<122; i++){
        /* male litery */
        printf("%i-%c\n",i,i);
        bigtab[posInTab] = i;
        posInTab++;
    }
    for(i=65; i<91; i++){
        /* duze litery */
        printf("%i-%c\n",i,i);
        bigtab[posInTab] = i;
        posInTab++;

    }
    for(i=48; i<58; i++){
        /* cyfry */
        printf("%i-%c\n",i,i);
        bigtab[posInTab] = i;
        posInTab++;
    }
    for(i=0; i<wholeTabLength; i++){
        printf("%c",bigtab[i]);
    }



}
