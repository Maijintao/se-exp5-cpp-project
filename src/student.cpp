#include "student.h"

void GradeBook::addStudent(const std::string& id, const std::string& name, double score) {
    students_.push_back({id, name, score});
}

double GradeBook::getAverage() const {
    if (students_.empty()) return 0.0;
    double total = 0.0;
    for (const auto& s : students_) {
        total += s.score;
    }
    return total / static_cast<double>(students_.size());
}

const std::vector<Student>& GradeBook::list() const {
    return students_;
}
