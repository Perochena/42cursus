# include <ctype.h>
# include <sys/mman.h>
# include <string.h>
# include <signal.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdint.h>
# include <limits.h>
# include <time.h>
# include <stdbool.h>
# include <sys/types.h>
# include <sys/wait.h>

int main(void)
{
	void tipo;

	typeof(isalnum(-1)) = tipo;
	printf("Tipo: %s\n", tipo);
}
