/*CS288 H3 Session-2 HW#9;
*hwNumber09; 
*Adolfo Nakamura;
*07/31/2019*/
#include <stdio.h>
#include "personal.h"

int main(void) {
  int total = 0;
 int item = 2, item_cost = price_productA + price_productB, item_total = item;
 item_total = getItems(item);
 float grand_total = 0;
 printf("%f\n", grand_total);
  total =  price_productA + ( price_productA *  SALESTAX);
  grand_total = grand_total + total;
  printf(" New grand_total is %f\n", grand_total);
  printf("Item total is %d, item_cost is %d, and item_total is %d \n", item, item_cost, item_total);
  return 0;
}
