#include <iostream>
#include <malloc.h>
#include <cmath>

using namespace std;


int getSize() {
    int size;
    cout << "Enter a size" << endl;
    cin >> size;
    return size;
}


int* setMemory(int size) {
    int *m = (int*)malloc(size * sizeof(int));
    return m;
}


void inputData(int *m, int size) {
    int i;
    for(i=0; i<size;i++) {
        m[i] = pow(2,i);
    }
}


void task_1(int *m, int size) {
    int i;
    for(i=0;i<size;i++)
        cout << m[i] << " ";
}



int main() {
    int size;
    int *m;

    size = getSize();
    m = setMemory(size);
    inputData(m, size);
    task_1(m, size);
    free(m);

    cout << endl;


    return 0;
}
