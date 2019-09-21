#include<stdio.h>
#include<conio.h>
void main()
{
    char name[20]; int age; float height;
    printf("Hello user! Enter your name:");
    scanf("%s",&name);
    printf("\nEnter your height:");
    scanf("%f",&height);
    printf("\nEnter your age:");
    scanf("%d",&age);
    printf("\nHi %s! You are %d years old and your height (in cm ) is %f",name,age,height);
    getch();

}
