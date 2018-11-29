#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void Zadanie_1(void)
{
    printf("Zadanie 1\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("1) %d",a*b < a++);

    printf("\n-------\n");

    printf("2) %d",3*a++ < ++b);

    printf("\n-------\n");

    printf("3) %d",-a + ++b);

    printf("\n-------\n");

    printf("4) %d",a << b++);

    printf("\n-------\n");

    printf("5) %d",(a | b) || (a& b ));

    printf("\n-------\n");

    printf("6) %d",~a % --b);
}

void Zadanie_2(void)
{
    printf("\nZadanye 2 (dve peremenniye)\n");
    int x,n;
    scanf("%d %d",&x,&n);
    printf("%f",((tan (x))/(x))+pow(sin(pow(x ,n)), 1/n)+pow(2.7289850866, pow((n+1), (x+2))));
}

void _P(void)
{
    int n,a;
    printf("Vvedite kol-vo storon i samu storonu:");
    scanf("%d %d",&n,&a);
    printf("S = %f\n",n*a*a/(4*tan(3.14159265359/(n))));
}

void _R(void)
{
    int a,ang;
    printf("Vvedite storonu romba i ugol meshdu storon (v gradusah):");
    scanf("%d %d",&a,&ang);
    printf("S = %f\n",a*a*sin(ang*3.14159265359/180));
}

void _C(void)
{
    int r;
    printf("Vvedite radius kruga:");
    scanf("%d",&r);
    printf("S = %f\n",r*r*3.14159265359);
}
void Zadanie_31(void)
{
    printf("\nZadanye 3\n");
    while (1)
    {
        printf("P (ploshchad' pravil'mogo mnogougol'nika), R (ploshchad' romba), C (ploshchad' kruga), E (vykhod iz programmy):\n");
        char ch = _getch();
        if (ch = 'P') {_P();} else if (ch = 'R') {_R();} else if (ch =
'C') {_C();} else if (ch = 'E')
            {printf("Exiting...");
            _getch();
            exit(0);} else printf("Error synt...\n");
    }
}

void Zadanie_32(void)
{
    printf("\nZadanye 3\n");
    do {
        printf("P (ploshchad' pravil'mogo mnogougol'nika), R (ploshchad' romba), C (ploshchad' kruga), E (vykhod iz programmy):\n");
        char ch = _getch();
        switch (int(ch))
        {
            case int('P'):
                _P();
                break;
            case int('R'):
                _R();
                break;
            case int('C'):
                _C();
                break;
            case int('E'):
                printf("Exiting...");
                _getch();
                exit(0);
                break;
            default:
                printf("Error synt...\n");
                break;
        }
    } while (1);
}

void Zadanie_33(void)
{
    printf("\nZadanye 3\n");
    for (;1;)
    {
        printf("P (ploshchad' pravil'mogo mnogougol'nika), R (ploshchad' romba), C (ploshchad' kruga), E (vykhod iz programmy):\n");
        char ch = _getch();
        if (ch = 'P') {_P();} else if (ch = 'R') {_R();} else if (ch =
'C') {_C();} else if (ch = 'E')
            {printf("Exiting...");
            _getch();
            exit(0);} else printf("Error synt...\n");
    }
}

int main()
{
    Zadanie_1();
    Zadanie_2();
    Zadanie_32();
}

