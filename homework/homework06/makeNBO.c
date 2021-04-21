#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


uint32_t makeNBO(uint32_t num){ 

    uint32_t nbo; 

    nbo = htonl(num); 
   
    //printf("0x%x\n", nbo);

    return nbo; 
}

int main(){ 
    return 0; 
}
