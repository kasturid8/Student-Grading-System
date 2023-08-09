#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> studentNames;
    std::vector<double> grades;

    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) {
        std::string name;
        double grade;

        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin.ignore(); // Ignore newline character left in the input stream from previous input
        std::getline(std::cin, name);

        std::cout << "Enter the grade of student " << i + 1 << ": ";
        std::cin >> grade;

        studentNames.push_back(name);
        grades.push_back(grade);
    }

    // Calculate the average grade
    double totalGrade = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        totalGrade += grades[i];
    }
    double averageGrade = totalGrade / numStudents;

    // Find the highest and lowest grades
    double highestGrade = grades[0];
    double lowestGrade = grades[0];
    for (int i = 1; i < numStudents; ++i) {
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }

    // Display the results
    std::cout << "Student grades summary:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        std::cout << studentNames[i] << ": " << grades[i] << std::endl;
    }

    std::cout << "Average grade: " << averageGrade << std::endl;
    std::cout << "Highest grade: " << highestGrade << std::endl;
    std::cout << "Lowest grade: " << lowestGrade << std::endl;

    return 0;
}

