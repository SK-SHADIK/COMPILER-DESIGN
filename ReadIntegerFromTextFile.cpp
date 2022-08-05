#include<iostream>
#include<fstream> //Library for file reading and writing
using namespace std;


int main(){
    int i = 0;
    float Arr[8];
    float extractor;
    float sum = 0.0, avg, maximum, minimum;

    ifstream ReadFile; // ifstream is used to read file, works like cin & ReadFile is an object

    ReadFile.open("Array.txt"); //if the text file and the .cpp file are not present in the same folder, use path -> ReadFile.open("E:\\Student\\Array.txt");

    if (!ReadFile) {
        cout << "File not found";
    }



    while (ReadFile >> extractor && i<8) { //Reading elements from stream just like cin.

        Arr[i]=extractor;
        i++;

    }

    ReadFile.close();

    cout<<"THE VALUES ARE : "<<endl;

    for(int i=0; i<8; i++){
    cout << "Arr["<<i<<"] = "<<Arr[i]<< endl;

    sum += Arr[i];//FOR AVARAGE DO SUM

    //FOR MINIMUM NUMBER

    if(minimum > Arr[i]){
        minimum = Arr[i];
    }

    //FOR MAXIMUM NUMBER
    else if(maximum < Arr[i]){
        maximum = Arr[i];
    }

    }

    avg = sum / 8;//FOR AVARAGE

    cout<<"THE AVARAGE IS : "<<avg<<endl; // OUTPUT FOR AVARAGE
    cout<<"THE MINIMUM NUMBER IS : "<<minimum<<endl; // OUTPUT FOR MINIMUM NUMBER
    cout<<"THE MAXIMUM NUMBER IS : "<<maximum<<endl; // OUTPUT FOR MAXIMUM NUMBER


}


