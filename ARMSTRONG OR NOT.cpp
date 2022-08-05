#include <iostream>
using namespace std;

int main (){
    int n;
    int a;
    int sum=0;
    int temp;

   cout<<"PLEASE ENTER A FOUR DIGIT NUMBER : ";
   cin>>n;

   temp=n;
   while(n>0){
            a=n%10;
            sum=sum+(a*a*a);
            n=n/10;
    }
    if(temp==sum){
       cout<<temp<<" IS A ARMSTRONG NUMBER"<<endl;
    }
    else {
            cout<<temp<<" IS NOT A ARMSTRONG NUMBER"<<endl;
    }

    return 0;
}
