#include "report.h"

double calcPassRate(const GradeBook& book, double passLine) {
    const auto& list = book.list();
    if (list.empty()) return 0.0;
    int passed = 0;
    for (const auto& s : list) {
        if (s.score >= passLine) ++passed;
    }
    return 100.0 * static_cast<double>(passed) / static_cast<double>(list.size());
}
