#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    int i=0;
    int vowel=0;
    int consonent=0;
    printf("Enter your sentence under 100 letters\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")]='\0';
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
           vowel++;

        }
        else if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {


            consonent++;
        }
        i++;
    }
    printf("Total vowel=%d\n",vowel);
    printf("Total consonent=%d\n",consonent);




    return 0;
}
