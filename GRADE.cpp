#include <iostream> // สำหรับ input/output
#include <iomanip>  // สำหรับการจัดรูปแบบ output (เช่น การกำหนดทศนิยม)

int main() {
    double score; // ตัวแปรสำหรับเก็บคะแนน

    // รับคะแนนจากผู้ใช้
    std::cout << "Enter student's score (0-100): ";
    std::cin >> score;

    // ตรวจสอบคะแนนว่าอยู่ในช่วงที่ถูกต้องหรือไม่
    if (score < 0 || score > 100) {
        std::cout << "Invalid data, please try again..." << std::endl;
    } else {
        double grade; // ตัวแปรสำหรับเก็บเกรด

        // กำหนดเกรดตามช่วงคะแนน
        if (score >= 80) {
            grade = 4.0;
        } else if (score >= 75) {
            grade = 3.5;
        } else if (score >= 70) {
            grade = 3.0;
        } else if (score >= 65) {
            grade = 2.5;
        } else if (score >= 60) {
            grade = 2.0;
        } else if (score >= 55) {
            grade = 1.5;
        } else if (score >= 50) {
            grade = 1.0;
        } else {
            grade = 0.0;
        }

        // แสดงผลเกรด
        // std::fixed และ std::setprecision(1) ใช้เพื่อแสดงผลทศนิยม 1 ตำแหน่ง
        std::cout << "The student's grade is: " << std::fixed << std::setprecision(1) << grade << std::endl;
    }

    return 0; // คืนค่า 0 เมื่อโปรแกรมทำงานเสร็จสมบูรณ์
}
