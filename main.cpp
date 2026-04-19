#include <bits/stdc++.h>
using namespace std;

int main() {
    // 49. LCM
    int a=12,b=18;
    cout << (a*b)/__gcd(a,b) << "\n";

    // 50. Fibonacci
    int n=5, x=0, y=1;
    for(int i=0;i<n;i++){
        cout<<x<<" ";
        int t=x+y; x=y; y=t;
    }
    cout<<"\n";

    // 51. Prime check
    int num=7, ok=1;
    for(int i=2;i*i<=num;i++)
        if(num%i==0) ok=0;
    cout<<ok;
}
