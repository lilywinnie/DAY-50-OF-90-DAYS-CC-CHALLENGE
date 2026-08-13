#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while(T--)
    {
        int A,B;
        cin>>A>>B;
        
        int target = B + 10;
        int needed = target - A;

        if (needed <= 0)
            cout<<0<<"\n";
            
        else
        {
            int shots = (needed + 2) / 3;
            cout << shots << "\n";
        }
    }
    
    return 0;
}
