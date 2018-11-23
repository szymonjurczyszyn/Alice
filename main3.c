#include <stdio.h>
#include <stdlib.h>
// 3.1. Napisaæ metodê void NewLine(). Powinna ona wypisaæ na ekran pojedyncz¹ pust¹ liniê. U¿yæ tej metodê w main().
void NewLine() {
printf("\n");
}
// 3.2. Napisaæ metodê void NewLines(int count). Powinna ona wypisaæ tyle nowych linii, ile zosta³o podanych W PARAMETRZE count (nale¿y
// u¿yæ pêtli for). U¿yæ metodê w main()
void NewLines(int count) {
int i;
for(i=0;i<=count;i++) printf("\n");
}
// 3.3. Napisaæ metodê void WriteBiggerNumber(int x, int y). Metoda powinna pobraæ 2 parametry i zwróciæ wiêkszy z nich. Wykorzystaæ
// funckjê w metodzie main(). UWAGA - pobieranie liczb od u¿ytkownika powinno odbyæ siê w funkcji main(), a NIE w WriteBiggerNumber! Do
// funkcji nale¿y jedynie przes³aæ pobrane wczeœniej parametry.
void WriteBiggerNumber(int x, int y){
if (x>y) printf("X jest wieksze od Y\n"); else printf("Y jest wieksze od X\n");
}
// 3.4. Napisaæ metodê Multiply(int x, int y) . Metoda powinna ZWRÓCIÆ (s³owo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
// NIE POWINNA wypisywaæ wyniku - powinien on byæ wyœwietlony w funkcji main!
int Multiply(int x, int y) {
int z;
z = x * y;
return z;
}
int main()
{
NewLine();
NewLines(3);
int x,y;
printf("Porownywanie x z y\n");
printf("Podaj x: ");
scanf("%d",&x);
printf("Podaj y: ");
scanf("%d",&y);
WriteBiggerNumber(x,y);
printf("Mnozenie x z y\n");
printf("Podaj x: ");
scanf("%d",&x);
printf("Podaj y: ");
scanf("%d",&y);
printf("%d",Multiply(x,y));
}
