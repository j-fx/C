#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // takes text
    string text = get_string("Text: ");

    // counter of letters, words and sentences
    int letters = 0;
    int sentences = 0;
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {

        if ((text[i] > 64 && text[i] < 91) || (text[i] > 96 && text[i] < 123))
        {
            letters++;
        }

        if (text[i] == ('.') || text[i] == ('!') || text[i] == ('?'))
        {
            sentences++;
        }
        if (text[i] == (' '))
        {
            words++;
        }


    }

    // determine reading level per Grades

    float L = (((float)letters / (float)words) * 100); // average number of letters per 100 words
    float S = (((float)sentences / (float)words) * 100); // average number of sentences per 100 words

    float index = 0.0588 * L - 0.296 * S - 15.8;


    // output result
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");

    }
    else
    {
        printf("Grade %.0f\n", index);
    }

}
