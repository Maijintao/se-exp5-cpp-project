#include <iomanip>
#include <iostream>
#include "student.h"

int main() {
    GradeBook book;
    book.addStudent("202400703030", "MaiJintao", 92.5);
    book.addStudent("202400703031", "ChenZhiyuan", 86.0);
    book.addStudent("202400703032", "LinZihao", 78.5);

    std::cout << "=== Student Grade System ===" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total students: " << book.list().size() << std::endl;
    std::cout << "Average score : " << book.getAverage() << std::endl;
    std::cout << "Max / Min     : " << book.getMaxScore() << " / " << book.getMinScore() << std::endl;
    return 0;
}
