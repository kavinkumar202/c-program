#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("The 3 mixed fraction value:");
    scanf("%d %d %d",&a,&b,&c);
    d=(a*c)+b;
    printf("%d/%d",d,c);
    return 0;
}
