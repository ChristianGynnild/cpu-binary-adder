#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "logic-gates.h"

int main() {
   bool a = true;
   bool b = false;

   printf("The integer is: %d\n", xor(a,b));

   return 0;
}
