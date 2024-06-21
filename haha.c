#include <stdio.h>


// =======ZLICZANIE ZNAKOW W PLIKU==========
/*
int main(){
	
	FILE *fp;
	char c;
	int count = 0;
	
	fp = fopen("alfabet.txt", "r");
	
	while((c = fgetc(fp))!= EOF){
		count++;
	}
	printf("%d", count);
	
	
	fclose(fp);
	
	return 0;
}
*/

//=======ZLICZANIE LINIJEK W PLIKU========
/*
int main(int argc, char **argv){
	FILE *fp;
	char buffer[255];
	int count = 0;
	
	fp = fopen("c.txt", "r");
	
	while(fgets(buffer, 255, fp) != NULL){
		count++;
	}
	printf("%d", count);
	
	fclose(fp);
	
	return 0;
}
*/

//=======ZLICZNIE SLOW W PLIKU==========

/*
int main(int argc, char **argv){
	FILE *fp;
	char buffer[1024];
	int count = 0;
	
	fp = fopen("file.txt", "r");
	
	while(!feof(fp)){
		if(fscanf(fp, "%s", buffer) != 1)
			break;
		count++;
	}
	printf("%d", count);
	
	
	fclose(fp);
	return 0;
}
*/


//=========ZAPISYWANIE LICZB============
/*
int main(int argc, char **argv){
	FILE *fp;
	int liczby[10];
	
	fp = fopen("pliczek.txt", "w");
	
	for(int i =0; i<10; i++){
		printf("podaj liczbe nr: %d ", i);
		scanf("%d", &liczby[i]);
		fprintf(fp, "%d", liczby[i]);
		fputs("\n", fp);
	}

	
	return 0;
}
*/


// =====ZAPISYWANIE DO PLIKU I ODCZYT=========
/*
int main(int argc, char **argv){
	FILE *fp;
	int lines; 
	char buffer[100];
	
	printf("ile linijek podac: ");
	scanf("%d", &lines);
	
	fp = fopen("nowyplik.txt", "w");
	for(int i = 0; i < lines; i++){
		scanf("%s ", buffer);
		fprintf(fp, "%s \n", buffer);
	}
	
	printf("\nOdczyt\n");
	
	fclose(fp);
	fp = fopen("nowyplik.txt", "r");
	while(fgets(buffer, 255, fp) != NULL){
		printf("%s", buffer);

	}
	
	fclose(fp);
	return 0;
}
*/

//=======ZLICZANIE LICZB I SREDNIA Z PLIKU============
/*
int main(){
	FILE *fp;
	
	int sum = 0;
	int count = 0;
	int num; 
	
	fp = fopen("pliczek.txt", "r");
	
	while(fscanf(fp, "%d", &num) > 0){
		sum += num;
		count++;
	}
	
	printf("%d \n", count);
	printf("%.2f",(float)sum/count);
	
	fclose(fp);
	
	return 0;
}
*/

// ===========STRUKTURY==========
/*
struct trojkat{
	int a;
	int b;
	int c;
};

int obw(struct trojkat tr1){
	return tr1.a + tr1.b +tr1.c;
}

int main(int argc, char **argv){
	struct trojkat tr1 = {10,20,30};
	
	printf("%d", obw(tr1));
	
	return 0;
}
*/


//================ZAD2=========
/*
struct trojkat{
	int a;
	int b;
	int c;
};

int aha(struct trojkat tr1, struct trojkat *tr2){
	*tr2 = tr1;
}

int main(int argc, char **argv){
	struct trojkat tr1 = {20, 30, 60};	
	struct trojkat tr2;
	
	aha(tr1, &tr2);
	
	printf("%d, %d, %d", tr2.a, tr2.b, tr2.c);
		
	return 0;
}
*/

//=========ZAD 4================
/*
struct punkt{
	int x;
	int y;
	int z;
};

int copy(struct punkt tab1[], struct punkt tab2[]){
	tab2[0].x = tab1[0].x;
	tab2[0].y = tab1[0].y;
	tab2[0].z = tab1[0].z;
	
	printf("%d %d %d", tab2[0].x, tab2[0].y, tab2[0].z);
}

int main(){
	struct punkt tab1[1] = {100, 200, 300};
	struct punkt tab2[1];

	copy(tab1,tab2);

	return 0;
}
*/

//============ZAD10==================
/*
struct dane_osobowe{
	char imie[20];
	char nazwisko[30];
	int wiek;
};


int najmlodszy(struct dane_osobowe tab[]){
	int min = tab[0].wiek;
	int pozycja = 0;
	
	for(int i =0; i<3; i++){
		if(min > tab[i].wiek){
			min = tab[i].wiek;
			pozycja = i;
		}
	}

	printf("IMIE: %s\nNAZWISKO: %s\nWIEK:", tab[pozycja].imie, tab[pozycja].nazwisko);
	return min;
}

int main(){
	struct dane_osobowe tab[3] = {
		{"KAMIL","AMRAH",32},
		{"AMADI","KAGA",14},
		{"LALA","SOKOL",18}
	};
	
	printf("%d", najmlodszy(tab));
	
	return 0;
}
*/


//================ZAD11==============
/*
typedef struct osoba{
	char nazwisko[50];
	int plec;
	int wiek;
}osoba;

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
	
	int min = reszta[0];
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

//===========ZAD1 WSKAZNIKI==========
/*
int* find(int* tab, int size, int val){
	int* aha;
	
	for(int i =0; i < size; i++){
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
	
	printf("%x ", find(&tab, 5, 5));
	
	return 0;
}
*/

//==============ZAD2 WSKAZNIKI==========
/*
void find_minavgmax(int* tab, int size, int* min, float* avg, int* max){
	*max = tab[0];
	*min = tab[0];
	int sum = 0;
	
	for(int i =0; i < size; i++){
		sum += tab[i];
		
		if(*max < tab[i])
			*max = tab[i];
			
		if(*min > tab[i])
			*min = tab[i];
	}
	
	*avg = sum / size;
}

int main(){
	int tab[5] = {-10,-20,-30,-40,50};
	
	int min;
	int max;
	float avg;
	
	find_minavgmax(&tab, 5, &min, &avg, &max);
	printf("%d %d %f", max, min, avg);
	
	return 0;
}
*/


//=============ZAD3 WSKAZNIKI============
/*
void reverse_str(char* str){
    int i, len, temp;
    len = strlen(str);

    for (i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main(){

	char slowo[] = {"mam to w chuju"};
	reverse_str(slowo);
	printf("%s", slowo);
		
	return 0;
}
*/
