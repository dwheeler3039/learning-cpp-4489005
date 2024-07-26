// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"
#include <fstream>

void initialize(StudentRecords&);
void initialize(StudentRecords&, std::ifstream&);

int main(){
    int id;
    StudentRecords SR;
    std::ifstream inFile;
    std::ofstream outFile;
    
    initialize(SR, inFile); // initialize(SR);
    SR.report_file(outFile); // SR.report_card(1, std::cout);

    // std::cout << "Enter a student ID: " << std::flush;
    // std::cin >> id;

    // SR.report_card(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec, std::ifstream& inFile){
    std::string str, name;
    int sid, cid;
    unsigned char credits;
    char grade;
    int count = 0;

    inFile.open("students.txt");
    if (inFile.fail())
        std::cout << std::endl << "File students.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            sid = stoi(str);
            getline(inFile, name);
            srec.add_student(sid, name);
            count++;
        }
        inFile.close();
        std::cout << "Found " << count << " students" << std::endl;
    }

    count = 0;
    inFile.open("courses.txt");
    if (inFile.fail())
        std::cout << std::endl << "File courses.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            cid = stoi(str);
            getline(inFile, name);
            getline(inFile, str);
            credits = stoi(str);
            srec.add_course(cid, name, credits);
            count++;
        }
        inFile.close();
        std::cout << "Found " << count << " courses" << std::endl;
    }

    count = 0;
    inFile.open("grades.txt");
    if (inFile.fail())
        std::cout << std::endl << "File grades.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            sid = stoi(str);
            getline(inFile, str);
            cid = stoi(str);
            getline(inFile, str);
            grade = str[0];
            srec.add_grade(sid, cid, grade);
            count++;
        }
        inFile.close();
        std::cout << "Found " << count << " grades" << std::endl;
    }
}
