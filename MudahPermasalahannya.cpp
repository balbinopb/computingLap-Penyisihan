#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

//udh benar
int main(){

    /*
    52 
    3145
    */
    int n,k;    
    cin>>n>>k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max=arr[0];
    int imax=0;
    for (int j=1; j<n; j++){
        if (arr[j]>max){
            max=arr[j];
            imax=j;
        }
    }

    sort(arr.begin(), arr.end());
    for (int i=0; i<k && i<n; i++){
        arr[i]=arr[n-1];
    }
       
    long long sum=0;
    for (int p=0; p<n; p++){
        sum +=arr[p];
    }
    
    cout<<sum<<endl;
}