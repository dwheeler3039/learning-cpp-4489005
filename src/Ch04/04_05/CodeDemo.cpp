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

    // Calculate the GPA for the selected student.
    // Write your code here
    // GPA = (credits * grade) / sum of credits

    char student_grade;
    int course_id;
    float total_credits;
    total_credits = 0;
    float credits_times_grade;
    credits_times_grade = 0;

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
            // std::cout << "Grade " << grades[i].get_grade() << " is worth " << grade_value << std::endl;
            // std::cout << "Course id is " << course_id << std::endl;
            
            for (int n = 0; n < courses.size(); n++)
            {
                if (courses[n].get_id() == course_id)
                {
                    total_credits += courses[n].get_credits();
                    credits_times_grade += grade_value * courses[n].get_credits();
                }
            }

        }
            
    }

    // std::cout << "Total credits is " << total_credits << std::endl;
    // std::cout << "Total credits x grade value is " << credits_times_grade << std::endl;
    GPA = credits_times_grade / total_credits;
    
    std::string student_str;
    student_str = students[id - 1].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
