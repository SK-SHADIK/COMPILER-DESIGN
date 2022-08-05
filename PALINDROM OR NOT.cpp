#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char s1 [100];
    char s2 [100];

   cout<<"PLEASE ENTER A STRING : ";
   cin>>s1;

   strcpy(s2,s1);
   strrev(s2);

   if(strcmp(s1,s2)== 0)
   {
       cout<<s1<<" IS A PALINDROME"<<endl;
   }

   else
   {
       cout<<s1<<" IS NOT A PALINDROME"<<endl;
   }

        return 0;
}
