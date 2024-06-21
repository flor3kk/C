#include<stdio.h>

/*
int main(int argc, char **argv){

	struct date {
		unsigned int day;
		unsigned int month;
		unsigned int year;
	};
	
	struct date today;
	//printf("%d\n",today.month);
	
	today.day=10;
	today.month=1;
	today.year=2022;
	
	printf("Wyswietlenie skladowych struktury:\n\n");
	
	printf("today.day=%d\n",today.day);
	
	printf("today.month=%d\n",today.month);
	
	printf("today.year=%d\n",today.year);
	
	return 0;
}
*/

/*
int main(int argc, char **argv){
	typedef struct date {
		unsigned int day;
		unsigned int month;
		unsigned int year;
	}date;
	date today;
	
	today.day=10;
	
	printf("today.day=%d\n",today.day);
	
	return 0;
}
*/

/*
int main(int argc, char **argv){
	struct date {
		unsigned int day;
		unsigned int month;
		unsigned int year;
	}today;
	
	today.day=10;
	today.month=1;
	today.year=2022;
	
	printf("Wyswietlenie skladowych struktury:\n\n");
	
	printf("today.day=%d\n",today.day);
	printf("today.month=%d\n",today.month);
	printf("today.year=%d\n",today.year);
	return 0;
}
*/

/*
int main(int argc, char **argv){
	struct date {
		unsigned int day;
		unsigned int month;
		unsigned int year;
	};
	struct date today ={25,9,2004};
	
	printf("Wyswietlenie skladowych struktury:\n\n");
	
	printf("today.day=%d\n",today.day);
	printf("today.month=%d\n",today.month);
	printf("today.year=%d\n",today.year);
	return 0;
}
*/


/*
struct SimpleStruct {
	unsigned int ui;
	double d;
	float f;};
	
int main(int argc, char **argv){
//inicjalizacja struktury podczas jej definicji 
	struct SimpleStruct s1 ={12,3.14,6.666};
	printf("ui=%u, d=%.2f, f=%.3f\n",s1.ui,s1.d,s1.f);
	
//inicjalizacja struktury podczas jej definicji
	struct SimpleStruct s2 ={.d=15.16,.ui=34};
	printf("ui=%u, d=%.2f, f=%.3f\n",s2.ui,s2.d,s2.f);
	
//inicjalizacja struktury tuz po jej definicji
	struct SimpleStruct s3;
	s3.ui=1024;
	s3.d=0.89;
	s3.f=4.45;
	
	printf("ui=%u, d=%.2f, f=%.3f\n",s3.ui,s3.d,s3.f);
	
	return 0;
}
*/


/*
struct date {
	unsigned int day;
	unsigned int month;
	unsigned int year;};
	
void ShowDate(struct date today){
	printf("Wyswietlenie skladowych struktury:\n\n");
	printf("today.day=%u\n",today.day);
	printf("today.month=%u\n",today.month);
	printf("today.year=%u\n",today.year);}
	
int main(int argc, char **argv){
	struct date today ={10,1,2022};
	ShowDate(today);
	
	return 0;
}
*/


/*
struct time {
 	unsigned int hour;
 	unsigned int minutes;
 	unsigned int seconds;
};
struct time UpdateTime(struct time now) {
	now.seconds+=1;

 	if (now.seconds == 60) {
 		now.seconds = 0;
 		now.minutes+=1;
//kolejna minuta
 	if (now.minutes == 60) {
//kolejna godzina
 		now.minutes = 0;
 		now.hour++;
 	}
 	}
//polnoc
 	if (now.hour == 24)
 		now.hour = 0;
 	return now;
}
int main(int argc, char **argv) {
 	struct time now = {.hour=23, .minutes=41, .seconds=53};
 	printf("%u:%u:%u\n", now.hour, now.minutes, now.seconds);
 	now = UpdateTime(now);
 	printf("%u:%u:%u\n", now.hour, now.minutes, now.seconds);
 	return 0;
}
*/

