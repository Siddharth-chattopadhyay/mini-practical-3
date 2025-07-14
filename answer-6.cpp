#include<iostream>
using namespace std;

int main(){
    int i, j;

    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++){
            cout << j << " ";
        }

        for (j = j; j <= ((3 * 2) + (5 - 1 - i)); j++){
            cout << "  ";
        }

        for (j = i; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}