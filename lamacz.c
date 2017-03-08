#include <stdio.h>
#include <string.h>

int checkpass(char *input){
	char *check = "haslo";
	return !(strcmp(check,input));	
}

void bruteImpl(char* str, int index, int maxDepth)
{
    for (int i = 0; i < alphabetSize; ++i){
        str[index] = alphabet[i];
        if (index == maxDepth - 1) printf("%s\n", str);
        else bruteImpl(str, index + 1, maxDepth);
    }
}

void bruteSequential(int maxLen){
    char* buf = malloc(maxLen + 1);
    for (int i = 1; i <= maxLen; ++i){
        memset(buf, 0, maxLen + 1);
        bruteImpl(buf, 0, i);
    }
    free(buf);
}

int main( int argc, char ** argv){
    int i,j;
    int posInTab = 0;
    /* rozmiary
     10 - cyfry
     26 - male litery
     26 - duze litery
     ------------
     62 - calosc*/
    int wholeTabLength = 62;
    int bigtab[wholeTabLength];
    int passLen;	
	passLen = atoi(argv[1]);
        
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
    
    for(i=0; i<passLen; i++){
    	for(j=0; j<=i; j++){
    		printf("%c",bigtab[i]);
		}
	}
    
	if (checkpass("haslo")){
		printf("dobre haslo");
	} else{
		printf("zle");
	}
	
	
	/*
	system("%s %s", "./zahaslowany.exe", "haslo");
	system("%s %s", "./zahaslowany.exe", "haslo");
    
	for(i=0; i<wholeTabLength; i++){
        printf("%c",bigtab[i]);
    }
	*/
    
}
