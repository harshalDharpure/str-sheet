#include<bits/stdc++.h>
using namespace std;

int removeduplicates(vector<int>& ar){
    if(ar.empty()) return 0;
    int i=0;
    for(int j=1;j<ar.size();j++){
        if(ar[j]!=ar[i]){
            i++;
            ar[i]=ar[j];
        }
    }
    return i+1;
}

int main()
{
    vector<int> ar={1,1,2,2,5,6,7};
    cout<<removeduplicates(ar)<<" ";
    return 0;
}
