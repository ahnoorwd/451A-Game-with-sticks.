

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,m,n;
    cin>>x>>y;
    m=x*y;
    if(x>y)
     { n=m/x;}
    else {
     n=m/y;
    }

     if(n%2==0){
        cout<<"Malvika";
    }
    else
        cout<<"Akshat";
return 0;
}
