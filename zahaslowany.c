#include <stdio.h>
int main( int argc, char ** argv){
    
    if(!strcmp(argv[1],"haslo")){
        printf("dobrze");
        return 0;
    }
    printf("zle");
    return 1;
}
