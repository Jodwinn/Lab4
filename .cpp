#include <iostream>
#include <windows.h>;
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int size = 12;  
    int arr[size] = { 7, 1, 2, 4, 3, 5, 1, 2, 8, 3, 9, 8 };  
    int un[size]; 
    int unpcs = 0; 

   
    for (int a = 0; a < size; ++a) {
        bool dup = false;


        for (int b = 0; b < unpcs; ++b) {
            if (arr[a] == un[b]) {
               dup = true;
                break; 
            }
        }   
        if (!dup) {
            un[unpcs] = arr[a];
            ++unpcs;
        }
    }
    cout << "унікальні значення ";
    for (int a = 0; a < unpcs; ++a) {
        cout << un[a] << " ";
    }
    cout << endl;

    return 0;
}
