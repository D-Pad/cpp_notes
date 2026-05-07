#include "FileIO.h"
#include <string>
#include <filesystem>


int FileReadWrite::WriteToFile(string data) {
   
    // Create a file
    ofstream myFile(mainPath + "learnCpp.txt");

    // Check if file is open or not
    if (myFile.is_open()) {
        myFile << data << "\n"; 
        myFile.close();
    }
    else {
        cout << "Could not create/open file";
    }

    return 0;
}


int FileReadWrite::ReadFile() {

    ifstream myFile(mainPath + "learnCpp.txt");
   
    // Check to see if the file is open
    if (!myFile.is_open()) {
        cout <<  "Could not open file";
        return 1;
    }

    // Check if the file open failed or not
    if (myFile.fail()) {
        cout << "File read failed" << endl;
    } 

    // Read the contents of a file 
    string line;
    getline(myFile, line);

    cout << "File contents: " << line << endl;
  
    // Reset the position of the file stream so that it can be used again.
    myFile.clear();
    myFile.seekg(0, std::ios::beg);
    
    // Reading file by words in while loop
    cout << "Reading one word at a time:" << endl;
    string currWord; 
    while (!myFile.eof()) {
        myFile >> currWord;
        if (!myFile.fail()) {
            cout << currWord + "-";
        }
    }
    cout << endl;
    return 0;
}


void FileIOExample() {
    
    FileReadWrite frw = FileReadWrite();
    
    cout << "Creating new file" << endl;
    frw.WriteToFile("Hello world. This is a file made in C++");
    
    cout << "Reading file" << endl;
    frw.ReadFile();

}


std::filesystem::path GetFullPath(
    const std::filesystem::path basePath,
    const std::string& fileName
) {
    return basePath / fileName; 
}


void CrossPlatformFileIO() {

    std::filesystem::path basePath;
    basePath = "..";
    basePath /= "src";
    basePath /= "file_io";
    
    std::filesystem::path fullPath = GetFullPath(basePath, "test.txt");
    
    ifstream myFile(fullPath);
    
    if (!myFile.is_open()) {
        cout << "Could not open file" << endl;
        return;
    }

    // Check if the file open failed or not
    if (myFile.fail()) {
        cout << "File read failed" << endl;
        return;
    } 

    // Reading file by words in while loop
    string currWord; 
    while (!myFile.eof()) {
        myFile >> currWord;
        if (!myFile.fail()) {
            cout << currWord + "-";
        }
    }

}

