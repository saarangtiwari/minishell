#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <errno.h>

void ls_command(char *path)
{
    // print files in the directory
    printf("executing ls command for path: %s\n", path);
    DIR *dir;
    struct dirent *entry;
    if ((dir = opendir(path)) == NULL)
    {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dir)) != NULL)
    {
        printf("- %s\n", entry->d_name);
    }
    printf("\n");
    closedir(dir);
}