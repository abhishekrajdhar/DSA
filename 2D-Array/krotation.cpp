#include <iostream>
using namespace std;

void rotate(int arr[3][3], int row, int col) {
    int temp[3][3]; 

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            temp[j][row - 1 - i] = arr[i][j];
        }
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = temp[i][j];
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k;
    cout << "Enter the number of times to rotate the array: ";
    cin >> k;
    k = k % 4; 

    // Rotate the matrix k times
    while (k) {
        rotate(arr, 3, 3);
        k--;
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}
