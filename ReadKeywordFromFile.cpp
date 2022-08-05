#include<iostream>
#include<string>
#include<string.h>
#include<fstream> //Library for file reading and writing
using namespace std;


int main(){
    int i = 0;
    string Arr[10];
    string extractor;

    ifstream ReadFile; // ifstream is used to read file, works like cin & ReadFile is an object

    ReadFile.open("KArray.txt"); //if the text file and the .cpp file are not present in the same folder, use path -> ReadFile.open("E:\\Student\\Array.txt");

    if (!ReadFile) {
        cout << "File not found";
    }



    while (ReadFile >> extractor && i<10) { //Reading elements from stream just like cin.

        Arr[i]=extractor;
        i++;

    }

    ReadFile.close();

    cout<<"THE WORDS ARE : "<<endl;

    for(int i=0; i<10; i++){
    cout << "Arr["<<i<<"] = "<<Arr[i]<< endl;
    if (Arr[i]=="int" || Arr[i]=="float" || Arr[i]=="double" || Arr[i]=="short" || Arr[i]=="long" || Arr[i]=="char"|| Arr[i]=="string" || Arr[i]=="break"|| Arr[i]=="if"|| Arr[i]=="else"){
        cout<<"Arr ["<<i<<"]= "<<Arr[i]<<" THIS IS A VALID KEYWORD"<<endl;
    }
    else {
        cout<<"Arr ["<<i<<"]= "<<Arr[i]<<" THIS IS NOT A VALID KEYWORD!!!"<<endl;
    }
    }

}




