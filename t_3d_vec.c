#include "t_3d_vec.h"
#include <stdio.h>

float	t_3d_vec_scalar_product(t_3d_vec vec1, t_3d_vec vec2)
{
	float	res;
	int		idx;

	res = 0;
	idx = 0;
	while (idx < 3)
	{
		res += vec1[idx] * vec2[idx];
		idx++;
	}
	return (res);
}

void	t_3d_vec_vectorial_product(t_3d_vec	vec1, t_3d_vec vec2, t_3d_vec res)
{
	res[0] = vec1[1] * vec2[2] - vec1[2] * vec2[1];
	res[1] = -vec1[0] * vec2[2] + vec1[2] * vec2[0];
	res[2] = vec1[0] * vec2[1] - vec2[0] * vec1[1];
}

float	t_3d_vec_mix_product(t_3d_vec vec1, t_3d_vec vec2, t_3d_vec vec3)
{
	t_3d_vec	tmp;

	t_3d_vec_vectorial_product(vec2, vec3, tmp);
	return (t_3d_vec_scalar_product(tmp, vec1));
}

void	t_3d_vec_combine(float a, t_3d_vec va, t_3d_vec vb, t_3d_vec res)
{
	int idx;

	idx = 0;
	while (idx < 3)
	{
		res[idx] = a * va[idx] + vb[idx];
		idx++;
	}
}
