#include<iostream>
using namespace std;
void reverseArray(int nums[], int n){
    int i = 0;
    int j = 4;
    while(i<j){
        int temp;
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size);
    
    for (int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}