#include <stdio.h>
typedef struct
{
        int num;
        int den;
} Fraction;

int main()
{
        Fraction addFraction(Fraction a, Fraction b);
        Fraction subFraction(Fraction a, Fraction b);
        Fraction mulFraction(Fraction a, Fraction b);
        Fraction divFraction(Fraction a, Fraction b);
        Fraction a;
        printf("Enter numerator of first fraction: ");
        scanf("%d", &a.num);
        printf("Enter denominator of first fraction: ");
        scanf("%d", &a.den);
        Fraction b;
        printf("Enter numerator of second fraction: ");
        scanf("%d", &b.num);
        printf("Enter denominator of second fraction: ");
        scanf("%d", &b.den);
        printf("First fraction: %d/%d", a.num, a.den);
        printf("\nSecond fraction: %d/%d", b.num, b.den);

        Fraction add,sub,mul,div;
        add=addFraction(a,b);
        sub=subFraction(a,b);
        mul=mulFraction(a,b);
        div=divFraction(a,b);
        printf("\n\nAdded results: %d/%d",add.num,add.den);
        printf("\nSubtracted results: %d/%d",sub.num,sub.den);
        printf("\nMultiplied results: %d/%d",mul.num,mul.den);
        printf("\nDivided results: %d/%d",div.num,div.den);
        printf("\n");
}

Fraction addFraction(Fraction a, Fraction b)
{
        Fraction c;
        c.num = a.num * b.den + a.den * b.num;
        c.den = a.den * b.den;
        return c;
} // end addFraction

Fraction subFraction(Fraction a, Fraction b)
{
        Fraction c;
        c.num = a.num * b.den - a.den * b.num;
        c.den = a.den * b.den;
        return c;
} // end subFraction
Fraction mulFraction(Fraction a, Fraction b)
{
        Fraction c;
        c.num = a.num * b.num;
        c.den = a.den * b.den;
        return c;
} // end mulFraction
Fraction divFraction(Fraction a, Fraction b)
{
        Fraction c;
        c.num = a.num * b.den;
        c.den = a.den * b.num;
        return c;
} // end divFraction
