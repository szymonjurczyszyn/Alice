#include <stdio.h>
#include <stdlib.h>
// 3.1. Napisa� metod� void NewLine(). Powinna ona wypisa� na ekran pojedyncz� pust� lini�. U�y� tej metod� w main().
void NewLine() {
printf("\n");
}
// 3.2. Napisa� metod� void NewLines(int count). Powinna ona wypisa� tyle nowych linii, ile zosta�o podanych W PARAMETRZE count (nale�y
// u�y� p�tli for). U�y� metod� w main()
void NewLines(int count) {
int i;
for(i=0;i<=count;i++) printf("\n");
}
// 3.3. Napisa� metod� void WriteBiggerNumber(int x, int y). Metoda powinna pobra� 2 parametry i zwr�ci� wi�kszy z nich. Wykorzysta�
// funckj� w metodzie main(). UWAGA - pobieranie liczb od u�ytkownika powinno odby� si� w funkcji main(), a NIE w WriteBiggerNumber! Do
// funkcji nale�y jedynie przes�a� pobrane wcze�niej parametry.
void WriteBiggerNumber(int x, int y){
if (x>y) printf("X jest wieksze od Y\n"); else printf("Y jest wieksze od X\n");
}
// 3.4. Napisa� metod� Multiply(int x, int y) . Metoda powinna ZWR�CI� (s�owo kluczowe return) iloczyn dw�ch parametr�w. Uwaga! Metoda
// NIE POWINNA wypisywa� wyniku - powinien on by� wy�wietlony w funkcji main!
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
