#include<iostream>
using namespace std;

int main(){
    int num = 1 ,even = 0,odd = 0; 
    
	while (num != 0){
    cout << "Enter an integer: ";
    cin >> num;
        if ((num%2 == 0) && (num != 0))  {
            even += 1;
        }else if ((num != 0)) {
            odd += 1;
            }
    }
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}