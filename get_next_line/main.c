#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
    char *line;
    int fd;
    fd = open("test.txt", O_RDONLY, 0777);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s\n",line);
        free(line);
    }
    close(fd);
    
}
