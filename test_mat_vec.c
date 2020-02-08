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

void t_test_t_3d_vec_scalar_product(t_3d_vec vec1, t_3d_vec vec2)
{
	display_vec(vec1); printf(" scal ");  display_vec(vec2); printf(" = ");
	printf("%.3f\n", t_3d_vec_scalar_product(vec1, vec2));
}

void t_test_t_3d_vec_vectorial_product(t_3d_vec v1, t_3d_vec v2)
{
	t_3d_vec res;

	display_vec(v1); printf(" vect ");  display_vec(v2); printf(" = ");
	t_3d_vec_vectorial_product(v1, v2, res);
	display_vec(res);
	printf("\n");
}

void t_test_t_3d_vec_mix_product(t_3d_vec v1, t_3d_vec v2, t_3d_vec v3)
{
	printf("mix(") ; display_vec(v1) ; printf(", "); display_vec(v2); printf(" , "); display_vec(v3); printf(") = ");
	printf("%.3f\n", t_3d_vec_mix_product(v1, v2, v3));	
}

void t_test_t_3d_vec_combine(float a, t_3d_vec v1, t_3d_vec v2)
{
	t_3d_vec res;
	t_3d_vec_combine(a, v1, v2, res);

	printf("%.2f * ", a); display_vec(v1) ; printf(" + ") ; display_vec(v2) ; printf(" = ");
	display_vec(res);
	printf("\n");
}

void test_3d_vec()
{
	t_3d_vec v1 = {0, 0, 1};
	t_3d_vec v2 = {-1, 1, 5};

	t_test_t_3d_vec_scalar_product(v1, v2);

	t_3d_vec v3 = {1, 2, 3};
	t_3d_vec v4 = {1 , -1, 1};
	t_test_t_3d_vec_vectorial_product(v3, v4);

	
	t_test_t_3d_vec_mix_product(v1, v3, v4);	
	t_3d_vec v5 = {1, 2, 3};
	t_3d_vec v6 = {-2, 1, -1};
	float coef = -2;
	t_test_t_3d_vec_combine(coef, v5, v6);
}

void test_t_3d_mat_det(t_3d_mat m)
{
	printf("det {");
	display_mat(m);
	printf("} = %.3f\n", t_3d_mat_det(m)); 
}

void test_t_3d_mat_inv(t_3d_mat m)
{
	float det = t_3d_mat_det(m);
	t_3d_mat res;
	
	t_3d_mat_inv(m, det, res);
	printf("inv {"); display_mat(m); printf("} = \n");
	display_mat(res);
	printf("\n");
}

void test_t_3d_mat_apply(t_3d_mat m, t_3d_vec v)
{
	t_3d_vec res;

	t_3d_mat_apply(m, v, res);
	display_mat(m); printf(" | "); display_vec(v); printf(" = \n");
	display_vec(res);
	printf("\n");
}

void test_t_3d_mat_product(t_3d_mat m, t_3d_mat n)
{
	t_3d_mat res;

	t_3d_mat_product(m, n, res);
	display_mat(m) ; printf(" | ") ; display_mat(n); printf(" = \n");
	display_mat(res);
	printf("\n");
}

void test_t_3d_mat_combine(float a, t_3d_mat m, t_3d_mat n)
{
	t_3d_mat res;

	t_3d_mat_combine(a, m, n, res);

	printf("%.2f * \n", a); display_mat(m) ; printf("\n + \n") ; display_mat(n) ; printf("\n = \n");
	display_mat(res);
	printf("\n");
}

void test_3d_mat()
{
	t_3d_mat m1 = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
	t_3d_mat m2 = {{1,2,3}, {1,2,3}, {1,2,3}};
	t_3d_mat m3 = {{1,2,3}, {0,2,2}, {0,0,3}};
	t_3d_vec v = {-1, 1, 2};
	float a = 0.1;


	
	//test_t_3d_mat_det(m1);
	test_t_3d_mat_inv(m3);
	//test_t_3d_mat_apply(m3, v);
	//test_t_3d_mat_product(m1, m2);
	//test_t_3d_mat_combine(a, m1, m2);
}

int main()
{
	test_3d_mat();
	return (0);
}
