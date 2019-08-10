#include<stdio.h>

int main()
{
     int x,p;
     int a[3];
    int sum=0;
    int i=0;
    scanf("%d %d", &x, &p);
    p=100-p;

    while(x>0)
    {
        
        sum=sum+x;
x=(p*x)/100;
    }
    printf("%d\n",sum);
    return 0;
}
