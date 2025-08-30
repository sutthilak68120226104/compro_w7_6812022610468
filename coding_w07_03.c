#include <stdio.h>

int main() {
    int level;

    // รับค่าระดับ level จากผู้ใช้
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบว่าค่าที่กรอกมาถูกต้องหรือไม่ (ต้องอยู่ในช่วง 1–4 เท่านั้น)
    if (level < 1) {
        printf("Error: Level below 1 is not allowed.\n");
    } else if (level > 4) {
        printf("Error: Level above 4 is not allowed.\n");
    } else {
        // ถ้าค่าอยู่ในช่วง 1–4 ให้ใช้ switch แสดงระดับ
        switch (level) {
            case 1:
                printf("Level 1: Beginner\n");
                break;
            case 2:
                printf("Level 2: Intermediate\n");
                break;
            case 3:
                printf("Level 3: Advanced\n");
                break;
            case 4:
                printf("Level 4: Expert\n");
                break;
        }
    }

    return 0;
}