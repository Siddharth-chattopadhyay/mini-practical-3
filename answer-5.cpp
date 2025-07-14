#include<iostream>
using namespace std;

int main(){
    int i, j;

    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 5 - i; j++){
            cout << "  ";
        }

        for (j = j; j <= 5; j++){
            cout << j << " ";
        }

        for (j = j - 2; j > 5 - i; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}