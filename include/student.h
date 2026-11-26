#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

struct Student {
    std::string id;
    std::string name;
    double score;
};

class GradeBook {
public:
    void addStudent(const std::string& id, const std::string& name, double score);
    double getAverage() const;
    const std::vector<Student>& list() const;

private:
    std::vector<Student> students_;
};

#endif // STUDENT_H
