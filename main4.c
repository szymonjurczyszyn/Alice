#include <stdio.h>
#include <stdlib.h>

int main()
{
// 1.1
   int tab[5];
   int i; int j; int h; int k; int l; int g;
   h=0;
   for(i=0; i<5;i++)
        {
            j=i;
            printf("Podaj zmienna do tablicy nr %d :",j=j+1);
            scanf("%d",&tab[i]);
        }
   for(i=0; i<5;i++)
        {
            h=0;
            for(j=0; j<5;j++)
                {
                    k=tab[i];
                    l=tab[j];
                    if (k>=l) h=h+1;
                }
    if (h==5) printf("Liczba najwieksza z tablicy to %d \n",k);
}
// 1.2
for(i=0; i<5;i++)
   {
        printf("%d \n", tab[i]);
   }
for(i=4; i>=0;i--)
   {
        printf("%d \n", tab[i]);

   }
// 1.3
for(i=0; i<5;i++)
   {
        j=i;
        printf("Podaj zmienna do tablicy nr %d :",j=j+1);
        scanf("%d",&tab[i]);
   }
int cjp; int liczp; int liczn;
    liczp=0;
    liczn=0;
for (int i=0; i<4; i++)
    {
       if (tab[i]<tab[i+1]) {
       cjp=1;
       liczp=liczp+1;
       } else {
       cjp=0;
       liczn=liczn+1;
              }
    }

if (liczp==4) printf("Cala tablica jest posortowana rosnaca!"); else printf("Liczba posortowanych liczb: %d", liczp);
return 0;
}
