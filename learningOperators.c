
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b, sum, sub, division, module;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    division=a/b;
    module=a%b;
    printf("sum= %d, Sub= %d, division=%d,module=%d",sum,sub,division,module);
    getch();
}
