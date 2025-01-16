#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY | O_WRONLY  , 0777);
    if (fd == -1)
    {
        perror("Dosya açılamadı");
        return (1);
    }

    // Dosyadan satır satır okuma işlemi yapıyoruz
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line); // Satırı yazdırıyoruz
        free(line);          // Satırın belleğini serbest bırakıyoruz
    }

    close(fd);
    
    return (0);
}
