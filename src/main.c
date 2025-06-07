#include "handler.h"
#include <stdio.h>
#include <string.h>
#include <sys/dir.h>
#include "parser.h"

int main()
{
    printf("C Program running with C Version: %ld \n", __STDC_VERSION__);
    char *message = getMessage();
    printf("%s", message);

    int terminal_status = 0;
    // 1: keep running the terminal
    // 0: terminal the terminal

    while (terminal_status != 1)
    {
        // Read the command
        char input[50];
        printf("$");
        scanf("%s", input);

        switch (parse_command(input))
        {
        case 1:
            printf("Unsupported command entered: %s. Press 0 to exit\n", input);
            break;
        case 2:
            terminal_status = 1;
            break;

        default:
            break;
        }
    };

    return 0;
}

/**
 * A Unix Shell is supposed to do:
 * 1. Read
 * 2. Parse
 * 3. Execute
 */
