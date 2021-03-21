#include <iostream>
#include <bitset>

using namespace std;

unsigned int getRGB(unsigned int mask, unsigned int color);

int main()
{
	/*bool item1 = false;
	bool item2 = false;
	bool item3 = false;
	bool item4 = false;*/

	// event �߻��� �������� ��´�, �Ҵ´� ��� ������ ���� ��ŭ ������ �����ؾ��ϴ� ����

	// �������� �ִ� 8����� �����Ѵ�

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl; // 00000001
	cout << bitset<8>(opt1) << endl; // 00000010
	cout << bitset<8>(opt2) << endl; // 00000100
	cout << bitset<8>(opt3) << endl; // 00001000

	unsigned char items_flag = 0;

	cout << "No item " << bitset<8>(items_flag) << endl;

	// item0 on
	items_flag |= opt0; // 00000000 or 00000001 or ������ �� �� �ϳ��� 1�̿��� 1��
	cout << "item0 obtained " << bitset<8>(items_flag) << endl;

	// item3 on
	items_flag |= opt3;
	cout << "item3 obtained " << bitset<8>(items_flag) << endl;

	// item3 lost // 0000 1001 and !(0000 1000 -> 1111 0111) �Ѵ� 1�̾�� 1�̴ϱ� ����� 0000 0001
	items_flag &= ~opt3;
	cout << "item3 lost " << bitset<8>(items_flag) << endl;

	// has item1 ??
	if (items_flag & opt1)
	{
		cout << "has item1 true" << endl;
	}
	else
	{
		cout << "has item1 false" << endl;
	}

	// has item0 ??
	if (items_flag & opt0)
	{
		cout << "has item0 true" << endl;
	}
	else
	{
		cout << "has item0 false" << endl;
 	}

	// obtain item 2,3 �ѹ��� ������ 2���� ��� ���
	items_flag |= (opt2 | opt3);
	cout << "item2, item3 obtained " << bitset<8>(items_flag) << endl;

	// item0 lost 
	items_flag ^= opt0; // items_flag &= ~opt0 �ϰ� ���� ��� �ε�....? �ִ��� ������ �𸣰� ������ �ݴ�� ��ȯ�ϴ°Ŷ� �����ϱ� ������ �߰��ϴ°��� �����ε�
	cout << "item0 lost" << bitset<8>(items_flag) << endl; // 0000 1100

	//�̺�Ʈ �߻��� ������2�� ������ �ְ� ������1�� ������ ���� ������
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= (opt1 | opt2);
		cout << "has item2 trua and has item1 false" << bitset<8>(items_flag) << endl; // 0000 1010
	}


	// 16���� �и� 
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << bitset<32>(red_mask) << endl;

	unsigned int pixel_color = 0xDAA520;

	cout << bitset<32>(pixel_color) << endl;

	unsigned char red, green, blue;

	red = (getRGB(red_mask, pixel_color) >> 16); // ĳ������ ���ص��Ǵµ� 16������ �׷��ǰ� �ƴϸ� int(4byte) -> char(1byte) �� �˾Ƽ� ��Ʈ�� ©���°ǰ�...?
	green = (char)(getRGB(green_mask, pixel_color) >> 8);
	blue = (char)getRGB(blue_mask, pixel_color);

	cout << "red " << bitset<8>(red) << endl;
	cout << "green " << bitset<8>(green) << endl;
	cout << "blue " << bitset<8>(blue) << endl;

	return 0;

}
 
unsigned int getRGB(unsigned int mask, unsigned int color)
{
	return (color & mask);
}