#include <stdio.h>

int main()
{
	/*
	int* numPtr;     // 자료형 쪽에 *을 붙임
	int * numPtr;    // 자료형과 변수 가운데 *를 넣음
	int *numPtr;     // 변수 쪽에 *을 붙임

	모두 상관없음 같은 의미이다.

	*/

	int *numPtr;
	int num1 = 10;

	numPtr = &num1; // num1의 주소를 numPtr(포인터 변수)에 값으로 지정

	int *numCopy = numPtr; // shallow copy 

	/* 
	1. %d : 10진수로 출력 정수형
	2. %f : 실수형
	3. %e : 지수형
	4. %o : 8진수로 출력
	5. %x : 16진수로 출력
	6. %u : 부호없는 10진수로 출력
	7. %g : 실수형으로 자동 출력
	8. %p : 포인터의 주소를 출력
	9. %c : 하나의 문자로 출력 문자형
	10. %s : 문자열을 출력

	%p와 %x의 차이?? 
	
	*/

	printf("numPtr : %p\n", numPtr);
	printf("numPtr : %d\n\n", numPtr); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'

	// numPtr : 00CFFD84
	// numPtr: 13630852

	printf("&numPtr : %p\n", &numPtr);
	printf("&numPtr : %d\n\n", &numPtr); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int **'

	// &numPtr : 00CFFD90
	// &numPtr : 13630864

	printf("*numPtr : %p\n", *numPtr); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("*numPtr : %d\n\n", *numPtr);

	// *numPtr : 0000000A
	// *numPtr : 10

	printf("------------------------\n");
	printf("num1 : %p\n", num1); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("num1 : %d\n\n", num1);

	// num1: 0000000A
	// num1 : 10

	printf("&num1 : %p\n", &num1);
	printf("&num1 : %d\n\n", &num1); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'
	
	// &num1 : 00CFFD84
	// &num1 : 13630852

	printf("------------------------\n");
	printf("numCopy : %p\n", numCopy);
	printf("numCopy : %d\n\n", numCopy); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'

	// numCopy: 00CFFD84
	// numCopy : 13630852

	printf("&numCopy : %p\n", &numCopy);
	printf("&numCopy : %d\n\n", &numCopy); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int **'

	// &numCopy : 00CFFD78
	// &numCopy : 13630840

	printf("*numCopy : %p\n", *numCopy); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("*numCopy : %d\n\n", *numCopy);

	// *numCopy : 0000000A
	// *numCopy : 10

	return 0;
}