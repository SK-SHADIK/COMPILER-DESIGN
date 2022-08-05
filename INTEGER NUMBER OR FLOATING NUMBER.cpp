#include <iostream>
using namespace std;

int main(){
    int a = 0;
    char c;

    cout<<"PLEASE ENTER A NUMBER : ";
    cin>>a;
    cin.get(c);

    if(c=='.'){
        cout<<"THIS IS A FLOAT NUMBER"<<endl;
    }
    else{
        cout<<a<<" IS A INTEGER NUMBER"<<endl;
    }

    return 0;

}
