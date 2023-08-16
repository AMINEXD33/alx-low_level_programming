#include <stddef.h>
#ifndef __print_name_H
#define __print_name_H
void print_name(char *name, void (*f)(char *));
#endif /*__print_name_H*/
#ifndef __array_iterator_H
#define __array_iterator_H
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /*__array_iterator_H*/