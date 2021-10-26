#include <cs50.h>
#include <stdio.h>

int get_until8_int(string prompt);



int main(void)
{
    int n = get_until8_int("Height: ");

    //Next line
    for (int i = 0; i < n; i++)//Next line
    {
        for (int j = i + 1; j < n; j++) //dots
        {
            printf(" ");
        }
        for (int k = -1; k < i ; k++) //hashes
        {
            printf("#") ;
        }

        printf("\n");
    }
}

// Prompt user for until8 integer
int get_until8_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}
 
