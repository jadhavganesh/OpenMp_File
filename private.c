#include<stdio.h>
#include<omp.h>
int main()
{
int i=10;
#pragma omp parallel private(i)
{
	printf("Thread %d: i=%d\n",omp_get_thread_num(),i);
	i=100+omp_get_thread_num();

}

printf("i=%d\n",i);
}
