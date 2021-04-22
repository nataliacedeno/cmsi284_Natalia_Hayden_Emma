#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
 #include "makeNBOC.h"
//#define makeNBOC  

uint32_t makeNBOC(uint32_t num){ 
    uint32_t nbo; 
    nbo = htonl(num); 
   
    printf("0x%x\n", nbo);
    return nbo; 
}
