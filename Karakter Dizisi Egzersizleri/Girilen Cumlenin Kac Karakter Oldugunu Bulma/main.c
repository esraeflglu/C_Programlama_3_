#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i=0;

    printf("Lutfen bir kelime yaz�n�z: \n");
    gets(cumle);

    while(cumle[i])
    {
        i++;
    }
    printf("Girilen kelimedeki karakter sayisi: %d\n",i);
    return 0;
}
