/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:29:12 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:29:38 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h" // for write
#include "stdlib.h" // for malloc
// #include "stdio.h"  //
#include "check_mate.h" // for struct


void	nl()
{
	write(1, "\n", 1);
}


int		is_perpendicular(int		x, int	y, int len, int k_x, int k_y)
{
	int i = 0;
	int p_y = (len + 1) - y;
	int p_k_y = (len + 1) - k_y;

	while (i < len)
	{
		if (p_y + i == p_k_y && x == k_x)
			return 1;
		if (p_y - i == p_k_y && x == k_x)
			return 1;
		if (p_y == p_k_y && x + i == k_x)
			return 1;
		if (p_y == p_k_y && x - i == k_x)
			return 1;
		i++;
	}
	return (0);
}

int		is_diagonal(int		x, int	y, int len, int k_x, int k_y)
{
	int i = 0;
	int p_y = (len + 1) - y;
	int p_k_y = (len + 1) - k_y;


	while (i < len)
	{
		if (p_y + i == p_k_y && x + i == k_x)
			return 1;
		if (p_y - i == p_k_y && x + i == k_x)
			return 1;
		if (p_y - i == p_k_y && x - i == k_x)
			return 1;
		if (p_y + i == p_k_y && x - i == k_x)
			return 1;
		i++;
	}
	return (0);

}

void	compare_pieces(t_piece *piece, int pieces, int len)
{
	int i = 0;
	int k_x = 0;
	int k_y = 0;
	while (i < pieces)
	{
		if (piece[i].fig == 'K')
		{
			k_x = piece[i].x;
			k_y = piece[i].y;
		}
		i++;
	}
	i = 0;

	while (i < pieces)
	{
		if (piece[i].fig == 'K')
			;
		if (piece[i].fig == 'P')
		{
			if ((k_x == piece[i].x + 1 || k_x == piece[i].x - 1) && (k_y == piece[i].y + 1))
			{
				write(1,"P",1);
				write(1,"Success", 7);
				nl();
				return ;
			}
		}
		if (piece[i].fig == 'B')
		{
			if (is_diagonal(piece[i].x, piece[i].y, len, k_x, k_y))
			{
				write(1,"B",1);
				write(1,"Success",7);
				nl();
				return ;
			}
		}
		if (piece[i].fig == 'R')
		{
			if (is_perpendicular(piece[i].x, piece[i].y, len, k_x, k_y))
			{
				write(1,"R",1);
				write(1,"Success",7);
				nl();
				return ;
			}
		}
		if (piece[i].fig == 'Q')
		{
			if (is_diagonal(piece[i].x, piece[i].y, len, k_x, k_y) \
			 || is_perpendicular(piece[i].x, piece[i].y, len, k_x, k_y))
			{
				write(1,"Q",1);
				write(1,"Success",7);
				nl();
				return ;
			}
		}
		i++;
	}
	write(1, "Fail", 4);
	nl();
	return ;
}


void	deal_with_pieces(char **board, int len, int pieces)
{
	int i = 0, j = 0; // for traversing board
	int k = 0;        // for iterating through pieces
	t_piece	*piece;   // dynamic array of pieces

	if (!(piece = (t_piece *)malloc(sizeof(t_piece) * pieces)))
		return ;


	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if ((board[i][j] == 'K' || board[i][j] == 'R' || board[i][j] == 'Q'
				|| board[i][j] == 'B' || board[i][j] == 'P') && k < pieces)
			{
				piece[k].fig = board[i][j];
				piece[k].x = j + 1;
				piece[k].y = i + 1;
				piece[k].which = k;
				//printf("piece fig: %c\tpiece x: %d\tpiece y: %d\n", piece[k].fig, piece[k].x, piece[k].y);
				k++;
			}
			j++;
		}
		i++;
	}
	compare_pieces(piece, pieces, len);
	return ;

}


void	count_pieces(char **board, int len)
{
	int i = 0, j = 0; // for traversing board
	int pieces = 0; //for counting pieces

	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (board[i][j] == 'K' || board[i][j] == 'R' || board[i][j] == 'Q' || \
				board[i][j] == 'B' || board[i][j] == 'P')
			{
				pieces++;
			}
			j++;
		}
		i++;
	}
	deal_with_pieces(board, len, pieces);
	return ;
}


int		main(int ac, char **av)
{
	int len;
	int i = 0, j = 0;
	char **board;

	len = ac - 1;
	//printf("Length of board: %d\n", len);

	if (ac < 2)
	{
		nl();
		return(0);
	}
	if (ac == 2)
	{
		write(1,"Fail",4);
		nl();
		return(0);
	}
	if (!(board = (char **)malloc(sizeof(char *) * len + 1)))
		return(0);

	while (i < len)
	{
		if (!(board[i] = (char *)malloc(sizeof(char) * len + 1)))
			return(0);
		j = 0;
		while (j < len)
		{
			board[i][j] = av[i+1][j];
			//printf("%c ", board[i][j]);     // to print board
			j++;
		}
		board[i][j] = '\0';
		// printf("\n");                      // to print board
		i++;
	}
	count_pieces(board, len);
	return (0);
}
