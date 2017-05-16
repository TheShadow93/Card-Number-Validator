/*
** fonction2.c for fct in /home/sumeet.singh/delivery/CPool_rush2
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Sun Oct 16 01:00:07 2016 Sumeet Singh
** Last update Sun Oct 16 09:20:21 2016 Sumeet Singh
*/
#include "./include/my.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i] && i < n)
    {
      if (s1[i] != s2[i])
	{
	  return (s1[i] - s2[i]) < 0 ? -1 : 1;
	}
      i = i + 1;
    }
  return (0);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
