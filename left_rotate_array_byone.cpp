#include<bits/stdc++.h>
using namespace std;

void leftrotatebyone(vector<int>& ar){
    int first=ar[0];
    for(int i=1;i<ar.size();i++){
        ar[i-1]=ar[i];
    }
    ar[ar.size()-1]=first;
}

int main()
{
    vector<int>ar={1,2,3,4,5,6};
    leftrotatebyone(ar);
    for(int x : ar){
        cout<<x<<" ";
    }
    return 0;
}
