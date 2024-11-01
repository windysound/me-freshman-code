#include<string>
#include <iostream>
using namespace std;
int main(){
    string s="",table="0123456789ABCDEF";
    int m,n;
    cin>>m>>n;
    if(m==0)
     cout<<m<<endl;
    while(m){
        if(m<0){
            m=-m;
            cout<<"-";
        }
        s=table[m%n]+s;
        m/=n;
    }
    cout<<s<<endl;
    return 0;
}