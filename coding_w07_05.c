#include <stdio.h>

int main() {
    // ประกาศตัวแปรพื้นฐาน
    int age;                // อายุของลูกค้า
    int vipLevel;           // ระดับสมาชิก VIP (1-5)
    float purchaseAmount;   // ยอดซื้อ
    float discountPercent = 0.0; // เปอร์เซ็นต์ส่วนลดที่ได้รับ (เริ่มต้น = 0)

    // รับข้อมูลจากผู้ใช้งาน
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vipLevel);

    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);

    // ตรวจสอบเงื่อนไขการให้ส่วนลดตามโจทย์
    // *** ลำดับเงื่อนไขสำคัญมาก เพื่อไม่ให้ส่วนลดทับกัน ***

    if (vipLevel == 5 || purchaseAmount > 50000) {
        // VIP ระดับ 5 หรือยอดซื้อเกิน 50,000 → ลด 25%
        discountPercent = 25.0;
    } else if (age > 60 || vipLevel == 3 || vipLevel == 4) {
        // อายุเกิน 60 หรือ VIP level 3, 4 → ลด 20%
        discountPercent = 20.0;
    } else if (age >= 30 && age <= 40 && purchaseAmount > 2000) {
        // อายุระหว่าง 30–40 และซื้อเกิน 2,000 → ลด 15%
        discountPercent = 15.0;
    } else if (age >= 18 && age <= 25 && purchaseAmount > 1000) {
        // อายุระหว่าง 18–25 และซื้อเกิน 1,000 → ลด 10%
        discountPercent = 10.0;
    }

    // แสดงผลลัพธ์ให้ผู้ใช้ทราบ
    printf("\n--- Customer Info ---\n");
    printf("Age: %d\n", age);
    printf("VIP Level: %d\n", vipLevel);
    printf("Purchase Amount: %.2f THB\n", purchaseAmount);

    if (discountPercent > 0.0) {
        // มีส่วนลด → แสดงเปอร์เซ็นต์
        printf("Discount received: %.0f%%\n", discountPercent);
    } else {
        // ไม่มีส่วนลดตามเงื่อนไขใดเลย
        printf("No discount applied\n");
    }

    printf("\nThank you for shopping with us!\n");

    return 0;  // จบโปรแกรม
}