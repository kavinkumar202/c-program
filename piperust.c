#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter arrsize:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a[n],tot=1;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            tot=tot*a[j];
        }
        k[i]=tot;

    }
}
