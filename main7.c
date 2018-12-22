#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//4.3
bool AreArraysIndetical(int *a1, int s1, int *a2, int s2)
{
int i=0; int licz=0;
if (s1==s2)
    {
    for(i=0; i<=s1-1;i++)
        {
            if (a1[i]==a2[i]) licz = licz + 1;
        }
    if (licz==s1) return true; else return false;
    }
}
// 2.2
void printBackwards(int *tab, int roz)
{
int i;
    for (int i=roz-1; i>=0; i--)
        {
                printf("%d \n", tab[i]);
        }
}
// 4.4
char *reverseString(char *str) {
    char *odwrocone = malloc(sizeof(1024));
    int j=-1, i=0;
    int licz = 0;
    while (str[licz]!='\0')
    {
        licz++;
    }
    for (i = licz-1; i>=0; i--)
        {
            j++;
            odwrocone[j] = str[i];
        }
    odwrocone[j + 1] = '\0';
    return odwrocone;
}
int main()
{
// 4.1
int n, i, j; size_t roz = 4; int *arr;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);
    arr = malloc (sizeof (roz) * n);
    for(i = 0; i < n; i++)
        {
            printf("Podaj element %d :", i+1);
            scanf("%d", &j);
            arr[i]=j;
        }
    printBackwards(arr,n);
    free(arr);
// 4.2
    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);
    arr = malloc (sizeof (roz) * n);
    for(i = 0; i < n; i++)
        {
            printf("Podaj element %d :", i+1);
            scanf("%d", &j);
            arr[i]=j;
        }
    int *arrb;
    arrb = malloc (sizeof (roz) * n);
    for(i = 0; i < n; i++)
        {
            arrb[i]=-arr[i];
            j=arrb[i];
            printf("%d \n",j);
        }
     free(arr);
     free(arrb);
// 4.3
int a1[3],s1,a2[3],s2;
a1[0]=1;
a1[1]=2;
a1[2]=3;
a2[0]=1;
a2[1]=2;
a2[2]=3;
s1=3;
s2=3;
if (AreArraysIndetical(a1,s1,a2,s2)==true) printf("True"); else printf("False");
// 4.4
char *str=malloc(sizeof(1024));
printf("\nPodaj lancuch znakow: ");
scanf("%s", str);
char *result=reverseString(str);
printf("%s",result);
free(result);
free(str);
return 0;
}
