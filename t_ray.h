/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ray.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:37:46 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/08 21:07:59 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_RAY_H
# define T_RAY_H
# include "t_3d_vec.h"

typedef struct	s_ray
{
	t_3d_vec	origin;
	t_3d_vec	direction;
	float		c_index;
	void		*cache;
}				t_ray;


#endif
