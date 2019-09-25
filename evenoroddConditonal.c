#include<stdio.h>
#include<conio.h>
void main ()
{
    int a;
    printf("Enter the number to check:\n");
    scanf("%d",&a);
    (a%2==0)?printf("%d is even number",a):printf("%d is odd number",a);
    getch();
}
