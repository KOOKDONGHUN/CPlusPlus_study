#include <stdio.h>
#include <malloc.h>

int main()
{
	int *numPtr; // 4byte (declaration)
	int num1 = 10; // 4byte (initialization)

	printf("sizeof(numPtr) : %d\n", sizeof(numPtr));
	printf("sizeof(num1) : %d\n\n", sizeof(num1));

	numPtr = &num1; // num1의 주소를 numPtr(포인터 변수)에 값으로 지정 (assign)

	/*	numPtr = 10; 가능은 하나 쓰면 안됨
		이유 -> 10을 assign하면 numPtr의 값은 0000000a인데 대부분의 운영체제에서 메모리의 앞부분은 커널영역 이다.
		따라서 이러한 방법의 프로그래밍은 예상치 못한 큰 오류를 발생시킬수 있다. */

	/*	null pointer는 상수 0(NULL)을 의미함
		힙은 런타임시 (실행시) 메모리를 할당해주는 역할을 한다.

	*/

	int *numCopy = numPtr; // shallow copy ? (같은 곳을 바라봄)
	int numCopy2 = *numPtr; // depp copy	 (다른 곳을 바라봄 | 내가 지금까지 알던 일반적인 복사)

	printf("같은 녀석들 %p | %p | %p\n", &num1, numPtr, numCopy);
	printf("같은 녀석들 %d | %d | %d | %d\n", num1, *numPtr, *numCopy, numCopy2);
	printf("별개 녀석들 %p | %p | %p | %p\n\n", &num1, &numPtr, &numCopy, &numCopy2);

	num1 = 11;

	printf("같은 녀석들 %p | %p | %p\n", &num1, numPtr, numCopy);
	printf("같은 녀석들 %d | %d | %d\n", num1, *numPtr, *numCopy); // numCopy2는 그대로임 | 이유 -> 그냥 일반 변수에 numPtr이 10일때의 값으로 초기화 했기 때문
	printf("별개 녀석들 %p | %p | %p | %p\n\n", &num1, &numPtr, &numCopy, &numCopy2);

	*numPtr = 12;

	printf("같은 녀석들 %p | %p | %p\n", &num1, numPtr, numCopy);
	printf("같은 녀석들 %d | %d | %d\n", num1, *numPtr, *numCopy);
	printf("별개 녀석들 %p | %p | %p | %p\n\n", &num1, &numPtr, &numCopy, &numCopy2);

	*numCopy = 13;

	printf("같은 녀석들 %p | %p | %p\n", &num1, numPtr, numCopy);
	printf("같은 녀석들 %d | %d | %d\n", num1, *numPtr, *numCopy);
	printf("별개 녀석들 %p | %p | %p | %p\n\n", &num1, &numPtr, &numCopy, &numCopy2);

	free(numPtr);

	return 0;
}