#include<stdio.h>

int main() {

    int A[3][3];
    int mul[3][3];

    printf("��� A�� ���� �Է��ϼ���\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j <3; j++) {

            scanf("%d", & temp);

            A[i][j] = temp;

        }

    }


    int B[3][3];



    printf("��� B�� ���� �Է��ϼ���\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j <3; j++) {

            scanf("%d", & temp);

            B[i][j] = temp;

        }

    }



        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                for(int k=0;k<3;k++){
               mul[i][j]+=A[i][k]*B[k][j];
            }

            }

        }

        printf("A * B (�� ����� ����)\n");

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                printf("%d ", mul[i][j]);

            }

            printf("\n");

        }



}  