/*
struct date {
 	unsigned int day;
 	unsigned int month;
 	unsigned int year;
};
int main(int argc, char **argv) {
//najpierw definicja
 	struct date tab1[3];
// pozniej deklaracja, przypisanie wartosci elementom tablicy-strukturom
 	tab1[0].day = 13;
 	tab1[0].month = 1;
 	tab1[0].year = 2022;
 	
 	printf("%d", tab1[0].day);
 	printf("%d", tab1[0].month);
 	printf("%d", tab1[0].year);
}
*/

#include <malloc.h>
/*
struct time {
 	unsigned int hour;
 	unsigned int minutes;
 	unsigned int seconds;
};
int main(int argc, char **argv) {
 	struct time *testTimes;
 	testTimes = malloc(sizeof(struct time) * 5);
 	
 	testTimes[0].hour = 11;
 	testTimes[0].minutes = 59;
 	testTimes[0].seconds = 59;
//…
 	testTimes[3].hour = 23;
 	testTimes[3].minutes = 59;
 	testTimes[3].seconds = 59;
 	printf("%u:%u:%u\n", testTimes[0].hour, testTimes[0].minutes, testTimes[0].seconds);
 	
	 free(testTimes);
 	return 0;
}
*/


/*
struct ksiazka {
 	double cena;
 	char tytul[255];
};

double SumaCen(struct ksiazka tab[], unsigned int n) {
 	unsigned int i;
 	double suma = 0.0;
 	
 	for (i = 0; i < n; i++)
 		suma += tab[i].cena;
 	return suma;
}

int main(int argc, char **argv) {
 	struct ksiazka tab[2] = {
		{120, "Programowanie w C"},							
		{150, "Programowanie w C++"}};
		
 	printf("%.2f PLN\n", SumaCen(tab, 2));
 	return 0;
}
*/


/*
struct month {
 	unsigned int numberOfDays;
 	char *name;
};

int main(int argc, char **argv) {
// deklaracja
 	struct month aMonth;
// definicja
 	aMonth.numberOfDays = 31;
// przydziel pamiec na tablice dynamiczna
 	aMonth.name = malloc(sizeof(char) * 3);
// definicja
 	aMonth.name[0] = 'J';
 	aMonth.name[1] = 'a';
 	aMonth.name[2] = 'n';
// deklaracja
 	struct month bMonth;
// definicja
 	bMonth.numberOfDays = 21;
// przydziel pamiec na tablice dynamiczna
 	bMonth.name = malloc(sizeof(char) * 3);
// definicja
 	bMonth.name[0] = 'F';
 	bMonth.name[1] = 'e';
 	bMonth.name[2] = 'b';
 	printf("%s has %u days. \n", aMonth.name, aMonth.numberOfDays);
 	
	printf("%s has %u days. \n", bMonth.name, bMonth.numberOfDays);
// zwolnij pamiec
 	free(aMonth.name);
 	free(bMonth.name);
 	
	return 0;
}
*/


/*
struct month {
 	unsigned int numberOfDays;
	char name[3];
};
int main(int argc, char **argv) {
 	int i;
// deklaracja i definicja
	struct month months[12] = {
 		{31, 'J', 'a','n'},
 		{21, 'F', 'e','b'},
 		{31, 'M', 'a','r'}};
// definicja
 	months[3].numberOfDays = 30;
 	months[3].name[0] ='A';
 	months[3].name[1] ='p';
 	months[3].name[2] ='r';
// wyswietlenie tablicy struktur
 	for (i = 0; i < 3; ++i)
 		printf(" %c%c%c \t%u\n",
		months[i].name[0], 
		months[i].name[1],
		months[i].name[2], 
		months[i].numberOfDays);
 return 0;
 }
*/



