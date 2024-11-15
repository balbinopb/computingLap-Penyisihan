#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    /*
    6 2 
    Beatriz 
    Ali 
    Gabriel 
    Fatima 
    Eric 
    Diya 
    2 100 
    5 2
    
    */



    int N, Q;
    cin >> N >> Q;

    vector<string> names(N);
    for (int i = 0; i < N; i++) {
        cin >> names[i];
    }

    int P, k;
    for (int i = 0; i < Q; i++) {
        
        cin >> P >> k;
        int position = 1;
        int segment=0;        
        int distance=P;
        int t = 1;
        while (distance > 0) {
            segment +=distance;
            distance = P / pow(k, t);            
            t++;
        }
        if (segment<=N){
            position=segment; //already update here 
            cout << names[position] << endl;
            cout<<"position at "<<position<<endl;
        }else{
            cout<<position<<endl; //but here why still 1
            position = (segment % (N) + position);
            cout << names[position] << endl;
            cout<<"position at "<<position<<endl;
        }

    }

    return 0;
}
