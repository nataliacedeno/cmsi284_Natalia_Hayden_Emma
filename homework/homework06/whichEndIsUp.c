#include <stdio.h>

int main(){ 
    int i = 1; 

    char *b = (char*)&i; 

    // see if first character read is 1 or zero 

    if (*b == 1 ){          
        printf("Little endian \n"); 
    } else{ 
        printf("Big endian \n"); 
    }

    return(0); 
}