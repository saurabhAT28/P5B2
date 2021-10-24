#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cout<<"Enter the size of an element: ";
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    cout<<"Maximum element: "<<v[n-1]<<"\n";
    cout<<"Minimum element: "<<v[0]<<"\n";

    return 0;
}


/*
Enter the size of an element: 5
13 24 14 56 1
Maximum element: 56
Minimum element: 1
*/