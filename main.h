#ifndef MAIN_H
#define MAIN_H

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

int _strlen(char *s);


#endif /* MAIN_H */

