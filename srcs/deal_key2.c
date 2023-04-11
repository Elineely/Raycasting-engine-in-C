/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_key2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surlee <surlee@student.42.seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:14:23 by surlee            #+#    #+#             */
/*   Updated: 2023/04/10 13:30:45 by surlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"
#include "../mlx/mlx.h"
#include <stdlib.h>
#include <math.h>

void	deal_key_right(int key_code, t_game *game)
{
	double	old_dir_x;
	double	old_plane_x;

	(void)key_code;
	old_dir_x = game->player->dir_x;
	old_plane_x = game->player->plane_x;
	game->player->dir_x = game->player->dir_x * \
		cos(ROT_SPEED) - game->player->dir_y * sin(ROT_SPEED);
	game->player->dir_y = old_dir_x * sin(ROT_SPEED) \
		+ game->player->dir_y * cos(ROT_SPEED);
	game->player->plane_x = game->player->plane_x \
		* cos(ROT_SPEED) - game->player->plane_y * sin(ROT_SPEED);
	game->player->plane_y = old_plane_x * sin(ROT_SPEED) \
		+ game->player->plane_y * cos(ROT_SPEED);
}

void	deal_key_left(int key_code, t_game *game)
{
	double	old_dir_x;
	double	old_plane_x;

	(void)key_code;
	old_dir_x = game->player->dir_x;
	old_plane_x = game->player->plane_x;
	game->player->dir_x = game->player->dir_x \
		* cos(-ROT_SPEED) - game->player->dir_y * sin(-ROT_SPEED);
	game->player->dir_y = old_dir_x * sin(-ROT_SPEED) \
		+ game->player->dir_y * cos(-ROT_SPEED);
	game->player->plane_x = game->player->plane_x \
		* cos(-ROT_SPEED) - game->player->plane_y * sin(-ROT_SPEED);
	game->player->plane_y = old_plane_x * sin(-ROT_SPEED) \
		+ game->player->plane_y * cos(-ROT_SPEED);
}
