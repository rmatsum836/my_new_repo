#include <stdio.h>


void read_data(char * file, int * mat, int mat_len)
{
  FILE *fp_in;
  fp_in = fopen(file, "r");
  fclose(fp_in);
}
void matrix_multiply(int *mat1, int r1, int c1, int *mat2, int c2)
{for (int i = 0,i < r1 , i++){
  for (int j = 0, j < c1, j++){
    int sum = 0;
    for (int k = 0, k < r1, k++){
      sum = sum + mat1[i * c1 + k] * mat1[k * c1 + j];
    mat2[i * c2 + j] = sum;
    }
  }
}
}
void matrix_print(int *matrix, n){
int size = n*n;
  for (int i = 0, i < int size, i++){
    if (i % n == 0){
      for (int i =0, i < i + 1, i++){
        printf("%d\n" % matrix[i])
      }
      i = i + n
    }

  }


}

int main(int argc, char ** argv)
{

   // check command line arguments
   if ( argc != 3 ) {
      printf("This program computes the product of n x n matrix with itself\n");
      printf("Usage: ./matrix_multiply filename n\n");
      exit(-1);
   }

// TODO: parse input arguments
char func = argv[0]; // gives name of function first command line argument
char * file = argv[1]; // gives filename to be read second command line argument
int n = atoi(argv[2]);

// TODO: dynamically allocate space for matrix_A (input matrix) in 1d array
int *matrix_A;
matrix_A = malloc(sizeof(int)*n*n);
memset(matrix_A, 0, n*n*sizeof(int)); // sets memory of matrix_A to zero memset(data to set, value, size of data set)
printf("function is %f\n", func);
printf("matrix size is %d x %d", n, n);

// TODO: call function to read data
read_data(file, matrix_A, n); // function that opens files of command line arguments
int *temp;
int count = 0;
while (fscanf(fp_in, "%d", temp) != EOF) // fscanf(file you read from, what you expect to find in file, variable to store read data), EOF: end of file
{  // assigning values into matrix_A
matrix_A[count] = *temp;
count++;
}
// TODO: dynamically allocate space for matrix_B (output matrix) in 1d array
int *matrix_B;
matrix_B = malloc(sizeof(int)*n*n);
memset(matrix_B, 0, n*n*sizeof(int));

// TODO: call function to perform matrix multiplication (matrix_B = matrix_A*matrix_A)
matrix_B = matrix_multiply(matrix_A, n, n, matrix_B, n)

// TODO:  call function to write results to stdout
results = matrix_print()

// TODO: free space allocated for matrix_A and matrix_B
free(matrix_A);
free(Matrix_B);

}
