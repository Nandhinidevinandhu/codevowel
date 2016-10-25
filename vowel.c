#include<stdio.h>
#include<conio.h>
void main()
{
char str[1];
clrscr();
printf("\n Enter the character:");
scanf("%s",&str);
if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u')
printf("vowel");
else
printf("consonant");
getch();
}
