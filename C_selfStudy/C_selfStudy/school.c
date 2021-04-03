#include <stdio.h>
#include <malloc.h>

int main() 
{
	int n_class = 0;
	int n_student = 0;

	printf("\n몇반인지 입력 : ");
	scanf("%d", &n_class);

	float **student = malloc(sizeof(float*) * n_class);
	//float **student2 = NULL;

	for (int i = 0; i < n_class; i++)            // 세로 크기만큼 반복
	{
		printf("\n%d반의 학생수 입력 : ", i+1);
		scanf("%d", &n_student);
		student[i] = malloc(sizeof(float) * n_student);    // (int 크기 * 가로 크기)만큼 동적 메모리 할당.

		for (int j = 0; j < n_student; j++) {
			float k = 0.0;
			printf("\n%d 반 %d 번째 학생의 키 입력 : ", i+1, j+1);
			scanf("%f", &k);
			student[i][j] = k;
		}
	}

	NULL;

	printf("-----result------\n");

	for (int i = 0; i < n_class; i++) {
		for (int j = 0; j < n_student; j++) {
			printf("%.1f\n", student[i][j]);
		}
	}

	for (int i = 0; i < n_class; i++) {
		free(student[i]);
	}

	free(student);
	
	return 0;
}