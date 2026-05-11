#include<iostream>
using namespace std;
int linearSearch(int nums[], int n, int target){
    for(int i=0; i<n; i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int nums[5] = {2,5,6,4,9};
    int n =  sizeof(nums)/sizeof(nums[0]);;
    
    int ans = linearSearch(nums, n, 4);
    cout<<ans;
    return 0;
}