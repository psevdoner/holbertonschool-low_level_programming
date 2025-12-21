#ifndef MAIN_H
#define MAIN_H

/**
 * Fayl: main.h
 * Təsvir: Bütün funksiya prototiplərini özündə saxlayan header faylı.
 */

/* _putchar funksiyası (əgər istifadə edirsənsə) */
int _putchar(char c);

/* Task 0: malloc_checked */
void *malloc_checked(unsigned int b);

/* Task 1: string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Task 2: _calloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* Task 3: array_range */
int *array_range(int min, int max);


char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
