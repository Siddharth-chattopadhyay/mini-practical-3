#include<iostream>
using namespace std;

int main(){
    int i, j;

    for (i = 1; i <= 5; i++){
        for (j = 1; j < i; j++){
            cout << "  ";
        }

        for (j = j; j <= 5; j++){
            cout << ((i + j + 1) % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}