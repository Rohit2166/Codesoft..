#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b,d;
    char c;
    cin>>a>>b>>c;
    if(c=='+'){
        d=a+b;
        cout<<"Addition is "<<endl;
        cout<<d<<endl;
    }
    else if(c=='-'){
        d=a-b;
        cout<<"subtraction is "<<endl;
        cout<<d<<endl;
    }
    else if(c=='*'){
        d=a*b;
        cout<<"multiplication is "<<endl;
        cout<<d<<endl;
    }
    else{
        d=a/b;
        cout<<"division is "<<endl;
        cout<<d<<endl;
    return 0;
    }
}