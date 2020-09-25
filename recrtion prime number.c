#include<stdio.h>
#include<conio.h>
main()
{
int n,p;
printf("enter n value");
scanf("%d",&n);
p=prime(n,n/2);
if(p==1)
    printf("%d is a prime numder",n);
else
    printf("%d is not a prime number",n);
    getch();
}
int prime (int n,int i)
{
    if(i==1)
        return 1;
        if(n%i==0)
            return 0;
        return prime(n,i-1);
    }
