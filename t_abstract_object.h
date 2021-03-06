/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_abstract_object.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:57:33 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/08 20:46:59 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ABSTRACT_OBJECT_H
# define T_ABSTRACT_OBJECT_H

typedef struct s_abstract_object	t_abstract_object;

struct 								s_abstract_object
{
	void	*cache;
	int	 	(* intersects)(t_abstract_object *obj, t_ray *ray);
	float	(* inter_depth)(t_abstract_object *obj, t_ray *ray);
	void	(* get_shade)(t_abstract_object *obj, t_ray *ray, t_shade *shade);
}	t_abstract_object;


#endif
