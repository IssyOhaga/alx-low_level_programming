#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @ac: number of command line arguments
 * @av: array of strings containing command line arguments
 *
 * This function takes two command line arguments and,
 * appends the text string to the end of the file.
 * whether the operation was successful or not.
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int ac, char **av)
{
int res;

if (ac != 3)
{
dprintf(2, "Usage %s filename text\n", av[0]);
exit(1);
}
res = append_text_to_file(av[1], av[2]);
printf("-> %i)\n", res);
return (0);
}
