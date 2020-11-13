#include <iostream>
using namespace std;

// int main(){
//     char ch;
//     cin >> ch;
//     if(ch == 'N'){
//         cout << "Press " << ch << " Character!" << endl;
//     }
//     cin >> ch;
//     cout << int(ch) << "Press " << ch << " Character!" << endl;
//     cin >> ch;
//     cout << int(ch) << "Press " << ch << " Character!" << endl;
//     return 0;
// }

char input() {
    char ch;
    cin >> ch;
    return ch;
}

void output(char ch) {
    if (ch =='N') {
        cout << "Press " << ch << " Character!" << endl;
    }
    else {
        cout << int(ch) << "Press " << ch << " Character!" << endl;
    }
}

int main() {
    char ch = input();
    output(ch);
    ch = input();
    output(ch);
    return 0;
}




