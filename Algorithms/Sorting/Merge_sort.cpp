#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int r, int mid){
    int l_sz=mid-l+1;
    int r_sz=r-mid;
    vector<int> l_arr(l_sz+1);
    vector<int> r_arr(r_sz+1);
    
    for(int i=0;i<l_sz;i++){
        l_arr[i]=arr[i+l];
    }
    for(int i=0;i<r_sz;i++){
        r_arr[i]=arr[i+mid+1];
    }
    l_arr[l_sz] = r_arr[r_sz] = INT_MAX;
    
    int l_i=0;
    int r_i=0;
    for(int i=l;i<=r;i++){
        if(l_arr[l_i]<=r_arr[r_i]){
            arr[i]=l_arr[l_i];
            l_i++;
        }else{
            arr[i]=r_arr[r_i];
            r_i++;
        }
    }
}

void merge_sort(vector<int> &arr, int l, int r){
    if (l >= r) return;
    int mid = (l + r) /2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    merge(arr,l,r,mid);
}

int main() {
    vector<int> arr = {38,27,43,3,9,82,10};
    merge_sort(arr,0,int(arr.size()-1));
    for(auto i : arr){
        cout << i << " ";
    }
}
