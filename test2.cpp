#include <stdio.h>

int main() {
    int num = 0, val; // 변수이름 설정

    while (num < 9) { // 반복문 조건 부여
        num += 2; // 변수 설정 변경
        val = 2 * num; // 2씩 곱해지는 등비수열
        printf("2*%d = %d \n", num, val);
    }

    return 0;
}
