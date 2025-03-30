#include<iostream>

using namespace std;

int main(){
    int num[] = {2,7,11,15};
    int target = 9; 
    int coun1 = sizeof(num)/sizeof(num[0]);
    for(int i =0 ;i< coun1; i++){
        for(int j =0 ;j< coun1; j++){
            if((i != j) &&((num[i] +num[j]) ==target)){
                /*find*/
                cout << i<<" "<<j;
                return 0;
            }
        }
    }
    return 0;
}