#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "logic-gates.h"


int main() {
   bool a = true;
   bool b = false;

   bool c[8] = {false, false, false, false, true, true, false, true};
   bool d[8] = {false, true, false, false, true, true, true, true};


   printf("c array ");
   print_array(8, c);
   printf("d array ");
   print_array(8, d);

   bool e[8];

   adder(c,d,e);

   printf("e array ");
   print_array(8, e);

   return 0;
}
