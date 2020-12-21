#include<iostream>
using namespace std;

int cheetah(int m) {
    int x = 0, stk = 0;
    
    x += (m-m%10)/10;
    stk += (m-m%10)/10;
    
    while (stk >= 3) {
         
        x++;
        stk = stk -2;

    }
    
    return x;
}

int main() {
    cout << cheetah(204);
  
    return 0;
}