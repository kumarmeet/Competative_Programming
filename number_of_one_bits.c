#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<stdint.h>

int hammingWeight(uint32_t);

int main()
{
    printf("%u",hammingWeight(00000000000000000000000010000000));
    return 0;
}

int hammingWeight(uint32_t n)
{

   int c = 0;
    while(n){
       if(n & 1 == 1)
        c++;
       n = n>>1;
    }
    return c;
}
