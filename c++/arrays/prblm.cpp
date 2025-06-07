// Smallest value --->>
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int size = 5;
//     int marks[size];
//     for(int i=0; i<size; i++){
//         cin >> marks[i];
//     }
//     int smallest_number = marks[0];
//     for(int i=0; i<size; i++){
//         if(marks[i]<smallest_number){
//             smallest_number=marks[i];
//         }
//     }
//     cout << smallest_number;
// }




// REVERSE ARRAY --->>
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {2,1,3,4,6,8,5};
    int size = 7;
    reverseArray(arr,size);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}

