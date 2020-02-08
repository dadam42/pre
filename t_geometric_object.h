/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_geometric_object.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:47:23 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/08 20:50:52 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_GEOMETRIC_OBJECT_H
# define T_GEOMETRIC_OBJECT_H
# include "t_abstract_object.h"
# include "t_3d_vec.h"

typedef struct	s_geometric_object
{
	t_abstract_object object;
	t_3d_vec	base[3];
}				t_geometric_object;
#endif
