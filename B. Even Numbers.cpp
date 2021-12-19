#include<iostream>
using namespace std;
int main(){
    int N,i;

    cin>>N;
    if(N==0||N==1||N==-1){ //OR operator
        cout<<-1<<endl;
    }
    
    else if(N>1){
        
        for(i=2;i<=N;i+=2){
            cout<<i<<endl;
        }
    }
return 0;
}

