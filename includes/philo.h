/*
** philo.h for philosophe in /home/jibb/rendu/PSU_2014_philo
**
** Made by Jean-Baptiste Grégoire
** Login   <jibb@epitech.net>
**
** Started on  Wed Feb 25 10:21:52 2015 Jean-Baptiste Grégoire
** Last update Sun Mar  1 18:05:02 2015 Jean-Baptiste Grégoire
*/

#ifndef PHILOSOPHE_H_
# define PHILOSOPHE_H_

# include <pthread.h>
# include <stdint.h>
# include <stdio.h>
# include <strings.h>
# include <unistd.h>
# include <string.h>

# define NUMBER_PHILO	7
# define CYCLE_EAT	1
# define CYCLE_THINK	1
# define CYCLE_SLEEP	1
# define NUMBER_CYCLE	150

enum	e_state
  {
    SLEEP = 0,
    THINK,
    EAT
  };

enum	e_stick
  {
    FREE = 0,
    USED
  };

typedef struct s_philo	t_philo;

struct			s_philo
{
  int			id;
  int			rice;
  enum e_state		state;
  pthread_mutex_t	stick;
  t_philo		*left_philo;
  t_philo		*right_philo;
  char			is_good;
};

void		*start_philo(void *philos);

#endif /* PHILOSOPHE_H_ */
