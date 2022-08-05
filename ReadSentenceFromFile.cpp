#include<iostream>
#include<fstream> //Library for file reading and writing
using namespace std;

int main(){

    string extractor;

    ifstream ReadFile; // ifstream is used to read file, works like cin & ReadFile is an object

    ReadFile.open("Sentence.txt"); //if the text file and the .cpp file are not present in the same folder, use path -> ReadFile.open("E:\\Student\\Array.txt");

    if (!ReadFile) {
        cout << "File not found";
    }



   /* while (ReadFile >> extractor) { //Reading elements from stream just like cin.
      cout<<extractor<<endl;
    }*/

    while (getline(ReadFile,extractor)){

        //cout<<extractor;
        cout<<extractor<<endl;
    }

    ReadFile.close();



}


