#include<stdio.h>
#include<omp.h>
int main()
{

int i=10,n;
#pragma omp parallel 
{
	#pragma omp for lastprivate(i)
	for(n=0;n<4;n++)
	{
	printf("thread %d:i=%d\n",omp_get_thread_num(),i);
	i=100+omp_get_thread_num();
	}

}
printf("i=%d\n",i);
}

