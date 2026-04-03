#include<bits/stdc++.h>
using namespace std;

int largetsele(vector<int>& arr){
    int max=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    return max;
}

int main()
{
    vector<int> ar={10,45,60,71,5};
    cout<<largetsele(ar)<<" ";
    return 0;
}
