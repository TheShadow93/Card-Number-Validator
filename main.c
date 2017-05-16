/*
** main.c for  in /home/sumeet.singh/delivery/CPool_rush2
**
** Made by Sumeet Singh
** Login   <sumeet.singh@epitech.net>
**
** Started on  Sat Oct 15 22:53:01 2016 Sumeet Singh
** Last update Tue May 16 17:27:29 2017 Sumeet Singh
*/
#include "./include/my.h"

int	error_arg(int ac, char **av)
{
  if (ac != 3 || my_str_isnum(av[2]) == 0)
    {
      my_putstr(RED "Usage: ./rush2 [-c] your_number -> to validate the card\n" RESET);
      my_putstr(RED "Usage: ./rush2 [-f] your_number -> to know the last number valid\n" RESET);
      return (84);
    }
  return (0);
}

int	main(int ac, char **av)
{
  if (error_arg(ac, av) == 84)
    return (84);
  else
    {
      if (my_strncmp(av[1], "-c", 2) == 0)
	{
	  if (my_strlen(av[2]) != 16)
	    {
	      my_putstr(RED "This card number is not valid\n" RESET);
	      return (84);
	    }
	  return (validate(av[2]));
	}
      if (my_strncmp(av[1], "-f", 2) == 0)
	{
	  if (my_strlen(av[2]) != 15)
	    return (84);
	  else
	    missing_nbr(av[2]);
	}
      else
	my_putstr(RED "First argument not valid, must be -c or -f\n" RESET);
      return (84);
    }
}
