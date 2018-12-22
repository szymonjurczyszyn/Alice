#include <stdio.h>
#include <stdlib.h>
// 2.2
void printBackwards(int *tab, int roz)
{
int i;
    for (int i=roz-1; i>=0; i--)
        {
            printf("%d \n", tab[i]);
        }
}
// 2.3
void printDots(int *tab, int roz) {
int i; int j;
    for (int i=0; i<(roz); i++)
        {
            for (j=0; j<=tab[i]-1; j++)
                {
                    printf(".");
                }
        printf("\n");
        }
}
// 2.4
int Sum(int *tab, int roz)
{
int r; int i;
r=0;
    for (int i=0; i<(roz); i++)
        {
                r=r+tab[i];
        }
return r;
}
// 2.1
int IsSorted (int *tab, int roz, int wkierunku)
{
    int cjp; int liczp; int liczn; int posortowane;
    liczp=0;
    liczn=0;
        for (int i=0; i<(roz-1); i++)
            {
                if (wkierunku==1)
                    {
                        if (tab[i]<tab[i+1])
                            {
                            cjp=1;
                            liczp=liczp+1;
                            } else {
                                        cjp=0;
                                        liczn=liczn+1;
                                    }
                    }
                if (wkierunku==0)
                    {
                        if (tab[i]>tab[i+1])
                            {
                                cjp=1;
                                liczp=liczp+1;
                            } else {
                                    cjp=0;
                                    liczn=liczn+1;
                                    }
                    }

            }
if (liczp==roz-1)
    {
        posortowane=1;
        return posortowane;
    } else {
            posortowane=0;
            return posortowane;
            }
}
int main()
{
    int tab[5]; int i; int j;
    int tabpd[]={3,2,5,4};
        for(i=0; i<5;i++)
            {
            j=i;
            printf("Podaj zmienna do tablicy nr %d :",j=j+1);
            scanf("%d",&tab[i]);
            }
    printf("%d \n", IsSorted(tab, 5,1));
    printBackwards(tab,5);
    printDots(tabpd,4);
        for(i=0; i<5;i++)
            {
                j=i;
                printf("Podaj zmienna do tablicy nr %d :",j=j+1);
                scanf("%d",&tab[i]);
            }
   printf("%d",Sum(tab,5));
// 2.5
int tabsb[6];
     for(i=0; i<=5;i++)
        {
            j=i;
            printf("\n Podaj zmienna do tablicy nr %d :",j=j+1);
            scanf("%d",&tabsb[i]);
        }
    int a; int b;
    for (i=0; i<=5; ++i)
        {
            if (tabsb[i]>tabsb[i+1])
            {
                a=tabsb[i];
                b=tabsb[i+1];
                tabsb[i]=b;
                tabsb[i+1]=a;
            }
    }
printf("Wynik sortowania babelkowego: \n");
     for(i=0; i<=5;i++)
        {
            j=i;
            printf("Zmienna tablicy nr %d : %d \n",j=j+1, tabsb[i]);
        }
return 0;
}
