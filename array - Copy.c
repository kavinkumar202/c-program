#include <stdio.h>
int main()
{
    char string1[255];
    int  i;
   printf("");
   gets(string1);
   i=0;
    while(string1[i]!='\0')
    {
        if(string1[i]=='a' ||string1[i]=='e' ||string1[i]=='i' ||string1[i]=='o' ||string1[i]=='u')
            string1[i]=string[i]-32;
        i++;
    }
    printf(string1);
}
