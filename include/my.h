/*
** my.h for  in /home/sumeet.singh/delivery/CPool_rush2/include
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Sun Oct 16 01:02:45 2016 Sumeet Singh
** Last update Tue May 16 17:31:22 2017 Sumeet Singh
*/
#ifndef RUSH2_H_
# define RUSH2_H_
#include <stdio.h>

#define RED   "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW   "\x1B[33m"
#define BLUE   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHITE   "\x1B[37m"
#define RESET "\x1B[0m"

void	my_putchar(char c);
int	my_strcmp(char *s1, char *s2);
int	my_strlen(char *str);
int	my_putstr(char *str);
char	*my_strdup(char *src);
int	my_strncmp(char *s1, char *s2, int n);
int	my_str_isnum(char *str);
int	validate_cpy(char *cD);
int	missing_nbr(char *code);
int	ko_ok(int result);
int	validate(char *cD);
char	*my_strcpy(char *dest, char *src);
#endif /* !RUSH2_H_ */
