#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error_and_exit(const char* message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header_info(const Elf64_Ehdr* elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i) {
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid ELF class");
	printf("  Data:                              %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Invalid data encoding");
	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Invalid type");
	printf("  Entry point address:               %lx\n", (unsigned long)elf_header->e_entry);
}

int main(int argc, char* argv[])
{
	const char* filename;
	int fd;
	Elf64_Ehdr elf_filename;

	if (argc < 2) {
		print_error_and_exit("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		print_error_and_exit("Cannot open file");
	}

	if (read(fd, &elf_filename, sizeof(elf_filename)) != sizeof(elf_filename)) {
		print_error_and_exit("Cannot read ELF filename");
	}

	if (lseek(fd, 0, SEEK_SET) == -1) {
		print_error_and_exit("Error using lseek");
	}

	if (elf_filename.e_ident[EI_MAG0] != ELFMAG0 || elf_filename.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_filename.e_ident[EI_MAG2] != ELFMAG2 || elf_filename.e_ident[EI_MAG3] != ELFMAG3) {
		print_error_and_exit("Not an ELF file");
	}

	printf("ELF Header:\n");
	print_elf_header_info(&elf_filename);

	close(fd);
	return 0;
}

