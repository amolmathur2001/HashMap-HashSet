#include<bits/stdc++.h>
using namespace std;
int maximumFrequency(vector<int> &arr, int n){
    //Write your code here
    unordered_map<int,int> mp;
    int max_freq = 0;
    int max_Ans = 0;

    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
        if(max_freq < mp[arr[i]]){
            max_freq = mp[arr[i]];
        }   
    }
    //cout<<max_freq<<endl;

    for(int i = 0; i < n; i++){
        if(max_freq == mp[arr[i]]){
            max_Ans = arr[i];
            break;
        }
    }

    return(max_Ans);
}
int main(){
    vector<int> arr{2, 12, 2, 11, -12, 2, -1, 2, 2, 11, 12, 2 ,-6};
    int n = 13;

    cout<<maximumFrequency(arr,n);
}
