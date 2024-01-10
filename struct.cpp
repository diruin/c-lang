#include<stdio.h>
#include<string.h>

struct coffee{
	char name[20];
	int price;
};
void addMenu(struct coffe *menu) {
	strcpy_s(menu[5].name,sizeof(menu[5].name), "아이스 커피");
	menu[5].price = 2400;

}


int main() {
	int a = 1;
	struct coffee americano = { "americano",2500 };
	struct coffee hazelnut = { "hazelnut",3000 };
	printf("%s %d", americano.name, americano.price);

	struct coffee menu[6] = {
		{"americano",1500},
		{"cake",2300},
		{"water",2323},
		{"hazelnut",4545},
		{"moka",6565} };

	addMenu(&menu);
	printf("메뉴 추가 ㄱㄱ");




	return 0;
}