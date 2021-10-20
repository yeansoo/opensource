#include<stdio.h>

int main() {


    int A[3][3];

    int add[3][3];

    int sub[3][3];

    printf("행렬 A의 값을 입력하세요\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            scanf("%d", & temp);

            A[i][j] = temp;

        }

    }


    int B[3][3];



    printf("행렬 B의 값을 입력하세요\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            scanf("%d", & temp);

            B[i][j] = temp;

        }

    }

    

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                add[i][j] = A[i][j] + B[i][j];

                sub[i][j] = A[i][j] - B[i][j];

            }

        }

        printf("A + B (두 행렬의 덧셈)\n");

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                printf("%d ", add[i][j]);

            }

            printf("\n");

        }



        printf("A - B (두 행렬의 뺄셈)\n");

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                printf("%d ", sub[i][j]);

            }

            printf("\n");

        }

    

}