#include<bits/stdc++.h>
using namespace std;

int isdorted(vector<int>& ar){
    for(int i=1;i<ar.size();i++){
        if(ar[i]<ar[i-1]) return false;
    }
    return true;
}

int main()
{
    vector<int> ar={10,45,60,71,5};
    cout<<isdorted(ar)<<" ";
    return 0;
}
