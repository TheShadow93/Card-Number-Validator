/*
** fonction.c for fct in /home/sumeet.singh/delivery/CPool_rush2
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Sat Oct 15 22:30:02 2016 Sumeet Singh
** Last update Tue May 16 17:20:40 2017 Sumeet Singh
*/

#include "./include/my.h"
#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

char	*my_strdup(char *src)
{
  char	*dest;

  dest = malloc(my_strlen(src) * sizeof(char));
  my_strcpy(dest, src);
  return (dest);
}

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  i = i + 1;
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
