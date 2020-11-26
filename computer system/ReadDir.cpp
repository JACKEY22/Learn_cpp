#include <iostream>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>
using namespace std;

int main(int argc, char *argv[])
{
    DIR *dir;
    struct dirent *entry;
    struct stat *statbuf;
    if ((dir = opendir(argv[1])) == NULL)
    {
        fprintf(stderr, "can't open '%s'\n", argv[1]);
        exit(1);
    }
    else
    {
        while ((entry = readdir(dir)) != NULL)
        {
            printf("%s %d \n", entry->d_name, statbuf->st_ino);
        }
    }
    closedir(dir);
    return 0;
}