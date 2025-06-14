// #include "handler.h"
#include <stdio.h>
#include <string.h>
#include <sys/dir.h>
#include <stdlib.h>
// #include "parser.h"
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main()
{
    printf("C Program running with C Version: %ld \n", __STDC_VERSION__);
    printf("Welcome to Unix shell\n");

    int terminal_status = 0;
    // 1: keep running the terminal
    // 0: terminal the terminal

    while (terminal_status != 1)
    {
        terminal_status = runCommand();
    };

    return 0;
}

int runCommand()
{
    // Read the command

    char *cmd_input = NULL;
    size_t cmd_len;
    getline(&cmd_input, &cmd_len, stdin);
    // extract input tokens
    const char *delim = " ";
    char *elem;
    elem = strtok(cmd_input, delim);
    char *commands[3];
    int input_index = 0;
    while (elem != NULL && input_index < 2)
    {
        commands[input_index] = elem;
        input_index++;
        elem = strtok(NULL, " ");
    }
    commands[2] = NULL;
    printf("You have entered: %s, %s", commands[0], commands[1]);

    free(cmd_input);

    // spawn child process to run the unix command

    int pid = fork();

    if (pid > 0)
    {
        // Parent
    }
    else if (pid == 0)
    { // Child
        if (execvp(commands[0], commands) == -1)
        {
            printf("Error executing command: %d", errno);
            return 1;
        }
    }
    else
    {
        // Error
        printf("Could not spawn child process");
        return 1;
    }

    return 0;
    // char input[50];
    // printf("$");
    // scanf("%s", input);
    // printf("you have entered: %s\n", input);
    // Parse command inputs
}

/**
 * A Unix Shell is supposed to do:
 * 1. Read
 * 2. Parse
 * 3. Execute
 */
