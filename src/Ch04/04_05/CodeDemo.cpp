// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // std::string my_course;
    // my_course = courses[0].get_name();
    // std::cout << my_course << std::endl;

    // Calculate the GPA for the selected student.
    // Write your code here
    // GPA = (credits * grade) / sum of credits

    // look up the student's grades:
    char student_grade;
    int course_id;
    float total_credits;
    total_credits = 0;
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i].get_student_id() == id)
        {
            student_grade = grades[i].get_grade();
            course_id = grades[i].get_course_id();

            float grade_value;
            switch(student_grade)
            {
                case 'A':
                    grade_value = 4;
                    break;
                case 'B':
                    grade_value = 3;
                    break;
                case 'C':
                    grade_value = 2;
                    break;
                case 'D':
                    grade_value = 1;
                    break;
                case 'F':
                    grade_value = 0;
                    break;
                default:
                    grade_value = 0;
                    break;
            }
            std::cout << "Grade " << grades[i].get_grade() << " is worth " << grade_value << std::endl;
            std::cout << "Course id is " << course_id << std::endl;
            
            float credits_times_grade;
            for (int n = 0; n < courses.size(); n++)
            {
                // go after total credits first, then add the numerator
            }

        }
            
    }
    // student_grades = grades[0].get_grade();
    // std::cout << "your grade is " << student_grades << std::endl;
        // if student id = grades.get_student_id:
                // for course in courses:
                    // course = grades[grade].get_course_id;
                        // if courses[course].get_id() = course:
                            // courses[course].get_credits();

    
    
    std::string student_str;
    student_str = students[id - 1].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
