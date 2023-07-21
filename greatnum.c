#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
int values[n];
for(int i = 0; i < n; ++i) {
scanf("%d", &values[i]);
printf("%d", values[i]);
 }
 for(int i=0;i<n;i++)
if(values[0]<values[i]){
        values[0]=values[i];
        printf("%d",values[0]+"");}

}
