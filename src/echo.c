/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_echo(char **mat)
{
	size_t	i;
	int		ind;
	size_t	size;

	i = 0;
	ind = 0;
	size = 0;
	while (mat[size])
		size++;
	while (ft_fullcmp(mat[++i], "-n") == 0)
		ind = 1;
	while (mat[i] && i < size)
	{
		ft_putstr_fd(mat[i], 1);
		ft_putstr_fd(" ", 1);
		i++;
	}
	if (mat[i])
		ft_putstr_fd(mat[i], 1);
	if (ind == 0)
		ft_putstr_fd("\n", 1);
}