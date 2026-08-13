#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while(T--)
    {
        long long X,Y,Z;
        cin>>X>>Y>>Z;
        
        if(X+Y>Z)
            cout<<"TRAIN\n";
            
        else if(X+Y<Z)
            cout<<"PLANEBUS\n";
            
        else
            cout<<"EQUAL\n";
    }
}
