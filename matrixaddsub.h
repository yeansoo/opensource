int* matrixadd(int* A, int* B) {



    int add[3][3];
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

    return (int*) add;
    

};

int* matrixsub(int* A, int* B) {


  

    int sub[3][3];

 


    

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

               
                sub[i][j] = A[i][j] - B[i][j];

            }

        }

     



        printf("A - B (두 행렬의 뺄셈)\n");

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                printf("%d ", sub[i][j]);

            }

            printf("\n");

        }

    return (int*) sub;
    

};
