/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_shade.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:17:14 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/08 21:34:24 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_SHADE_H
# define T_SHADE_H
# include "minirt_conf.h"
# include "t_abstract_object.h"
# include "t_color.h"
# include "t_scene.h"

typedef struct	s_shade
{
	t_abstract_object	*object;
	void				*loc_coordinates;
	t_3d_vec			position;
	t_3d_vec			out_normal;
	int					rec_depth;
}			t_shade;

void	t_shade_get_color(t_shade *shade, t_3d_vec dir, t_scene scene, t_color color)
{
	ft_bzero(color, sizeof(t_color));
	if (shade->rec_depth >= MINIRT_MAX_REC_DEPTH)
		return;
	shade->object->get_color(shade->loc_coordonates);

}

#endif
