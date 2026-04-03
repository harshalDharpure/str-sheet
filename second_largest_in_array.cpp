#include<bits/stdc++.h>
using namespace std;

int secondlargest(vector<int>& ar){
    int largest=INT_MIN, secondlargest=INT_MIN;
    for(int x:ar){
        if(x>largest){
            secondlargest=largest;
            largest=x;
        }else if(x>secondlargest && x!=largest){
            secondlargest=x;
        }
    }
    return secondlargest== INT_MIN ? -1: secondlargest;
}

int main()
{
    vector<int>ar={10,47,58,22,31};
    cout<<secondlargest(ar)<<" ";
    return 0;
}
