#include "ls.h"
#include <string.h>

int parse_command(char *cmd)
{
    // parse the command

    if (strcmp(cmd, "ls") == 0)
    {
        ls_command(".");
        return 0;
    }
    return 1;
}