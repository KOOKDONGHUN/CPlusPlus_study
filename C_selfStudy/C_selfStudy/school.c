#include <stdio.h>
#include <malloc.h>

int main() 
{
	int n_class = 0;
	int n_student = 0;

	printf("\n������� �Է� : ");
	scanf("%d", &n_class);

	float **student = malloc(sizeof(float*) * n_class);
	//float **student2 = NULL;

	for (int i = 0; i < n_class; i++)            // ���� ũ�⸸ŭ �ݺ�
	{
		printf("\n%d���� �л��� �Է� : ", i+1);
		scanf("%d", &n_student);
		student[i] = malloc(sizeof(float) * n_student);    // (int ũ�� * ���� ũ��)��ŭ ���� �޸� �Ҵ�.

		for (int j = 0; j < n_student; j++) {
			float k = 0.0;
			printf("\n%d �� %d ��° �л��� Ű �Է� : ", i+1, j+1);
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