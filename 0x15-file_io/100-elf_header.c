#include <stdio.h>
#include <elf.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

static char text[1024];
/**
 * get_class - returns the class of the ELF file
 *
 * @CLASS: unsigned char
 * Return: char *
 */
char *get_class(unsigned char CLASS)
{
	switch (CLASS)
	{
		case ELFCLASSNONE:
			return ("none");
		case ELFCLASS32:
			return ("ELF32");
		case ELFCLASS64:
			return ("ELF64");
		default:
			memset(text, '\0', 1024);
			sprintf(text, "<unknown: %x>", CLASS);
			return (text);
	}
}


/**
 * get_data - returns the data encoding of the ELF file
 *
 * @DATA: unsigned char
 * Return: char *
*/
char *get_data(unsigned char DATA)
{
	switch (DATA)
	{
		case ELFDATANONE:
			return ("none");
		case ELFDATA2LSB:
			return ("2's complement, little endian");
		case ELFDATA2MSB:
			return ("2's complement, big endian");
		default:
			memset(text, '\0', 1024);
			sprintf(text, "<unknown: %x>", DATA);
			return (text);
	}
	return (text);
}


/**
 * get_version - get the version of the ELF file
 *
 * @VERSION: unsigned char
 * Return: char *
*/
char *get_version(unsigned char VERSION)
{
	memset(text, '\0', 1024);
	if (VERSION == EV_CURRENT)
		return ("1 (current)");
	if (VERSION != EV_CURRENT)
		sprintf(text, "%i\n", VERSION);

	return (text);
}


/**
 * get_osabi - gets the OS/ABI of the ELF file
 *
 * @OSABI: unsigned char
 * Return: char *
*/
char *get_osabi(unsigned char OSABI)
{
	memset(text, '\0', 1024);
	switch (OSABI)
	{
		case ELFOSABI_SYSV:
			return ("UNIX - System V");
		case ELFOSABI_HPUX:
			return ("UNIX - HP-UX");
		case ELFOSABI_NETBSD:
			return ("UNIX - NetBSD");
		case ELFOSABI_LINUX:
			return ("UNIX - Linux");
		case ELFOSABI_SOLARIS:
			return ("UNIX - Solaris");
		case ELFOSABI_AIX:
			return ("UNIX - AIX");
		case ELFOSABI_IRIX:
			return ("UNIX - IRIX");
		case ELFOSABI_FREEBSD:
			return ("UNIX - FreeBSD");
		case ELFOSABI_TRU64:
			return ("UNIX - TRU64");
		case ELFOSABI_ARM:
			return ("ARM");
		case ELFOSABI_STANDALONE:
			return ("Standalone App");
		default:
			memset(text, '\0', 1024);
			sprintf(text, "<unknown: %x>", OSABI);
			return (text);
	}
}


/**
 * get_type - gets the type of the ELF file
 *
 * @TYPE: unsigned int
 * Return: nothing
*/
char *get_type(unsigned int TYPE)
{
	if (TYPE == ELFDATA2MSB)
		TYPE >>= 8;

	switch (TYPE)
	{
		case ET_NONE:
			return ("NONE (Unknown type)");
		case ET_REL:
			return ("REL (Relocatable file)");
		case ET_EXEC:
			return ("EXEC (Exexutable file)");
		case ET_DYN:
			return ("DYN (Shared object file)");
		case ET_CORE:
			return ("CORE (Core file)");
		default:
			memset(text, '\0', 1024);
			sprintf(text, "<unknown: %x>", TYPE);
			return (text);
	}
}


/**
 * print_elf_header - A function that prints a information about an elf file
 *
 * @header: Elf64_Ehdr
 * Return: void
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
			get_class(header->e_ident[EI_CLASS]));
	printf("  Data:                              %s\n",
			get_data(header->e_ident[EI_DATA]));
	printf("  Version:                           %s\n",
			get_version(header->e_ident[EI_VERSION]));
	printf("  OS/ABI:                            %s\n",
			get_osabi(header->e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			get_type(header->e_type));
	printf("  Entry point address:               %#lx\n",
			header->e_entry);

}


/**
 * main - A fuction that is the starting point of the program
 *
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int argc, char **argv)
{
	char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc < 2 || argc > 3 || (argc == 3 && strcmp(argv[1], "-h") != 0))
	{
		fprintf(stderr, "Usage: elf_header [-h] elf_filename\n");
		return (98);
	}

	filename = argv[argc - 1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		return (98);
	}
	printf("ELF Header:\n");
	print_elf_header(&header);
	close(fd);
	return (0);
}

