#ifndef MAIN_H
#define MAIN_H
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _putchar(char c);
void *malloc_checked(unsigned int b);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void init(char *str, int l);
void _print(char *str, int l);
int check_for_digits(char **av);
char *mul(char n, char *num, int num_index, char *dest, int dest_index);
#endif
