#include <stdio.h>
#include <string.h>
int main()
{
char str[1000];
int count=0;

printf("Enter the all elements");
fgets(str,sizeof(str),stdin);
str[strcspn(str, "\n")] = '\0';
int i=0;
while(str[i]!='\0')
{

    i++;
    count++;
}
printf("Size=%d\n",count);
 printf("%s\n",str);


return 0;

}
