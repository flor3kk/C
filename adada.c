#include <stdio.h>

float clip(float n, float lower, float upper){
	if (n < lower) n = lower;
	if (n  > upper) n = upper;
	return n;
}

int main(int argc, char const *argv[]){
	printf("%f \n", clip(14.5, 10.0, 20.0));
	printf("%f \n", clip(4.5, 10.0, 20.0));
	printf("%f \n", clip(22.5, 10.0, 20.0));
	return 0;
}


int sum_to_n(int n){
	int sum = 0;
	for (int i = 0; i <= n; i++){
		sum += i;
	}
	return sum;
}

/*int main(int argc, char const *argv[]){
	printf("%d \n", sum_to_n(1));
	printf("%d \n", sum_to_n(2));
	printf("%d \n", sum_to_n(9));
}
*/

int sum_digits(int n){
	int digit = 0;
	int sum = 0;
	while(n > 0){
		digit = n % 10;
		sum += digit;
		n = n / 10;
	}
	return sum;
}

/*int main(int argc, char const *argv[]){
	printf("%d \n", sum_digits(1));
	printf("%d \n", sum_digits(12345));
	printf("%d \n", sum_digits(101010));
	return 0;
}
*/

int print_cm(int a, int b, int n){
	
	for (int i = 0; i < n; i++){
		if (i % a == 0 && i % b == 0){
			printf("%d ", i);
		}
		else{
			printf("\n");
		}
	}
}

/*
int main(int argc, char const *argv[]){
	printf("%d \n", print_cm(2,17,150));
	return 0;
}
*/



// ZADANIE 2
/*int main(){
	int value;
	printf("ile dodaæ liczb?: ");
	scanf("%d", &value);
	int dane[value];
	int liczba;
	for(int i = 0; i < value; i++){
		printf("podaj liczbe %d: ", i+1);
		scanf(" %d", &liczba);
		dane[i] = liczba;
	}
	printf("oto dane liczby: \n");
 	for(int i = value-1; i >= 0; i--) {
 		printf("liczba %d: ", i+1);
    	printf("%d\n", dane[i]);
  	}
	return 0;
}
*/


// POWIELANIE OSTATNIEJ LICZBY !!!!!!!!!!!
/*
int main(){
	int dane[6];
	int liczba;
	for(int i = 0; i < 6; i++){
		printf("podaj liczbe %d: ", i+1);
		scanf(" %d", &liczba);
		dane[i] = liczba;
	}
	printf("oto dane liczby: \n");
	for(int i = 0; i < 6; i++){
		printf("%d ",dane[i]);
	}
	printf("\n");
	
	printf("powielone liczby to: ");
	for(int i = 0; i < 6; i++){
		int digit = 0;
		digit = dane[i] % 10;
		printf("%d", dane[i]);
		printf("%d ", digit);
	}
	
	
	return 0;
}
*/




//ZADANIE 4 !!!!!
/*int main(){
	int liczba;
	printf("podaj liczbe z przedzialu <2;20>: ");
	scanf(" %d", &liczba);
	while(liczba < 2 || liczba > 20){
		printf("podano nieprawidlowa liczbe!\n");
		printf("podaj liczbe z przedzialu <2;20>:");
		scanf("%d", &liczba);
	}
	return 0;
}
*/

// PIRAMIDA !!!!!!!!!!!!!!!!
/*
int main(){
	int level;
	printf("podaj ile poziomow: ");
	scanf("%d", &level);
	
	for(int i = 0; i < level; i++){
		int f = level - i;
		for (f; f > 0; f--){
			printf(" ");
		}
		
		for(int t = 0; t <= 2 * i; t++){
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
*/


/*
int main(){
	char c = 'A';
	int lvl;
	
	printf("podaj ile poziomow: ");
    scanf(" %d", &lvl);

    for (int i = 0; i < lvl; i++) {
        int spacje = lvl - i;
        for (spacje; spacje > 0; spacje--) 
            printf(" ");

        for (int t = 0; t <= 2 * i; t++)
			printf("%c", c);	
			c++;
        printf("\n");
	}
	return 0;
}
*/


/*
#define MONTHS 12 // liczba miesiêcy
#define YEARS 4 // liczba lat

int main(void)
{
	float sum = 0;
	int count =0;
	float avg;
    // inicjalizacja (4 x 12) elementów tablicy
    const float data[YEARS][MONTHS] =
    {
        {2.31,4.3,4.3,3.2,11.0,1.5,0.8,0.2,0.4,2.4,3.5,6.65},
        {7.5,8.2,1.2,11.6,2.4,0.0,5.21,0.7,0.1,0.85,1.2,7.12},
        {8.61,7.5,6.7,9.94,2.1,0.65,0.315,0.68,1.1,2.3,6.1,8.38},
        {7.26,9.9,8.4,3.3,1.2,5.8,0.4,0.0,0.6,12.7,4.3,6.17}
    };
	
	for (int i = 0; i < YEARS; i++){
		for (int j = 0; j < MONTHS; j++){
			printf(" %*.2f",5, data[i][j]);
			sum += data[i][j];
			count += 1;
		}
		printf("\n");
	}
	printf("suma: %.2f \n", sum);
	
	avg = sum / count;
	printf("oto srednia: %f\n", avg);
    
    
    float max = data[0][0];
    float min = data[0][0];
    
	for(int i = 0; i < YEARS; i++){
		for(int j =0; j < MONTHS; j++){
			if(data[i][j] > max){
				max = data[i][j];
			}
		}
	}
	printf("max: %f \n", max);
    
    
    for(int i = 0; i < YEARS; i++){
		for(int j =0; j < MONTHS; j++){
			if(data[i][j] < min){
				min = data[i][j];
			}
		}
	}
	printf("min: %f \n", min);
    return 0;
}
*/



