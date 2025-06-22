#include <stdio.h>
#define UPPER 300 /* upper limit */
#define LOWER 0   /* lower limit */
#define STEP 20   /* step size */

// Fahrenheite to Celcius : BEGIN
float convert_to_celcius(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}

void fahr_to_cel()
{
    int fahr;
    // while (fahr <= upper)
    // {
    //     cel = (5.0 / 9.0) * (fahr - 32);
    //     printf("F: %6.2f | C: %6.2f \n", fahr, cel);
    //     fahr += 20;
    // }

    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("F: %6d | C: %6.2f \n", fahr, convert_to_celcius(fahr));
    }
}
// Excercise: 1-9: Write a program to copy its input to its output, replacing each string of one or
// more blanks by a single blank

void convert_multiple_spaces_to_single_space()
{
    int SPACE_ASCII = 32;
    int c = getchar();
    while (c != EOF)
    {
        if (c == SPACE_ASCII)
        {
            // While there is space char keeping taking input but don't print output
            while (c == SPACE_ASCII)
            {
                c = getchar();
            }
            // once the series of spaces have been read just print 1 space char
            putchar(SPACE_ASCII);
        }
        putchar(c);
        c = getchar();
    }
}

// Fahrenheite to Celcius : END

int main()
{
    /*Print all alphabets using ASCII*/

    // const int ALPHABET_ASCII_START = 65;
    // const int ALPHABET_ASCII_END = ALPHABET_ASCII_START + 26;
    // for (int i = ALPHABET_ASCII_START; i < ALPHABET_ASCII_END; i++)
    // {
    //     printf("%c\n", (char)i);
    // }

    /*Copy input to output*/
    convert_multiple_spaces_to_single_space();
}
