# 0x09. C - Static libraries

In this project, I learnt What `C` library is and the types (Static and Shared). I also learnt how to create a static `C` library using `ar` and `ranlib`

## Header File :file_folder:

* **`main.h`**: The header file containing the prototypes for all functions written in this project can be found here: [main.h](./main.h)

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  * We were tasked to create the static library [libmy.a](./libmy.a) containing all the functions listed below:
      * int _putchar(char c);
      * int _islower(int c);
      * int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
  
  
* **12. Numbers have life; they're not just symbols on paper**
  * The [101-print_number.c](./101-print_number.c) file contains a function that prints an integer.
