#include<iostream>
using namespace std;

int main(){
    int i, j;

    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 5 && (i == 1 || i == 3); j++){
            cout << "* ";
        }

        for (j = 1; j <= 1 && (i == 2); j++){
            cout << "* ";
        }

        for (j = 2; j < 5 && (i == 2); j++){
            cout << "  ";
        }

        for (j = 1; j <= 1 && (i == 2); j++){
            cout << "* ";
        }

        for (j = 1; j <= 1 && (i == 4 || i == 5); j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}