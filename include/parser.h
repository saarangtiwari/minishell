struct Command
{
    char *command;
    char *args[];
};

struct Command parse_command(char *cmd_input);