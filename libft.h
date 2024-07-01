#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
size_t  ft_strlen(const char* s);
void    *ft_memset(void* str, int c, size_t n);
void    ft_bzero(void* s, size_t n);
void    *ft_memmove(void* str1, const void* str2, size_t n);
size_t	ft_strlcpy(char* dst, const char* src, size_t size);
size_t	ft_strlcat(char* dst, const char* src, size_t size);
int ft_toupper(int ch);
int ft_tolower(int ch);
char    *strchr(const char* str, int c);
char    *strrchr(const char* str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t n);
int ft_atoi(const char *str);
void    *ft_calloc(size_t num, size_t size);
char    *ft_strdup(const char *str);

#endif