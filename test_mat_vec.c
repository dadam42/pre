#include "t_3d_vec.h"
#include "t_3d_mat.h"
#include <stdio.h>

void display_vec(t_3d_vec vec)
{
	printf("[%.2f %.2f %.2f]", vec[0], vec[1], vec[2]);
}

void display_mat(t_3d_mat mat)
{
	printf("[\n");
	int ldx = 0;
	while (ldx < 3)
	{
		display_vec(mat[ldx]);
		printf("\n");
		ldx++;
	}
	printf("]\n");
}

int main()
{
	t_3d_vec vec = {0, 0, 1};
	t_3d_vec bec = {1, 0, 0};
	t_3d_vec vec_zero = {0};
	t_3d_vec res;

	(void) vec_zero;
	(void) res;
	(void) vec;
	(void) bec;
	//printf("scalar : %.2f\n", t_3d_vec_scalar_product(vec, bec));
	//t_3d_vec_vectorial_product(vec, bec, res);
	//display_vec(res);
	//printf("\n");
	t_3d_vec v = {1,2,3};
	t_3d_vec u = {4, 5, 6};
	t_3d_vec w = {7,8,9};
	display_vec(v);
	printf("\n");
	display_vec(u);
	printf("\n");
	t_3d_vec_vectorial_product(v,u,res);
	display_vec(res);
	printf("\n");
	printf("%.2f\n", t_3d_vec_scalar_product(w,res));
	return (0);
}
