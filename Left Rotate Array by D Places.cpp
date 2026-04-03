#include<bits/stdc++.h>
using namespace std;

void reversepart(vector<int>& ar, int l,int r){
    while(l<r){
        swap(ar[l],ar[r]);
        l++;
        r--;
    }
}

void leftrotatebyone(vector<int>& ar,int d){
    int n=ar.size();
    d=d%n;

    reversepart(ar,0,d-1);
    reversepart(ar,d,n-1);
    reversepart(ar,0,n-1);
}

int main()
{
    vector<int>ar={1,2,3,4,5,6};
    int d=2;
    leftrotatebyone(ar,d);
    for(int x : ar){
        cout<<x<<" ";
    }
    return 0;
}
