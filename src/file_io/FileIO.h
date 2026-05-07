#pragma once 
#include <string>
#include <fstream>
#include <iostream>
using namespace std;


class FileReadWrite {
private: 
    string mainPath = "/home/dpad/";

public: 
    int ReadFile();
    int WriteToFile(string data);
};


void FileIOExample();
void CrossPlatformFileIO(); 

