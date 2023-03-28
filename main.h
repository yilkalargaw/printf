#ifndef MAIN_H
#define MAIN_H

#define NULL ((void *)0)

/**
 * struct custom_long_long - A structure to represent a 64-bit integer
 * @low: The low 32 bits of the integer
 * @high: The high 32 bits of the integer
 */
struct custom_long_long
{
	unsigned int low;
	unsigned int high;
};

typedef struct custom_long_long custom_long_long;

/**
 * struct custom_unsigned_long_long - A structure to
 * represent an unsigned 64-bit integer
 * @low: The low 32 bits of the integer
 * @high: The high 32 bits of the integer
 */
struct custom_unsigned_long_long
{
	unsigned int low;
	unsigned int high;
};

typedef struct custom_unsigned_long_long custom_unsigned_long_long;

int _putchar(char c);
void print_integer(int val);
void print_string(char *val);
void print_unsigned_long(unsigned long val);
void print_double(double val);
void print_octal(unsigned int val);
void print_hex(unsigned int val);
void print_HEX(unsigned int val);
void print_ptr(void *ptr_val);

int get_integer_length(int val);
int get_unsigned_long_length(unsigned long val);
int get_double_length(double val);
int get_octal_length(unsigned int val);
int get_HEX_length(unsigned int val);
int get_hex_length(unsigned int val);
int get_ptr_length(void *ptr_val);
int _printf(const char *format, ...);
int _strlen(char *s);


/* extern int _putchar_count; */

#if defined(__x86_64__) || defined(_M_X64)
typedef unsigned long my_uintptr_t;
#else
typedef unsigned int my_uintptr_t;
#endif

#ifndef CHAR_BIT
    #if defined(__LP64__) || defined(_LP64__) || defined(__x86_64__) || \
        defined(__ia64__) || defined(_M_X64) || defined(_M_IA64)
        #define CHAR_BIT (8 * sizeof(long))
    #else
        #define CHAR_BIT (8 * sizeof(int))
    #endif
#endif

#define MAX(a, b) {	  \
	printf("%d ", a); \
	printf("%d\n", b); \
}

#define FULL_PRT(type, print_function, length_function) \
	{ \
		type val = va_arg(args, type); \
		print_function(val); \
		length += length_function(val); \
	}

#define PRINT_CHAR() \
	{ \
		char val = va_arg(args, int); \
		_putchar(val); \
		length++; \
	}

#define PRINT_PTR() \
	{ \
		void *ptr_val = va_arg(args, void*); \
		print_ptr(ptr_val); \
		length += get_ptr_length(ptr_val); \
	}

#define PRINT_PERCENT() \
	{ \
		_putchar('%'); \
		length++; \
	}

#define PRINT_STRING() \
	{ \
		char* val = va_arg(args, char*); \
		if (val == NULL) val = "(null)"; \
		print_string(val); \
		length += _strlen(val); \
	}

#define GENERATE_SWITCH() \
	do { \
		switch (*(++p)) \
		{ \
		case 'd': \
		case 'i': \
			FULL_PRT(int, print_integer, get_integer_length); \
			break; \
		case 's': \
			PRINT_STRING(); \
			break; \
		case 'u': \
		case 'l': \
			FULL_PRT(unsigned long, print_unsigned_long, get_unsigned_long_length); \
			break; \
		case 'f': \
			FULL_PRT(double, print_double, get_double_length); \
			break; \
		case 'c': \
			PRINT_CHAR(); \
			break; \
		case 'o': \
			FULL_PRT(unsigned int, print_octal, get_octal_length); \
			break; \
		case 'X': \
			FULL_PRT(unsigned int, print_HEX, get_HEX_length); \
			break; \
		case 'x': \
			FULL_PRT(unsigned int, print_hex, get_hex_length); \
			break; \
		case 'p': \
			PRINT_PTR(); \
			break; \
		case '%': \
			PRINT_PERCENT(); \
			break; \
		default: \
			_printf("%%%c", *p);\
	} \
	} while (0)

#endif /* MAIN_H */
