/*
** validate.c for  in /home/sumeet.singh/delivery/CPool_rush2
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Sat Oct 15 22:56:00 2016 Sumeet Singh
** Last update Tue May 16 17:29:16 2017 Sumeet Singh
*/
#include "./include/my.h"

int	ko_ok(int result)
{
  if (result % 10 == 0)
    {
      my_putstr(GREEN "This card number is valid\n" RESET);
      return (0);
    }
  else
    {
      my_putstr(RED "This card number is not valid\n" RESET);
      return (84);
    }
}

int	validate(char *cD)
{
  int	i;
  int	result;

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
  if (ko_ok(result) == 0)
      return (0);
  else
      return (84);
}
