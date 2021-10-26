#include <stdio.h>
#include <cs50.h>
#include <math.h>

float get_positive_float(string prompt);

int main(void)
{
    int q = 0; // quartes
    int d = 0; // dimes
    int n = 0; // nickles
    int p = 0; // pennies
    int cents = get_positive_float("Change owed: ");

    while (cents >= 25)
    {
        cents = cents - 25;
        q++;
    }
    while (cents >= 10)
    {
        cents = cents - 10;
        d++;
    }
    while (cents >= 5)
    {
        cents = cents - 5;
        n++;
    }
    while (cents >= 1)
    {
        cents = cents - 1;
        p++;
    }
    printf("Your change is %i quarters, %i dimes, %i nickles, %i pennies\n", q, d, n, p);
    int coins = q + d + n + p;
    printf("%i\n", coins);

}

//prompt get_positive_float
float get_positive_float(string prompt)
{
    float dollars;
    int cents;
    do
    {
        dollars = get_float("%s", prompt);
        cents = round(dollars * 100);
    }
    while (cents < 1);
    return cents;
}
