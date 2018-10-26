#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
char name[20];
char password[10];
printf("Enter username: ");
scanf("%s",name);
printf("Enter password: ");
scanf("%s",password);
if (strcmp(name, "oguzhann") == 0 && strcmp(password, "oguz52") == 0)
printf("Giris Yapildi...\n");
else
{
    printf("Giris Basarisiz...\n");
}

getch();
return 0;
}
