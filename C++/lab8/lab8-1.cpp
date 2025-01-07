#include <stdio.h>
#include<string.h>
int main(){
	char a[100], b[100], c[100], d[100], e[100];
	int y, m, g, on=2021;
	printf("Tani ovog?\n");
	scanf("%s", &a);
	printf("Tani ner?\n");
	scanf("%s", &b);
	printf("Tanii tursun on sar udur\n");
	scanf("%d",&y);
		scanf("%d",&m);
			scanf("%d",&g);
	printf("Durtai ungu?\n");
	scanf("%s", &c);
	printf("Hobbi yu be?\n");
	scanf("%s", &d);
	printf("Chuluut tsagaaraa yu hiideg be?\n");
	scanf("%s", &e);
	printf("%s ovogtoi %s ni %d-%d-%d udur tursun. Odoo %d nastai. Tuunii durtai ungu bol %s. \n", a, b, y, m, g, on-y, c);
	printf("Ter chuluut tsagaaraa %s hiideg. Tuunii hobbi bol %s.", d, e);
}
