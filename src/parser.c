#include "ls.h"
#include <string.h>

int parse_command(char *cmd)
{
    // return codes:
    // 0 -> success;
    // 1 -> incorrect command;
    // 2 -> terminate;

    // parse the command

    if (strncmp(cmd, "0", 10) == 0)
    {
        return 2;
    }

    if (strcmp(cmd, "ls") == 0)
    {
        ls_command(".");
        return 0;
    }
    printf("Unsupported command entered: %s. Press 0 to exit\n", cmd);
    return 0;
}