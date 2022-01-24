#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){  //decrement
int n;
cin>>n;
long long int fac=1;
for(int i=1;i<=n;i++)
fac=fac*i;
cout<<fac<<endl;
}
return 0;
}
