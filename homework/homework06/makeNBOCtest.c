#include <stdlib.h>
#include <inttypes.h>
#include "makeNBO.c"

int main(int argc, char *argv[]){ 

    uint32_t num = (uint32_t)atoi(argv[1]); 
    uint32_t nbo = makeNBO(num); 


    printf("0x%x\n", nbo);

    return 0; 

}

