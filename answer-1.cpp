#include<iostream>
using namespace std;

int main(){
    int i, j;

    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++){
            cout << j + 40 << " ";
        }
        cout << endl;
    }
    return 0;
}