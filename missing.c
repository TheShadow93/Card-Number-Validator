/*
** missing.c for  in /home/sumeet.singh/delivery/CPool_rush2
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Sat Oct 15 22:55:47 2016 Sumeet Singh
** Last update Sun Oct 16 09:24:39 2016 Sumeet Singh
*/
#include "./include/my.h"

int     validate_cpy(char *cD)
{
  int   i;
  int   result;

  i = 0;
  result = 0;
  while (cD[i] != '\0')
    {
      if (i % 2 == 0)
	{
	  if (cD[i] >= '5')
	    result = result + (((cD[i] - 48) * 2) - 9);
	  else
	    result = result + (cD[i] - 48) * 2;
	}
      else
	result = result + (cD[i] - 48);
      i = i + 1;
    }
  if (result % 10 == 0)
      return (0);
  else
    return (84);
}

int	missing_nbr(char *code)
{
  int	i;
  char	*code_bis;

  code_bis = my_strdup(code);
  i = 0;
  while (i <= 9)
    {
      code_bis[15] = (48 + i);
      if (validate_cpy(code_bis) == 0)
	{
	  my_putchar(code_bis[15]);
	  my_putchar('\n');
	  return (0);
	}
      else
	i = i + 1;
    }
  return (84);
}
