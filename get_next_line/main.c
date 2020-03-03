#include "get_next_line.h"

int	main(int ac, char **av)
{
	int fd[MAX_FD];
	int i;

	if (ac >= 2)
	{
		i = 0;
		char *line;
		while (i + 1 <= ac - 1)
		{
			fd[i] = open(av[i + 1], O_RDONLY);
			i++;
		}
		line = NULL;
		i = 0;
		while (i + 1 <= ac - 1)
		{
			while (get_next_line(fd[i], &line) == 1)
			{
				printf("<%s>\n", line);
				free(line);
			}
			printf("=======================\n");
			i++;
		}

	}
	return (0);
}
