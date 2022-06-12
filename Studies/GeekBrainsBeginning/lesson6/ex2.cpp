#include <iostream>
#include <malloc.h>
#include <cmath>

using namespace std;


int** setMemoryMatrix(const int MATRIX_SIZE) {
    int **matrix = (int **)malloc(MATRIX_SIZE * sizeof(int));
    for (int i = 0; i < MATRIX_SIZE; i++)
        matrix[i] = (int*)malloc(MATRIX_SIZE*sizeof(int));
    return matrix;
}

void memoryInit(int **matrix, const int MATRIX_SIZE) {
    int i,j;
    for(i=0;i<MATRIX_SIZE;i++) {
        for(j=0;j<MATRIX_SIZE;j++) {
           matrix[i][j] = rand() % MATRIX_SIZE +1;
        }
    }
   
}

void task_2(int **matrix, const int MATRIX_SIZE) { 
    int i,j;
    for(i=0;i<MATRIX_SIZE;i++) {
        for(j=0;j<MATRIX_SIZE;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    const int MATRIX_SIZE = 4;
    int **matrix;

    matrix = setMemoryMatrix(MATRIX_SIZE);
    memoryInit(matrix, MATRIX_SIZE);
    task_2(matrix, MATRIX_SIZE);
    free(matrix);
    cout << endl;
    cout << "-----------" << endl;


    return 0;
}
