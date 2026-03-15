
#include "stdio.h"
int main(){
int a[11] = { 0, 7, -34, 16, 92, 2, 0, 7, 44, 64, -56 };
int x, i;
printf("\n input the value to search: "); scanf("%d",&x);
//// here searching begins:
a[0] = x; //// setting up the barrier at a[0]!
i = 10; //// starting searching from the end down
while(x != a[i]) i--; //// only one operation in loop!
if (i > 0) { printf("\nFound!"); return 1; } //// number was found before the barrier
printf("\nNot found!"); 
return 0;
}