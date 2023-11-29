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
case ELFCLASS32:
	printf("ELF32\n");
	break;
case ELFCLASS64:
	printf("ELD64\n");
	break;
default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

}

/**
 * print_data - prints data of an ELF header
 * @e_ident: pointer to an array containing the ELF class
 */
void print_data(unsigned char *e_ident)
{
printf(" Data:					");

switch (e_ident[EI_DATA])
{
case ELFDATANONE:
	printf("none\n");
	break;
case ELFDATA2LSB:
	printf("2's complement, little endian\n");
	break;
default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

}

/**
 * print_version - prints the version of an ELF header
 * @e_ident: pointer to an array containing the ELF version
 */
void print_version(unsigned char *e_ident)
{
printf(" Version:					%d",
		e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
	printf(" (current)\n");
	break;
default:
	printf("\n");
	break;
}

}

/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @e_ident: pointer to an array containing the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:					");

switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
	printf("UNIX - System V\n");
	break;
case ELFOSABI_HPUX:
	printf("UNIX - HP-UX\n");
	break;
case ELFOSABI_NETBSD:
	printf("UNIX - NetBSD\n");
	break;
case ELFOSABI_LINUX:
	printf("UNIX - Linux\n");
	break;
case ELFOSABI_SOLARIS:
	printf("UNIX - Solaris\n");
	break;
case ELFOSABI_IRIX:
	printf("UNIX - IRIX\n");
	break;
case ELFOSABI_FREEBSD:
	printf("UNIX - Freebsd\n");
	break;
case ELFOSABI_TRU64:
	printf("UNIX - TRU64\n");
	break;
case ELFOSABI_ARM:
	printf("ARM\n");
	break;
case ELFOSABI_STANDALONE:
	printf("Standalone App\n");
	break;
default:
	printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

}

/**
 * print_abi - prints the ABI version of an ELF hEADER
 * @E_TYPE: ELF type
 * @e_ident: a pointer to an array containing the ELF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
	e_type >>= 8;
printf("  Type:					");

switch (e_type)
{
case ET_NONE:
	printf("NONE (None)\n");
	break;
case ET_REL:
	printf("REL (Relocatable file)\n");
	break;
case ET_EXEC:
	printf("EXEC (Executable file)\n");
	break;
case ET_DYN:
	printf("DYN (Shared object file)\n");
	break;
case ET_CORE:
	printf("CORE (Core file)\n");
	break;
default:
	printf("<unknown: %x>\n", e_type);
}

}

/**
 * print_entry - prints entry of an ELF header
 * @e_entry: address of the ELF entry point
 * @e_ident: pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:				");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
	((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident
	
