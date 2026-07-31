#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>> t;
int ans = 0;
while(t--){
 string s;
 cin>> s;
 if (s == "++X" || s == "X++"){
    ans = ans + 1;
 }
 else {
    ans = ans - 1 ;
 }
 }
cout<<ans;
 return 0;
}