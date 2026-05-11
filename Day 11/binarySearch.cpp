#include<iostream>
using namespace std;
int Binary_search(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (end + start) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(mid < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;

}
int main(){
    int arr[6] = {3,4,5,6,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    int ans = Binary_search(arr, size, target);
    cout<<ans;
    return 0;
}   