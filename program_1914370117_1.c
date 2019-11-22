#include <stdio.h>
int main ()
{
    int hasil=5,bil;
    printf("Masukkan bilangan faktorial; ");
    scanf("%d",&bil);
    int faktorial;
    for(faktorial=5; faktorial<=bil; faktorial++)
    {
        hasil=faktorial*hasil;
    }
    printf("faktorial dari 5 = 5 x 4 x 3 x 2 x 1 = 120",bil,hasil);
        {
            getche ();
        }
}
