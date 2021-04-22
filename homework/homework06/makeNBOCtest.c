#include <stdlib.h>
#include <inttypes.h>
#include <stdio.h>
//#include "makeNBOC.c"

uint32_t makeNBOC(uint32_t num);

int main(int argc, char *argv[]){ 

    uint32_t num = (uint32_t)atoi(argv[1]); 
    uint32_t nbo = makeNBOC(num); 

    printf("0x%x\n", nbo);

    return 0; 

}



