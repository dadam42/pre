#ifndef T_3D_VEC_H
# define T_3D_VEC_H
typedef float	t_3d_vec[3];

float	t_3d_vec_scalar_product(t_3d_vec vec1, t_3d_vec vec2);
void	t_3d_vec_vectorial_product(t_3d_vec vec1, t_3d_vec vec2, t_3d_vec res);
float	t_3d_vec_mix_product(t_3d_vec vec1, t_3d_vec vec2, t_3d_vec vec3);
void	t_3d_vec_combine(float a, t_3d_vec va, t_3d_vec vb, t_3d_vec res);
#endif
