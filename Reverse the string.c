#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];
   int i,size;
   printf("Enter your word (10 Character):");

       fgets(str,sizeof(str),stdin);

   size=strlen(str);
    printf("Reversed word\n");
   for(i=size-1;i>=0;i--)
   {
       printf("%c",str[i]);
   }
   printf("\n");






    return 0;
}
