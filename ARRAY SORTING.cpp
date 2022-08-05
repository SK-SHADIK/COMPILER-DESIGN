#include <iostream>
using namespace std;

int main (){
    int arr[100];
    int temp, n, i;

    //TAKE INPUT FOR THE SIZE OFF ARRAY

    cout<<"PLEASE ENTER THE SIZE OF ARRAY : ";
    cin>>n;

    //TAKE INPUT THE VALUES

    cout<<"PLEASE ENTER THE ELEMENTS OF ARRAY : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    //PRINT THE INPUT VALUE

    cout<<"THE INPUTED ARRAY IS : ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    //SORTING IN ASCENDING ORDER
    for(i=0; i<n; i++) {
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    //PRINT THE ASCENDING VALUE

    cout<<"THE SORTED ARRAY IS : ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}
