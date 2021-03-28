#include <stdio.h>

int main()
{
	/*
	int* numPtr;     // 자료형 쪽에 *을 붙임
	int * numPtr;    // 자료형과 변수 가운데 *를 넣음
	int *numPtr;     // 변수 쪽에 *을 붙임

	모두 상관없음 같은 의미이다.

	1.  %d : 10진수로 출력 정수형
	2.  %f : 실수형
	3.  %e : 지수형
	4.  %o : 8진수로 출력
	5.  %x : 16진수로 출력
	6.  %u : 부호없는 10진수로 출력
	7.  %g : 실수형으로 자동 출력
	8.  %p : 포인터의 주소를 출력
	9.  %c : 하나의 문자로 출력 문자형
	10. %s : 문자열을 출력

	%p와 %x의 차이?? 16진수로 표시하는건 같은데 16진수의 값이 메모리의 주소이냐 아니냐?

	*/

	int *numPtr; // 4byte (declaration)
	int num1 = 10; // 4byte (initialization)

	printf("sizeof(numPtr) : %d\n", sizeof(numPtr));
	printf("sizeof(num1) : %d\n\n", sizeof(num1));

	numPtr = &num1; // num1의 주소를 numPtr(포인터 변수)에 값으로 지정 (assign)

	int *numCopy = numPtr; // shallow copy ?
	int numCopy2 = *numPtr; // 

	printf("&numPtr - &num1: %d\n\n", 0x00CFFD90 - 0x00CFFD84);

	printf("numPtr : %p\n", numPtr);
	printf("numPtr : %d\n\n", numPtr); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'

	// numPtr : 00CFFD84 | num1의 주소와 동일 (numPtr은 주소를 담는 변수 == 포인터 변수)
	// numPtr: 13630852 | 무시

	printf("&numPtr : %p\n", &numPtr);
	printf("&numPtr : %d\n\n", &numPtr); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int **'

	// &numPtr : 00CFFD90 | numPtr이라는 포인터 변수가 할당된 메모리의 주소
	// &numPtr : 13630864 | 무시

	printf("*numPtr : %p\n", *numPtr); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("*numPtr : %d\n\n", *numPtr);

	// *numPtr : 0000000A | 무시
	// *numPtr : 10 | numPtr에 담긴 주소가 가리키는 곳의 값 numPtr -> num1 -> 10 약간 심볼릭 링크처럼 연결된 느낌

	printf("------------------------\n");
	printf("num1 : %p\n", num1); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("num1 : %d\n\n", num1);

	// num1: 0000000A | 무시
	// num1 : 10 | 내가 초기에 설정한 num1의 값

	printf("&num1 : %p\n", &num1);
	printf("&num1 : %d\n\n", &num1); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'
	
	// &num1 : 00CFFD84 | num1의 메모리 주소
	// &num1 : 13630852 | 무시

	printf("------------------------\n");
	printf("numCopy : %p\n", numCopy);
	printf("numCopy : %d\n\n", numCopy); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'

	// numCopy: 00CFFD84 | int *numCopy = numPtr; == int (주소를 담는 포인터 변수) = (주소를 담고 있던 포인터 변수)
	// numCopy : 13630852 | 무시

	printf("&numCopy : %p\n", &numCopy);
	printf("&numCopy : %d\n\n", &numCopy); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int **'

	// &numCopy : 00CFFD78 | numCopy 변수가 할당된 메모리 주소
	// &numCopy : 13630840 | 무시

	printf("*numCopy : %p\n", *numCopy); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("*numCopy : %d\n\n", *numCopy);

	// *numCopy : 0000000A | 무시
	// *numCopy : 10 | numCopy가 가리키는 값 numPtr과 같음

	return 0;
}