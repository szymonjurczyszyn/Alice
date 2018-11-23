#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
// 1. Zmienne, komunikacja z u¿ytkownikiem. Instrukcje warunkowe
// Uwaga! Nale¿y pamiêtaæ o dodaniu odpowiednich nag³ówków do funkcji. Dla std::cin i std::cout jest to <iostream>, a dla printf i scanf jest
// to <stdio.h> lub <cstdio.h>
// 1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.
// 1.2. Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d
    int a; float b; char c;
    a=4; b=32.32; c='d';
    printf("Zmienna typu int: %d \n",a);
    printf("Zmienna typu float: %f \n",b);
    printf("Zmienna typu char: %c \n",c);
// 1.3. Pobraæ od u¿ytkownika liczbê x. Wyœwietliæ kwadrat liczby x.
    int e; int f;
    printf("Podaj liczbe x, ktora program podniesie do kwadratu: ");
    scanf("%d", &e);
    f = pow(e,2);
    printf("Kwadrat liczby x to %d \n",f);
// 1.4. Zapoznaæ siê z instrukcjami warunkowymi (if, else if, else oraz switch). Pobraæ od u¿ywkownika liczbê i wyœwietliæ informacjê, czy jest
// ona: mniejsza, wiêksza, czy równa 0.
    int g;
    printf("Podaj liczbe x, ktora program sprawdzi, czy jest mniejsza, wieksza lub rowna 0: ");
    scanf("%d", &g);
    if(g<0) printf("Podana liczba %d jest mniejsza od 0 \n",g); else if(g>0) printf("Podana liczba %d jest wieksza od 0 \n",g); else if(g==0) printf("Podana liczba %d jest rowna 0 \n",g);
// 1.5. Pobraæ ud u¿ytkownika 3 liczby (x1, x2, x3). Wyœwietliæ informacjê, która z tych liczb jest najwiêksza.
    int h; int i; int j;
    printf("Porownywanie liczb \n");
    printf("Podaj liczbe x1: ");
    scanf("%d", &h);
    printf("Podaj liczbe x2: ");
    scanf("%d", &i);
    printf("Podaj liczbe x3: ");
    scanf("%d", &j);
    if (h>i && h>j) printf("Liczba x1 najwieksza \n");
    if (i>h && i>j) printf("Liczba x2 najwieksza \n");
    if (j>i && j>h) printf("Liczba x3 najwieksza \n");
// 1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie,
// odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie
// 0)
     float a1,b1,wynik;
    char wprowadz;

    printf("\nProsty kalkulator\n");
    printf("Dodawanie znak +\n ");
    printf("Odejmowanie znak -\n ");
    printf("Mnozenie znak *\n ");
    printf("Dzielenie znak /\n ");
    printf("Wprowadz operator: ");
    scanf("%s",&wprowadz);
    printf("Wpisz liczbe x1: ");
    scanf("%f",&a1);
    printf("Wpisz liczbe x2: ");
    scanf("%f",&b1);
    switch(wprowadz){
        case '+' : wynik=a1+b1;
                 printf("Dodawanie liczb : %f\n",wynik);
                 break;
        case '-' : wynik=a1-b1;
                 printf("Odejmowanie is : %f\n",wynik);
                 break;
        case '*' : wynik=a1*b1;
                 printf("Mnożenie : %f\n",wynik);
                 break;
        case '/' :
                 wynik=a1/b1;
                 printf("Dzielenia : %f\n",wynik);
                 break;

        default: printf("Zle wprowadzone dane\n");

    }



    return 0;
}
