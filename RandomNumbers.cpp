#include <iostream>
#include <random>
using namespace std;
 int main() {
     random_device rd;
     mt19937_64 mersenne_twister_engine(rd());
     uniform_int_distribution<> dice(1,100);

     for(int count = 1; count <= 10; ++count){
         cout << "random dice["<<count<<"] : " << dice(mersenne_twister_engine) << endl;
     }
    return 0;
 }