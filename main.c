#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int Num1, Num2, Vagfol, Vagsesh;
    printf("Enter Vajjo & Vajok = ");
    scanf("%d %d", &Num1, &Num2);
    Vagfol=Num1/Num2;
    Vagsesh=Num1%Num2;
    printf("Vagfol & Vagsesh is = %d, %d", Vagfol, Vagsesh);
    getch();
    return 0;
}
