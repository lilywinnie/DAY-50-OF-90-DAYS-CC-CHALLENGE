#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int T;
    cin >> T;

    while(T--)
    {
        string A, B, C, D, E, F;
        cin >> A >> B >> C >> D >> E >> F;

        if((A == "W" && B == "W" && C == "W") ||
           (B == "W" && C == "W" && D == "W") ||
           (C == "W" && D == "W" && E == "W") ||
           (D == "W" && E == "W" && F == "W"))
            cout << "YES\n";
        
        else
            cout << "NO\n";

    }

    return 0;
}
