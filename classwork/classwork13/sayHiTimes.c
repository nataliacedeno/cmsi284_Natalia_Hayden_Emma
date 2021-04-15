#include <stdio.h> 
#include <inttypes.h>

// int64_t sayHiTimes(int64_t x);

// int main (int argc, char *argv[]) {

//     int result = 0; 
//     int n = atoi(argv[1]); 

//     result = count(n); 

// }

int64_t sayHiTimes(int64_t x){ 

    int64_t c = 0; 

    for(int i =0; i < x; i++){ 
        printf("Hello \n ");
        c++; 
    } 

    return c; 
}