#include <iostream>
#include "gb03.h"
#include <cstdio>
#include <conio.h>
#include <stdio.h>


using namespace std;

int main() {
    // Задание 1
    cout << static_cast<float>(a) * (static_cast<float>(b) + (static_cast<float>(c) / static_cast<float>(d))) << endl;

    // Задание 2 

    int num, num2;

    cout << "Enter number:" << endl;
    cin >> num;
    num = num <= 21 ? (21 - num) : 2*(num - 21);
    cout << "Answer: " << num << endl;  

    // Задание 3 

    int m[2][2][2], *pm;
    int i,j,k = 0;
    int count = 1;
    // Внос значений в массив
    for(i=0; i<3; i++) {
        for(j=0;j<3;j++) {
            for(k=0;k<3;k++) {
                m[i][j][k] = count;
                count++;
            }
        }
    }
    pm = &m[1][1][1];
    
    cout << "3 - Value m[1][1][1]: " << *pm << endl;



    // Задание 4 сделал сразу вместе с заданием 1, подключив gb03.h

    return 0;
}
