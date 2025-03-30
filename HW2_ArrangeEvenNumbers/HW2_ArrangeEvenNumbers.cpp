#include<iostream>

using namespace std;
template <size_t n>
int sortarray(int (&arr)[n]){
    int i, j, temp;
    //cout << (sizeof(arr)/sizeof(arr[0])) << endl;
    for (i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++){
        for (j = i+1; j < (sizeof(arr)/sizeof(arr[0])); j++){
            if (arr[i] > arr[j] && arr[i] % 2 == 0 && arr[j] % 2 == 0){
                // Swap arr[i] and arr[j]
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return 0;
}
int main(){
    int arr[] = {15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10 ,14};
    //cout << (sizeof(arr)/sizeof(arr[0])) << endl;
    sortarray(arr);
    //cout << "Sorted array: ";
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++){
        cout << arr[i] << " ";
    }
    return 0;
}