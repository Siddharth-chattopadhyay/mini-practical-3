#include<iostream>
using namespace std;

int main(){
    int i, j, count = 11;

    for (i = 1; i <= 4; i++){
        for (j = 1; j <= i; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
    return 0;
}