/*
struct przykladowa {
 	char znak;
 	int calkowita;
};

int main() {
 	int i, suma = 0;
// zmienna typu strukturalnego
 	struct przykladowa p;
// dostep do elementow
 	p.calkowita = 1024;
 	p.znak = 'R';
 	printf("%d %c \n", p.calkowita, p.znak);

//**********************************************

// wskaznik na zmienna typu strukturalnego
	struct przykladowa *wp;
// wskazuje na p
 	wp = &p;
// uzywamy -> aby dostac sie do elementu
 	printf("%d %c \n", wp->calkowita, wp->znak);

//**********************************************

// tablica struktur - statyczna, jednowymiarowa
 	struct przykladowa tab[2];
// dostep do elementow
 	tab[0].calkowita = 100;
 	tab[0].znak = 'K';
 	tab[1].calkowita = 2;
 	tab[1].znak = 'M';
 	printf("%d %c \n", tab[0].calkowita, tab[0].znak);
 	for (i = 0; i < 2; i++)
 		printf("%d %c ", tab[i].calkowita, tab[i].znak);

//**********************************************

// tablica wskaznikow do struktur
	struct przykladowa *tabw[2];
// dostep do elementow
 	tabw[0] = malloc(sizeof(struct przykladowa) * 3);
 	for (i = 0; i < 3; i++)
 		tabw[0][i].calkowita = 100;
 	for (i = 0; i < 3; i++)
 		suma += tabw[0][i].calkowita;
 	printf("\nsuma = %d\n", suma);
 	free(tabw[0]);
 	
	return 0;
}
*/

//Zadanie 1

struct trojkat{
	int a;
	int b;
	int c;
};
/*
int obwod(struct trojkat tr1){
	int obw = 0;
	obw = tr1.a + tr1.b + tr1.c;
	printf("%d", obw);
	
}
int main(){
	struct trojkat tr1={3,20,30};

	return obwod(tr1);
}
/*


//Zadanie 2
/*
int main(){
	struct trojkat tr1={10,20,30};
	struct trojkat *tr2;
	tr2 = &tr1;
	printf("%d", tr2);
}
*/


//Zadanie 3
struct punkt{
	int x;
	int y;
	int z;
};
/*
int min(struct punkt aha[2]){
	int mi = 0;	

	
	for(int i = 0; i<2; i++){
		if(aha[i].x < aha[i].y){
			if(aha[i].x < aha[i].z)
				mi = aha[i].x;
		}
		if(aha[i].y < aha[i].x){
			if(aha[i].y < aha[i].z)
				mi = aha[i].y;
		}	
		if(aha[i].z < aha[i].x){
			if(aha[i].z < aha[i].y)
				mi = aha[i].z;	
		}
		
		printf("dla %d tabeli, najmniejsza liczba jest: %d \n", i, mi);
		
	}
	return 0;
}

//Zdefiniuj strukturê punkt s³u¿¹c¹ do przechowywania wspó³rzêdnych
//punktów w trójwymiarowej przestrzeni kartezjañskiej. 
//Napisz funkcjê, która otrzymuje jako argumenty tablicê 
//tab o argumentach typu struct punkt oraz jej rozmiar, 
//i zwraca jako wartoœæ najmniejsz¹ spoœród odleg³oœci pomiêdzy 
//punktami przechowywanymi w tablicy tab. Zak³adamy, ¿e 
//otrzymana w argumencie tablica ma co najmniej dwa argumenty.

int main(){
	struct punkt aha[2];

	aha[0].x = 8;
	aha[0].y = 4;
	aha[0].z = 0;
	
	aha[1].x = 20;
	aha[1].y = 10;
	aha[1].z = 30;

	return min(aha);
}
*/


//Zadanie 4

int copy(struct punkt tab[1], struct punkt tab2[1]){
	tab2[0].x = tab[0].x;
	tab2[0].y = tab[0].y;
	tab2[0].z = tab[0].z;
	
	printf("%d, %d, %d", tab2[0].x, tab2[0].y, tab2[0].z);
}


int main(){
	struct punkt tab[1];
	struct punkt tab2[1];
	
	tab[0].x = 10;
	tab[0].y = 25;
	tab[0].z = 10;
	
	return copy(tab, tab2);
}


