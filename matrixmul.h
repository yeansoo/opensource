int* matrixmul(int* A, int* B) {

   
    int mul[3][3];

   



        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                for(int k=0;k<3;k++){
               mul[i][j]+=A[i][k]*B[k][j];
            }

            }

        }

        printf("A * B (두 행렬의 곱셈)\n");

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                printf("%d ", mul[i][j]);

            }

            printf("\n");

        }
    return (int* )mul;



}  
