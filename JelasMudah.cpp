#include <iostream>
#include <vector>

using namespace std;

int abs(int n){
    return n>=0? n : -n;
}

int main()
{
    //udh benar
    int n,m;
    vector<int> arr;
    vector<int> x;
    vector<int> y;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin>>m;
        arr.push_back(m);
    }
    // int sum=0;
    // for (int i=0; i<n; i++){
    //     sum +=abs(arr[i]);
    // }
    // cout<<sum<<endl;

    for (int j = 0; j <= n/2; j++){
        x.push_back(abs(arr[j]));
    }
    for (int k = n/2 +1; k < n; k++){
        y.push_back(abs(arr[k]));
    }
    long long sumx=0;
    for (int l=0; l<x.size(); l++){
       sumx +=x[l];
    }
    long long sumy=0;
    for (int s=0; s<y.size(); s++){
        sumy +=y[s];
    
    }

    cout<<sumx+sumy<<endl;

}