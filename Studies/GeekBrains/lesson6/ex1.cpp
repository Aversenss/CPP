#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n;

    cout << "Enter num: (int)" << endl;

    cin >> n;

    while(true) {
        if(cin.good() && cin.peek() == '\n' ) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
        }
        cin.clear();
        cout << "Incorrect number" << endl;   
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Num: " << n << endl;

}
