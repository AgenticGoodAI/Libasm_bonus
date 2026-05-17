#include "header.h"

int main(int argc, char **argv)
{

	char *a = "Hello";
	if (argc < 2)
	{
		printf("Please enter at least one argument then rerun the program\n");
		return (1);
	}
	test_list_size(argv);
}

// rdi
// rsi
// rdx
// rcx
// r8
// r9
// RAX (64-bit) / EAX (32-bit): Accumulator; used for arithmetic operations and function return values.
// RBX (64-bit) / EBX (32-bit): Base register; often used for data pointer.
// RCX (64-bit) / ECX (32-bit): Counter; used for shifts and loops.
// RDX (64-bit) / EDX (32-bit): Data register; used for I/O and multiplication/division.
// RSI (64-bit) / ESI (32-bit): Source Index; pointer to source string/data.
// RDI (64-bit) / EDI (32-bit): Destination Index; pointer to destination string/data.
// RBP (64-bit) / EBP (32-bit): Base Pointer; points to the base of the current stack frame.
// RSP (64-bit) / ESP (32-bit): Stack Pointer; points to the current top of the stack.
// R8–R15 (64-bit): Additional GPRs added in x86-64, available for general

// SYSCALL also saves RFLAGS into R11 and then masks RFLAGS using the IA32_FMASK MSR (MSR address C0000084H); specifically, the processor clears in RFLAGS every bit corresponding to a bit that is set in the IA32_FMASK MSR.
//r11 register will change with a specific mask it must represent somehting

// Common read failure values

// For Linux read(fd, buf, count):

// Failure	Meaning	Raw RAX after syscall
// EINTR	interrupted by signal before reading data	-4
// EIO	I/O error	-5
// EBADF	bad fd, or fd not open for reading	-9
// EAGAIN	nonblocking fd would block	-11
// EFAULT	buf points outside accessible memory	-14
// EISDIR	fd refers to a directory	-21
// EINVAL	unsuitable fd/object, bad alignment with O_DIRECT, wrong timerfd buffer size, etc.	-22
//errno number list https://www.chromium.org/chromium-os/developer-library/reference/linux-constants/errnos/

// read   	| return	| errno 
// EINTER	| -4		| 0x04.   //system interrupt
// EAGAIN	| -11	   	| 0x0b.   // resource temporary unavailable
// EBADF	| -9		| 0x09. //invalid file descriptor
// EFAULT	| -14		| 0x0e	//Address outside accessable value
// EINVAL	| -22		| 0x16		//unsuitable aligned (invalid arguments)
// EIO 		| -5 		| 0x05  //I/O error, may be due to processes issues
// EISDIR	| -21		| 0x15	//reading form directory
// EDESTADDRQ
// EDQUOT
// EFAULT
// EFBIG
//EINVAL
// EIO
// ENOSPC

