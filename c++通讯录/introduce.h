#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
typedef struct Linkman {
	string name;
	string iponeNum;
	string address;
	int age;	
	int sex;
}Linkman;

typedef struct AddressMsg {
	int Linkman_size;
	Linkman linkman[1000];
}addressMsg;

void menu();
void insertLinkman();
void showLinkman();//显示联系人
void deleteLinkman();
void updateLinkman();//修改联系人
void emptyLinkman();