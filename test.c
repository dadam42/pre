typedef int (*t_main)();
int fun()
{
	return (0);
}

t_main pmain = &fun;

int main() = *pmain;
