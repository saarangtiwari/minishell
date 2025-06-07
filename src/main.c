#include "handler.h"
#include <stdio.h>
#include <string.h>
#include <sys/dir.h>
#include "parse_command.h"

int main()
{
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

        if (strncmp(input, "0", 10) == 0)
        {
            terminal_status = 1;
        }
        else
        {
            int res = parse_command(input);
            if (res == 1)
            {
                printf("Unsupported command entered: %s. Press 0 to exit\n", input);
            }
            else
            {
                printf("Command executed. Press 0 to exit\n");
            }
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
