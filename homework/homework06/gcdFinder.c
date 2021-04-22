//TO COMPILE:
//nasm -fwin32 findGCD2.asm && gcc gcdFinder.c findGCD2.obj -o gcdFinder

#include <assert.h>
#include <inttypes.h>
#include <stdio.h>

int findGCD2(int n1, int n2);

int main() {

    printf("GCD of 3113041662 and 11570925: %d\n", findGCD2(3113041662 ,11570925));
    assert(findGCD2(3113041662 ,11570925)==462837);

    return 0;
}