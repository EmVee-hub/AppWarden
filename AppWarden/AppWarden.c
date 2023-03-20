#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>
#define VERSION "0.0.1\n"



int main(int argc, char **argv)
{
    int opt;
    while ((opt = getopt(argc, argv, "v")) != -1)
    {
        switch (opt)
        {
        case 'v':
            printf(VERSION);
            return 0;
        default:
            break;
        }
    }
    const char* procFd = "/proc";
    DIR* pDir;
    if ((pDir = opendir(procFd)) == NULL)
    {
        printf("%s\n", strerror(errno));
        return errno;
    }

    return 0;
}