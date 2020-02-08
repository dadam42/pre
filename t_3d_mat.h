#ifndef T_3D_MAT_H
# define T_3D_MAT_H
# include "t_3d_vec.h"

typedef	t_3d_vec t_3d_mat[3];

float	t_3d_mat_det(t_3d_mat m);
void	t_3d_mat_inv(t_3d_mat m, float det, t_3d_mat res);
void	t_3d_mat_apply(t_3d_mat m, t_3d_vec v, t_3d_vec res);
void	t_3d_mat_product(t_3d_mat l, t_3d_mat r, t_3d_mat res);
void	t_3d_mat_combine(float ca, t_3d_mat a, t_3d_mat b, t_3d_mat res);
#endif
