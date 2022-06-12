#include <iostream>
#include <fstream>

using namespace std;


void createFiles(string name, const int MAX_SYMBOLS) {  
    ofstream file;
    file.open(name);
    int i;
    file << "FILE --------------------\n";
    for(i=0;i<MAX_SYMBOLS/2;i++) {
        file << rand() % MAX_SYMBOLS +1 << "\n";
    }
    file.close();
}

void uniteFiles(string names[], const int AMOUNT_FILES) {
    int i;
    ofstream outputFile(names[AMOUNT_FILES-1]);
    for(i=0; i<AMOUNT_FILES; i++) {
        ifstream file(names[i]);
        outputFile << file.rdbuf();
        file.close();
    }
    outputFile.close();
}

int main() {
    const int AMOUNT_FILES = 3;
    const int MAX_SYMBOLS = 50;

    string names[AMOUNT_FILES];
    for (int i = 0; i < AMOUNT_FILES; i++) {
        cout << "Enter name of file" << i+1 << endl;
        cin >> names[i];    
        names[i] += ".txt";
        if (i != AMOUNT_FILES-1)
            createFiles(names[i], MAX_SYMBOLS);
        else
            uniteFiles(names, AMOUNT_FILES);    
    }

    return 0;
}
