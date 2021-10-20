#include<stdio.h>
#include"matrixaddsub.h"
#include"matrixmul.h"

void main()
{
	int A[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int B[3][3]={
		{7,8,9},
		{1,2,3},
		{4,5,6}
	};

	int addtest[3][3]={
		{8,10,12},
		{5,7,9},
		{11,13,15}
	};

	int add[3][3]=matrixadd(A,B);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(add[i][j]!=addtest[i][j])
			printf("ÇÕ Æ²¸²");
		}
	}

	int subtest[3][3]={
		{-6,-6,-6},
		{3,3,3},
		{3,3,3}
	};
	int sub[3][3]=matrixsub(A,B);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(sub[i][j]!=subtest[i][j])
			printf("»¬ Æ²¸²");
		}
	}

	int multest[3][3]={
		{21,27,33},
		{57,72,87},
		{93,117,141}
	};

	int mul[3][3]=matrixmul(A,B);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(mul[i][j]!=multest[i][j])
			printf("°ö Æ²¸²");
		}
	}

}