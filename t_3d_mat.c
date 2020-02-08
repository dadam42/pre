#include "t_3d_mat.h"
#include "t_3d_vec.h"
#include "float_conf.h"
#include <stdio.h>

static	void	extract_2d_mat(t_3d_mat mat, int l, int c, float res[])
{
	int ldx;
	int cdx;
	int rdx;

	ldx = 0;
	rdx = 0;
	while (ldx < 3)
	{
		if (ldx != l)
		{
			cdx = 0;
			while (cdx < 3)
			{
				if (cdx != c)
					res[rdx++] = mat[ldx][cdx];
				cdx++;
			}
		}
		ldx++;
	}
}


float	t_3d_mat_det(t_3d_mat m)
{
	return (t_3d_vec_mix_product(m[0], m[1], m[2]));
}

void	t_3d_mat_inv(t_3d_mat m, float det, t_3d_mat res)
{
	float	ext[4];
	int		ldx;
	int		cdx;

	ldx = 0;
	while (ldx < 3)
	{
		cdx = 0;
		while (cdx < 3)
		{
			extract_2d_mat(m, ldx, cdx, ext);
			res[cdx][ldx] = ((cdx + ldx) % 2 ? -1 : 1)
							* (ext[0] * ext[3] - ext[1] * ext[2]) / det;
			cdx++;
		}
		ldx++;
	}
}

void	t_3d_mat_apply(t_3d_mat m, t_3d_vec v, t_3d_vec res)
{
	int edx;

	edx = 0;
	while (edx < 3)
	{
		res[edx] = t_3d_vec_scalar_product(m[edx], v);
		edx++;
	}
}

void	t_3d_mat_product(t_3d_mat l, t_3d_mat r, t_3d_mat res)
{
	int cdx;
	int ldx;
	int cur;

	ldx = 0;
	while (ldx < 3)
	{
		cdx = 0;
		while (cdx < 3)
		{
			res[ldx][cdx] = 0;
			cur = 0;
			while (cur < 3)
			{
				res[ldx][cdx] += l[ldx][cur] * r[cur][cdx];
				cur++;
			}
			cdx++;
		}
		ldx++;
	}
}

void	t_3d_mat_combine(float ca, t_3d_mat a, t_3d_mat b, t_3d_mat res)
{
	int cdx;
	int ldx;

	ldx = 0;
	while (ldx < 3)
	{
		cdx = 0;
		while (cdx < 3)
		{
			res[ldx][cdx] = ca * a[ldx][cdx] + b[ldx][cdx];
			cdx++;
		}
		ldx++;
	}
}

