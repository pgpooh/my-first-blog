#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/state.h>
#include <sys/types.h>

void main(int argc, char **argv){
	int fd;
	char write_text[] = "#Top Secret InFORMATION !!! #\n";
	char *tmp = "~/race.tmp";

	fd = open(tmp,O_CREATE|O_RDWR|O_TRUNC);
	write(fd,write_text,strlen(write_text);
	close(fd);
	remove(tmp);
}
