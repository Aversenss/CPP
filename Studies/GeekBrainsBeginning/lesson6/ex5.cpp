#include <iostream>
#include <fstream>		//РґР»СЏ СЂР°Р±РѕС‚С‹ СЃ С„Р°Р№Р»Р°РјРё

using namespace std;

int checkFile(string filename, string word, string line) {
    int count = 0;
    ifstream file(filename);
    if(file.is_open()) {
        while(getline(file, line)) {
            if(line.find(word) != string::npos) {
                count += 1;
            }
        }
    }
    else {
        cout << "Err. Incorrect name of file" << endl;
    }    

    return count;
}


int main() {
    string filename, word,line;
    int count;
    
    cout << "Enter filename" << endl;
    cin >> filename;
    cout << "Enter word" << endl;
    cin >> word;

    count = checkFile(filename, word, line);

    if(count > 0) {
        cout << "File has a word!" << endl;
    }
    else {
        cout << "File hasn't a word!" << endl;
    }


    return 0;
}
