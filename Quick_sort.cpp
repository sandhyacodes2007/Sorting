#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int low , int high){
    int pivot=arr[0];
    int i=low;
    int j=high;
while(arr[i]<pivot && i<high-1){
    i++;
}
while(arr[j]>pivot &&j>=low){
    j--;
}
if(i<j){
   swap(arr[i],arr[j]);
}

swap(arr[i], arr[j]);
   return j;
}

void helperQS(vector<int> arr, int low, int high){
    if(low<high){
    int pindex = partition(arr,low,high);
helperQS(arr, low, pindex-1);
    helperQS(arr, pindex+1, high);
    }
}
vector<int> quickSort(vector<int>& arr){
    int n=arr.size();
helperQS(arr,0, n-1);
return arr;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
int ans= 
    }
}