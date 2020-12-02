#include <iostream>
using namespace std;
#define MAX 1000  // 通讯录最大人数

// 菜单界面
void showMenu() {
	cout << "*****************************" << endl;
	cout << "*****	1-添加联系人	*****" << endl;
	cout << "*****	2-显示联系人	*****" << endl;
	cout << "*****	3-删除联系人	*****" << endl;
	cout << "*****	4-查找联系人	*****" << endl;
	cout << "*****	5-修改联系人	*****" << endl;
	cout << "*****	6-清空联系人	*****" << endl;
	cout << "*****	0-退出通讯录	*****" << endl;
	cout << "*****************************" << endl;
}

// 联系人结构体
struct Person
{
	string name;
	// 1 男 2 女
	int sex;
	int age;
	string phone;
	string address;
};

// 通讯录结构体
struct AddressBooks
{

	struct Person personArray[MAX];
	int size;
};

// 1. 添加联系人
void addPerson(AddressBooks* abs) {
	if (abs->size == MAX) {
		cout << "通讯录已满.无法添加" << endl;
		return;
	}

	string name;
	cout << "请输入姓名" << endl;
	cin >> name;
	abs->personArray[abs->size].name = name;

	int sex = 0;
	cout << "请输入性别" << endl;
	cout << "1 --- 男" << endl;
	cout << "2 --- 女" << endl;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArray[abs->size].sex = sex;
			break;
		}
		cout << "输入有误请从新输入" << endl;
	}

	int age;
	cout << "请输入年龄" << endl;
	cin >> age;
	abs->personArray[abs->size].age = age;

	int phone;
	cout << "请输入电话" << endl;
	cin >> phone;
	abs->personArray[abs->size].phone = phone;

	string address;
	cout << "请输入地址" << endl;
	cin >> address;
	abs->personArray[abs->size].address = address;

	abs->size++;
	cout << "添加成功" << endl;
	system("pause");
	system("cls");
};

int main() {

	int select;

	AddressBooks abs;
	abs.size = 0;

	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1: // 添加联系人
			addPerson(&abs);
			break;
		case 2: // 显示联系人
			break;
		case 3: // 删除联系人
			break;
		case 4: // 查找联系人 
			break;
		case 5: // 修改联系人
			break;
		case 6: // 清空联系人
			break;
		case 0: // 退出通讯录
			cout << "你已退出" << endl;
			system("pause");
			return 0;
			break;
		}
	}

	system("pause");
	return 0;
}