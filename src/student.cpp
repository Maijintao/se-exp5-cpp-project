#include "student.h"
#include <algorithm>

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

double GradeBook::getMaxScore() const {
    if (students_.empty()) return 0.0;
    double best = students_[0].score;
    for (const auto& s : students_) {
        best = std::max(best, s.score);
    }
    return best;
}

double GradeBook::getMinScore() const {
    if (students_.empty()) return 0.0;
    double low = students_[0].score;
    for (const auto& s : students_) {
        low = std::min(low, s.score);
    }
    return low;
}

const std::vector<Student>& GradeBook::list() const {
    return students_;
}
