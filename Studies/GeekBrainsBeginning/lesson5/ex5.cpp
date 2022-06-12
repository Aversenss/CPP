#include <iostream>

using namespace std;

// First task
void first(const int SIZE, double m[]) {
    for(int i=0; i<SIZE; i++) {
        cout << m[i] << "; ";
    }
    cout << endl;
}

// Second task
void second(const int SIZE, int n[]) {
    int i;
    for(i=0; i<SIZE; i++)
        cout  << n[i] << " | ";
    cout << endl;
    for(i=0; i<SIZE; i++)
        n[i] = abs(n[i]-1);
    for(i=0; i<SIZE; i++)
        cout  << n[i] << " | ";
    cout << endl;    
}

// Third task
void third(const int SIZE, int z[]) {
    int i;
    for(i=1;i<SIZE;i++)
        z[i] = z[i-1]+3;
    for(i=0;i<SIZE;i++)
        cout  << z[i] << " | ";  
    cout << endl;
}

// Fourd task
void fourd(int buf[], int move) {
    int i;
    for(i=0; i<15; i++)
        cout  << buf[i] << " | ";
    cout << endl;
    for(i=5; i<abs(move)+5; i++) {
        buf[i+move] = buf[i];
        buf[i] = 0;
    }    
    for(i=0; i<15; i++)
        cout  << buf[i] << " | ";
    cout << endl;
}

// Fiveth
void fiveth(int checkBalance[5]) {
    int i,j,k,sum1=0,sum2=0, isHas=0;
    for(i=0; i<5; i++)
        cout  << checkBalance[i] << " | ";
    cout << endl;   
    for(i=0;i<5;i++) {
        sum1 += checkBalance[i];
        sum2 = 0;
        for(j=i+1;j<5;j++) {
            sum2+=checkBalance[j];
        }
        
        if(sum1 == sum2) {
            isHas = 1;
        }
        cout << sum1 << " | " << sum2 << endl;
    }

    if(isHas == 0)
        cout << "False" << endl;
    else
        cout << "True" << endl;    
    
}

int main() {
    const int SIZE = 8;
    double m[SIZE] = {1.4, 2.4, 3.4, 5.4, 16.7, 54.6, 32.3, 12.3};
    int n[SIZE] = {0,0,1,1,1,1,0,0};
    int z[SIZE] = {1};
    int buf[15] = {0,0,0,0,0,1,2,3,4,5,0,0,0,0,0};
    int move = 5;

    int checkBalance[5] = {10,1,2,3,4};

     
    cout << "First task" << endl;
    first(SIZE, m);
    cout << endl;
    cout << "Second task" << endl;
    second(SIZE, n);
    cout << endl;
    cout << "Third task" << endl;
    third(SIZE, z);
    cout << endl;
    cout << "Fourd task" << endl;
    fourd(buf, move);
    cout << endl;
    cout << "Fiveth task" << endl;
    fiveth(checkBalance);
    cout << endl;

    return 0;
}
