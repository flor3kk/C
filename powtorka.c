#include<stdio.h>
#include <math.h>

struct trojkat{
	int a;
	int b;
	int c;
};
/*
int obwod(struct trojkat tr1){
	int obw = 0;
	return obw = tr1.a + tr1.b + tr1.c;
}
int main(){
	struct trojkat tr1={10,20,30};

	printf("%d", obwod(tr1));
	return 0;
}
*/

// Zadanie 10
struct dane_osobowe{
	char imie[20];
	char nazwisko[30];
	int wiek;
};

/*
int najmlodszy(struct dane_osobowe tab[3]){
	int min = tab[0].wiek;

	for(int i =0; i<3; i++){
		if(min > tab[i].wiek){
			min = tab[i].wiek;
		}
	}
	
	for(int j=0; j<3; j++){
		if(min == tab[j].wiek)
			printf("IMIE: %s\nNAZWISKO: %s\nWIEK:", tab[j].imie, tab[j].nazwisko);
	}
	
	return min;
}

int main(){
	struct dane_osobowe tab[3] = {
	{"KAMIL","AMRAH",32},
	{"AMADI","KAGA",26},
	{"LALA","SOKOL",18}
	};
	
	printf("%d", najmlodszy(tab));
	
	return 0;
}
*/


//Zadanie 11
typedef struct osoba{
	char nazwisko[50];
	int plec;
	int wiek;
}osoba;

/*
float avg(osoba tab[]){
	
	float count = 0;
	float age = 0;
	
	for(int i =0; i<4; i++){
		count += 1;
		age += tab[i].wiek;
	}
	
	float srednia = age/count;
	
	int reszta[4];
	int z = 0;


	for(int j = 0; j<4; j++){
		z = abs(tab[j].wiek - srednia);
		reszta[j] = z;
		}
	
	int min  = reszta[0];
	int pozycja = 0;
	
	for(int a =1; a<4; a++){
		if(min >= reszta[a]){
			min = reszta[a];
			pozycja = a;
		}
	}
	
	printf("%s %d - ", tab[pozycja].nazwisko, tab[pozycja].wiek);

	
	return srednia;
}


int main(){
	osoba tab[4]={
	{"GEIRUSZ", 1, 23},
	{"NIERUS", 0, 23},
	{"SLIWA", 1, 24},
	{"DLUGOSZ", 1, 30}
	};
	
	printf("%.1f", avg(tab));
	return 0;
}
*/
//============================================
//Zadanie 1

/*
int* find(int* tab, int size, int val){
	
	int* aha;
	
	for(int i =0; i< size; i++){
		if(val == tab[i]){
			aha = &tab[i];
			break;
		}
	}
	
	if(!aha) 
		return 0;
	else 
		return aha;

}


int main(int argc, char *argv[]){
	
	int tab[5] = {1,2,3,4,5};
	
	printf("%x", find(&tab, 5, 3));

	return 0;	
}
*/

//==================================
//Zadanie 2


/*
void find_minavgmax(int* tab, int size, int* min, float* avg, int* max){
	
	*max = tab[0];
	*min = tab[0];
		
	for(int i = 0; i<size; i++){
		if(*max < tab[i])
			*max = tab[i];
	}
	
	
	for(int j = 0; j<size; j++){
		if(*min > tab[j])
			*min = tab[j];
	}
	
	
	int sum = 0;
	
	for(int i = 0; i<size; i++){
		sum += tab[i];
	}
	*avg = sum / size;

}

int main(int argc, char *argv[]){
	
	int tab[5] = {-30,-30,-30,-40,-222};
	
	int min;
	int max;
	float avg;;
	
	find_minavgmax(tab, 5, &min, &avg, &max);
	printf("MAX: %d,\nMIN: %d,\nAVG: %.2f", max, min, avg);
	return 0;
}
*/

// ZADANIA Z ZALICZENIA WYKLADOW PRZYKLADOWE 

/*
int main(){
	int i = 0;
	switch(i){
		case 0: printf("podstawy");
		case 1: printf("programowania");
			break;
		default: printf("w c");
		break;
	}
	return 0;
}
*/

/*
int main(void)
{
    int n = 0;
    while (n <= 6)
    {
		printf("%d ", ++n);
    }

    return 0;
}
*/
