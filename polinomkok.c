#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int a,b,c;
float x1,x2;
float delta;

printf("A degeri giriniz: ");scanf("%d", &a);
printf("B degeri giriniz: ");scanf("%d", &b);
printf("C degeri giriniz: ");scanf("%d", &c);

delta = b*b -4*a*c;
x1 = (-b + (sqrt(delta)) ) /2*a ;
x2 = (-b - (sqrt(delta)) ) /2*a ;

printf("Denklemin 1.koku %.2f ,Ikinci koku %.2f 'dir",x1,x2);


return 0;
}
