#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// 3.1
int getLength(char *str)
{
int licz = 0;
while (str[licz] != '\0')
    {
        licz++;
    }
return licz;
}
// 3.2
void Reverse(char *str)
{
int licz = 0;
    while (str[licz]!='\0')
    {
        licz++;
    }
int i;
for (i=licz-1; i>=0; i--)
        {
            printf("%c",str[i]);
        }
}
// 3.3
bool containsDigits(char *str) {
int a = 0, n = 0, i = 0;
    for (i=0; str[i]!= '\0'; i++)
    {
      if (isalpha(str[i]) != 0)
            a++;
        else if (isdigit(str[i]) != 0)
            n++;

    }
if (n>=1) return true; else return false;
}
int main()
{
char strs[7];
strs[0]='H';
strs[1]='e';
strs[2]='l';
strs[3]='l';
strs[4]='o';
strs[5]='o';
strs[6]='\0';
printf("%d \n",getLength(strs));
Reverse(strs);
    if (containsDigits(strs)==false) printf("\n False"); else printf("\n True");
// 3.4
printf("\n Podaj lancuch znakow: ");
scanf("%s", strs);
printf("%d \n",getLength(strs));
Reverse(strs);
    if (containsDigits(strs)==false) printf("\n False"); else printf("\n True");
return 0;
}
