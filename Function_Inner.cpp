#include <iostream>
using namespace std;

int funcinside();
int main(){
    int i = funcinside();
    cout<<"return value:"<<i<<endl;
    return 0;
}
int funcinside(){
    cout<<"int funcinside()"<<endl;
    return 8;
}

// int funcinside(){
//     cout<<"int funcinside()"<<endl;
//     return 8;
// }
// int main(){
//     int i = funcinside();
//     cout<<"return value:"<<i<<endl;
//     return 0;
// }