#include <iostream>

using namespace std;

typedef int CarSpeed;

using PlaneSpeed = double;

int main()
{

    // Первое задание. Объявление и инициализация
    int num = 0;
    char ch{ 'D' };
    bool flag = true;
    float f1 = 2312.12312f;
    double d2 = 2312.12312;
    long long a = 120LL;
    unsigned int numz = 12;
    unsigned char chz{'B'};
    unsigned long long b = 125LL;
    auto datas = 2;
    const int d = 0;
    CarSpeed car1 = 10;
    PlaneSpeed plane1 = 800.0;
    int arr[3] = { 0,1,2 };
    //




    // Второе задание. Перечисление допустимых символов в игре крестики и нолики
    /* 
    
     В игре "Крестики и нолики" используются два символа : X - в качестве крестика, O - в качестве нолика. Соответственно, все остальные символы нам не нужны
     allowedSymbols по логике должен быть использован при проверке ввода значений во время игры, дабы не допускать иные символы (Например: 1, a, b, +)
     Значения символов в виде ASCII 
     
     */

    enum allowedSymbols {
        X = 'X',
        O = 'O'
    };
    

    // Третье задание
    allowedSymbols arrs[2] = { X, O };
    cout << "ASCII 1 is " << arrs[0] << endl;
    cout << "ASCII 2 is " << arrs[1] << endl;


    // Четвертое задание

    /*
    * Свойства необходимые для структуры игры:
    * 1) Свойство таблицы (maxBlocks) - там мы будем хранить размер сетки. В примере: 3x3 (тоесть, maxBlocks перемножается само на себя, для построения сетки)
    * 2) Массив ячеек таблицы (block), куда мы будем записывать крестик, или нолик.
    * 3) Количество необходимых одинаковых ячеек в ряд, чтобы победить. (winningBlocks)
    * 4) Перечисление символов (symbols), нужно будет для проверки вводимых значений во время игры (тоесть, допускать только значения ASCII из перечисления)
    
    */

    struct Game {
        int maxBlocks;
        char block[50][50];
        int winningBlocks;
        enum symbols {
            X = 'X',
            O = 'O'
        };
    } settings;

    /*
    
        Для примера написал ниже код, где задав maxBlocks составляется игровое-поле размером (maxBlocks*maxBlocks).
        Изначальное значение - 3, но можно изменить.

    */


    settings.maxBlocks = 3;

    // Проверка для того, чтобы не было выхода за предел массива (поскольку в структуре его размер - 50).
    if (settings.maxBlocks > 49) {
        cout << "Memory error" << endl;
        return -1;
    }

    
    cout << "Table, if maxBlocks == " << settings.maxBlocks << endl;

    int i = 0, j = 0;
    for (i = 0; i < settings.maxBlocks; i++) {
        for (j = 0; j < settings.maxBlocks; j++) {
            settings.block[i][j] = '-';
            if (j == settings.maxBlocks - 1) {
                cout << settings.block[i][j] << endl;
            }
            else {
                cout << settings.block[i][j];
            }
        }
    }

    // Пятое задание
    /*
        
        Как я понял, здесь нужно было доказать, что данные разных типов хранятся в одной ячейке памяти, путем вывода одного значения разных типов.

    */

    struct MyVariant {
        union MyData {
            int isInt;
            float isFloat;
            char isChar;
        } data{'a'};
    } variant;

    cout << variant.data.isInt << endl;     // Выводит число (ASCII)
    cout << variant.data.isFloat << endl;   // Выводит мусор
    cout << variant.data.isChar << endl;    // Выводит символ

    return 0;
}
