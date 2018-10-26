#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int kenar1,kenar2;
   float hipotenus;

   printf("Ilk kenar uzunlugunu giriniz:"); scanf("%d",&kenar1);
   printf("Ikinci kenar uzunlugunu giriniz:"); scanf("%d",&kenar2);

   hipotenus = sqrt((kenar1*kenar1+kenar2*kenar2));

   printf("Hipotenus uzunlugu = %.2f", hipotenus);


    return 0;
}
