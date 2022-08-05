#include<iostream>
#include<string>
#include<fstream> //Library for file reading and writing
using namespace std;


int main(){
    int i = 0;
    string Arr[5];
    string extractor;
    string con;

    ifstream ReadFile; // ifstream is used to read file, works like cin & ReadFile is an object

    ReadFile.open("CArray.txt"); //if the text file and the .cpp file are not present in the same folder, use path -> ReadFile.open("E:\\Student\\Array.txt");

    if (!ReadFile) {
        cout << "File not found";
    }



    while (ReadFile >> extractor && i<5) { //Reading elements from stream just like cin.

        Arr[i]=extractor;
        i++;

    }

    ReadFile.close();

    cout<<"THE STRINGS ARE : "<<endl;

    for(int i=0; i<5; i++){
    cout << "Arr["<<i<<"] = "<<Arr[i]<< endl;
    con = con + Arr[i];
    }
    cout<<"THE CONCATENATED STRING IS : "<<con<<endl;

}



