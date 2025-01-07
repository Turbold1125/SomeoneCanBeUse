#include<stdio.h>
struct Date {
int day, month, year;
};
int udriin_zuruu(Date a, Date b){
	int s=0, i;
	if(a.year<b.year)
	s=s+(b.year-a.year)*365;
	if(a.month<b.month){
		for(i=a.month; i<b.month; i++){
		if(i==4||i==6||i==9||i==11)
		s=s+30;
		else if(i==2)
		s=s+28;
		else
		s=s+31;
		}
	}
	else if(a.month>b.month){
		for(i=b.month; i<a.month; i++){
		if(i==4||i==6||i==9||i==11)
		s=s-30;
		else if(i==2)
		s=s-28;
		else
		s=s-31;
		}
	}
	s=s+(b.day-a.day);
return s;
}
Date read(){
	Date a;
	printf("day: ");
	scanf("%d", &a.day);
	printf("month: ");
	scanf("%d", &a.month);
	printf("year: ");
	scanf("%d", &a.year);
	printf("\n\n");
	return(a);
}
int main(){
	Date a, b;
	a=read();
	b=read();
	printf("%d", udriin_zuruu(a,b));
	return 0;
}

