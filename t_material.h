/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_material.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:08:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/08 21:16:11 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MATERIAL_H
# ifndef T_MATERIAL_H
# include "t_color.h"

typedef struct	s_material
{
	float	c_index;
	t_color	color;
}				t_material;

#endif
