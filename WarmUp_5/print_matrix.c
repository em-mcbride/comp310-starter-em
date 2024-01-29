#include <stdio.h>
#include <stdlib.h>

//Global variables 
#define rows1 2
#define cols1 2
#define rows2 2
#define cols2 2
	
//function prototypes 
int addMatrices(int a[rows1][cols1], int b[rows2][cols2], int sum[rows1][cols2]);
int multiplyMatrices(int a[rows1][cols1], int b[rows2][cols2], int product[rows1][cols2]);
int printMatrix(int rows, int cols, int matrix[rows][cols]);

int addMatrices(int a[rows1][cols1], int b[rows2][cols2], int sum[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }

        return EXIT_SUCCESS;
    }
	
int multiplyMatrices(int a[rows1][cols1], int b[rows2][cols2], int product[rows1][cols2]) {
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
				product[i][j] = 0; 
                for (int k = 0; k < cols1; k++) {
                    product[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        return EXIT_SUCCESS;
    }

    int printMatrix(int rows, int cols, int matrix[rows][cols]) {
        for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
			}
        printf("\n");
		}
        
		return EXIT_SUCCESS;
    }
	
    int main(int argc, char *argv[]) {
	int matrix1[rows1][cols1] = {{1, 2}, {3, 4}};
	int matrix2[rows2][cols2] = {{5, 6}, {7, 8}};
    
    //check the dimensions
	if (rows1 == rows2 && cols1 == cols2){    
        printf("Matrix Addition: \n");
		int sum[rows1][cols1]; 
        addMatrices(matrix1, matrix2, sum);
		printMatrix(rows1, cols1, sum); 
	} else {
		printf("Error: can't add matrices with different dimensions");
		}
		
		if(cols1 == rows2){ 
		    printf("Matrix Multiplication: \n");
			int product[rows1][cols2]; //product = sum[rowsA][columnsB]
			multiplyMatrices(matrix1, matrix2, product);
			printMatrix(rows1, cols2, product);
			}

		return EXIT_SUCCESS;
    }