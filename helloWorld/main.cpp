#include			<iostream>
#include			<stdlib.h>
#include			<stdio.h>
#include			<omp.h>

int				main(void)
{
  unsigned int			threadId;

  #pragma omp parallel private(threadId)
  {
    threadId = omp_get_thread_num();
    printf("Hello, thred number is : %i\n", threadId);
  }
  return EXIT_SUCCESS;
}
