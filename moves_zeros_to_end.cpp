#include<bits/stdc++.h>
using namespace std;
void shiftzeorstoend(vector<int>& ar){
    int j=0;
    for(int i=0;i<ar.size();i++){
        if(ar[i]!=0) swap(ar[i],ar[j++]);
    }

}
int main()
{
    vector<int>ar={0,0,1,0,1,1,1};
    shiftzeorstoend(ar);
    for(int x : ar){
        cout<<x<<" ";
    }
    return 0;
}
