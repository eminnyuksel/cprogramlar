#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Program:Girilen sayiya kadar olan
tek sayilarin toplamini hesaplar...
-Codded#
*/
int main() {

int i,sayi,sonuc;

printf("Bir sayi giriniz: "); scanf("%d",&sayi); //kullan�c�dan sayi ister
sonuc = 0;//s�f�rdan ba�lar
i=1;//tek sayi hesaplamak icin 1 yazdik
while(i<=sayi)
{
    sonuc = sonuc+i;
    i=i+2;//ardisik tek sayilari hesaplamak icin i+2 kulland�k

}
printf("Girdiginiz Sayiya Kadar olan tek sayilarin toplami = %d",sonuc);//en son toplami ekrana yazd�rd�k



}
