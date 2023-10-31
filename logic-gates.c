#include <stdbool.h>
#include <stdio.h>
#include "logic-gates.h"

void print_array(int length, bool a[]){
    printf("%d:", length);
    for (int i = 0; i < length; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}

bool xor(bool a, bool b){
    return (a | b) & !(a&b);
}

void adder(bool a[8], bool b[8], bool output[8]){

    bool carry = false;

    for (int i = 0; i < 8; ++i){

        output[i] = xor(xor(a[i], b[i]), carry);
        carry = (a[i] & b[i]) | (a[i] & carry) | (b[i] & carry);
    }

    if (carry){
        printf("Carry:%d\n", carry);
    }
}