#include <stdio.h>  //printf()
#include <unistd.h> //getOpt()
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
    return 0;
}