#include "operationswithmatrix.h"

int main(){


int m1 , n1,  m2 , n2 ;

printf("vvedi razmer 1 matrici pidor");
scanf("%d" , &m1);
scanf("%d" , &n1);

printf("vvedi razmer 2 matrici pidor bistreee plz");

scanf("%d" , &m2);
scanf("%d" , &n2);

int ** mtrx1  = alloc_memmory(m1,n1);
int ** mtrx2  = alloc_memmory(m2,n2);





free_mem(mtrx1);
free_mem(mtrx2);


return 0;
}



int **  alloc_memmory(int m , int n ){

  int ** mtrx = malloc(m*sizeof(int*));
  int * arr = malloc(m*n * sizeof(int));

  for (int i = 0 ; i < m ; i ++){
    mtrx[i]= arr + n*i;
  }
  return mtrx;
}


void free_mem(int ** mtrx ){
  free(mtrx[0]);
  free(mtrx);
}

void input_mtrx_rand(int ** mtrx, int m , int n ){

  for (int i = 0 ; i < m ; i ++)
    for (int j = 0 ; j < n ; j ++)
      mtrx[i][j] = rand() % 100;
}
