#include <stdio.h>

int main() {
    int level;

    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบก่อนว่า level อยู่ในช่วง 1-4 หรือไม่
    if (level < 1 || level > 4) {
        printf("Invalid membership level\n");
    } else {
        // ถ้าอยู่ในช่วง ให้ใช้ switch-case แยกกรณี
        switch(level) {
            case 1:
                printf("Silver: 5%% discount\n");
                break;
            case 2:
                printf("Gold: 10%% discount + Reward points\n");
                break;
            case 3:
                printf("Platinum: 15%% discount + Reward points + Birthday gift\n");
                break;
            case 4:
                printf("Diamond: All benefits + VIP events\n");
                break;
        }
    }

    return 0;
}