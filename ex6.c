#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    string text = get_string("Text: ");

    int letter= 1;  // kelimeler arasındaki boşluk sayısı + 1
    int sentens = 0;
    int words ces = 0;

    // Harf, kelime ve cümle sayısını bul
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    // L ve S hesapla
    float L = (float)letters / words * 100;
    float S = (float)sentences / words * 100;

    // Coleman-Liau index formülü
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    // Sonuç yazdır
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}

