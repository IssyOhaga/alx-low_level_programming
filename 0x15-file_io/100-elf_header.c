#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/stat.h>
#include <sys/mman.h>

void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 * print_magic - prints the magic numbers of an ELF header
 * @e_ident: pointer to an array containing the ELF magic numbers
 *
 * Description: magic numbers are separated by spaces
 */
void print_magic(unsigned char *e_ident)
{
int index;

for (index = 0; index < 4; index++)
{
if (e_ident[index] != 127 &&
		e_ident[index] != 'E' &&
		e_ident[index] != 'L' &&
		e_ident[index] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic - prints the magic numbers of an ELF header
 * @e_ident: pointer to array containing ELF magic numbers
 *
 * Description: magic numbers are separated by spaces
 */
void print_magic(unsigned char *e_ident)
{
int index;

printf(" Magic:  ");

for (index = 0; index <EI_NIDENT; index++)
{
printf("%02x", e_ident[index]);

if (index == EI_NIDENT - 1)
	printf("\n");
else
	printf(" ");
}
}

/**
 * print_class - prints class of an ELF header
 * @e_ident: pointer to an array containing the ELF class
 */
void print_class(unsigned char *e_ident)
{
printf(" Class:						");

switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
	printf("none\n");
	break;
case
