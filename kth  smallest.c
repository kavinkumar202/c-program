#include<stdio.h>
int main()
{
    int k,n,i,j;
    printf("enter the K value: ");
    scanf("%d",&k);
    printf("enter the arr size: ");
    scanf("%d",&n);
    int a[n],temp;
    printf("enter array elements: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
            printf("%d ",a[i]);

    }
    printf("%d th element is: %d ",k,a[k]);
    return 0;
}
