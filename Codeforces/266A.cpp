#include <bits/stdc++.h>
using namespace std;

int main() {
int ans = 0;
int n;
cin>>n;
 string s;
 cin>>s;
 for (int i = 0 ; i < n-1 ; i++){
    if (s[i] == s[i+1]){
        ans = ans+1;
    }
 }
 cout<<ans;
 return 0;
}