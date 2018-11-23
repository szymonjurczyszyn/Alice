#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()
{
// 2. Pêtle
// 2.1. Zapoznaæ siê z pêtl¹ while. Pêtla ta s³u¿y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN¥ Z GÓRY iloœæ razy. Pêtla
// wykonuje siê zawsze, jeœli warunek jest prawdziwy (ewaluowany do true). Napisaæ pêtlê, w któej u¿ytkownik podaje liczbê x. Nale¿y
// wyœwietliæ tê liczbê. Je¿eli u¿ytkownik poda 0, nale¿y zakoñczyæ program.
bool n; int m;
while (n==false){
printf("Podaj liczbe x, a jezeli 0 to zakoncz program: ");
scanf("%d",&m);
if (m==0) n=true; else n=false;
}
// 2.2. Przerobić kalkulator z zadania 1.6. Teraz po każdym działaniu program powinien spytać użytkownika, czy ten chce powtórzyć
// wszystko od początku. Jeśli tak - restartujemy kalkulator i zaczynamy od nowa. Jeśli nie - kończymy program.

    float a,b,wynik;
    char opcja, wprowadz;
do{
    printf("\nProsty kalkulator\n");
    printf("Dodawanie znak +\n ");
    printf("Odejmowanie znak -\n ");
    printf("Mnozenie znak *\n ");
    printf("Dzielenie znak /\n ");
    printf("Wprowadz operator: ");
    scanf("%s",&wprowadz);
    printf("Wpisz liczbe x1: ");
    scanf("%f",&a);
    printf("Wpisz liczbe x2: ");
    scanf("%f",&b);
    switch(wprowadz){
        case '+' : wynik=a+b;
                 printf("Dodawanie liczb : %f\n",wynik);
                 break;
        case '-' : wynik=a-b;
                 printf("Odejmowanie is : %f\n",wynik);
                 break;
        case '*' : wynik=a*b;
                 printf("Mnożenie : %f\n",wynik);
                 break;
        case '/' :
                 wynik=a/b;
                 printf("Dzielenia : %f\n",wynik);
                 break;

        default: printf("Zle wprowadzone dane\n");

    }
    printf("Chcesz powtorzyc ? (t/n)\n");
    opcja=getche();

    }while(opcja=='t');
// 2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. Zakończyć program, kiedy liczba przekroczy 100
// 000.
printf("Podaj liczbe x, aby wyswietlic wszystkie kolejne potegi: ");
int c; int a2; int b2;
scanf("%d",&a2);
for (b2=1;;b2++) {
      c = pow(a2,b2);
      printf("Liczba %d do potegi ",a2);
      printf("%d", b2);
      printf(" = %d \n",c);
if(c>100000 || a2==0 || a2==1) break;
}
// 2.4. Pobrać od użytkownika liczbę x. Jeśli liczba jest niedodatnia - należy zakończyć program. Następnie należy wyświetlać kolejno (w
// nowej linii) wszystkie liczby mniejsze od x, aż osiągnięte zostanie 0.
int x1;
printf("Podaj liczbe x, beda wyswietlane wszystkie liczby mniejsze od x do 0: ");
scanf("%d",&x1);
if (x1<0) {
printf("Podana zostala liczba ujemna wiec jest zakonczenie programu \n");
return 0;
}
x1=x1-1;
for (;x1>=0;x1--) {
printf("Wszystkie liczby mniejsze od podanej x to kolejno: %d \n", x1);
}
// 2.5. Zapoznać się z instrukcjami continue; i break;. Pierwsza służy do zakończenia iteracji i przejścia do następnej, a druga natychmiast
// kończy pętlę. Przerobić program z zadania 1.4, aby wyświetlał tylko parzyste liczby (użyć if oraz continue). Jeśli liczba wynosi 40, należy
// wyjść z pętli i zakończyć program.
 int g;
int g1;
for (g1=0;;g1++){
printf("Podaj liczbe x parzysta, ktora program sprawdzi, czy jest mniejsza, wieksza lub rowna 0: ");
scanf("%d", &g);
if (g % 2 ==0) {
if(g<0) printf("Podana liczba %d jest mniejsza od 0 \n",g); else if(g>0) printf("Podana liczba %d jest wieksza od 0 \n",g); else if(g==0) printf("Podana liczba %d jest rowna 0 \n",g);
continue;
} else break;
}
// 2.6. Zapoznać się z pętlą for. Pętla służy do wykonania danego fragmentu kodu ZNANĄ Z GÓRY określoną ilość razy. Uwaga - każdą pętlę
// for można zastąpić pętlą while i wzajemnie. Zwyczajowo obowiazuje zasada, że jeśli ilość iteracji jest znana - używamy for, a jeśli nie jest
// znana (zależy od użytkownika lub jakiegoś stanu zewnętrznego) - używamy pętli while. Pętla for składa się z: ZMIENNEJ ITERACYJNEJ,
// czyli stanu początkowego pętli, np. int i = 0. Następnie WARUNKU ZAKOŃCZENIA PĘTLI, np. i<10. Następnie OPERACJI WYKONYWANEJ
// PO KAŻDEJ ITERACJI - zazwyczaj jest to zwiększenie iteratora o 1, czyli i = i + 1, bądź w skrócie i++. Napisać pętlę for, która wyświetli cyfry
// od 0 do 9.
int g2;
for (g2=0;g2<=9;g2++) printf("%d \n", g2);
// 2.7. Pobrać od użytkownika liczby x i y. Zakładamy, że y > x (zawsze, nie musimy tego sprawdzać). Za pomocą pętli for wypisać liczby
// między x a y (do przemyślenia - co jest stanem początkowym, a co warunkiem zakończenia pętli?)
do{
printf("Liczby miedzy x a y: \n");
printf("Podaj x: ");
int x2; int y2;
scanf("%d",&x2);
printf("Podaj y: ");
scanf("%d",&y2);
printf("x= %d y= %d\n",x2,y2);
if (y2>x2) {
x2++;
for (;y2>x2;x2++) printf("Liczby pomiedzy y a x to: %d\n", x2);
} else {
y2++;
for (;y2<x2;y2++) printf("Liczby pomiedzy x a y to: %d\n", y2);
}
printf("Chcesz powtorzyc ? (t/n)\n");
    opcja=getche();

    }while(opcja=='t');
// 2.8. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisać wszystkie liczby mniejsze od x, ale większe niż 0.
int x3;
printf("Podaj x, aby program wyswietlil mniejsze liczby ale wieksze od 0: ");
scanf("%d",&x3);
x3--;
for (;x3>0;x3--) printf("Wszystkie liczby mniesze od x, ale wieksze niz 0: %d\n", x3);
// 2.9. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisywać CO TRZECIĄ liczbę większą od x. Pętla powinna się zakończyć, jeśli
// liczba przekroczy 100. Uwaga - proszę nie używać operacji continue i break, a sterować tylko parametrami pętli.
int x4;
printf("Podaj x, aby program wyswietlil co 3 liczbe wieksza od x do przekroczenia 100: ");
scanf("%d",&x4);
x4=x4+3;
for(;x4<100;x4=x4+3) printf("Co 3 liczba wieksza od x ale do przekroczenia 100 %d\n", x4);
system("pause");
return 0;
}
