#include <stdio.h>
#include <stdlib.h>
/*
int main(){
	FILE *fp; // u¿ywamy metody wysokopoziomowej -musimy mieæ zatemidentyfikator pliku, uwaga na gwiazdkê!
	char tekst[]="Hello world";
	if((fp =fopen("test.txt","w"))==NULL){
		printf("Nie mogê otworzyæ pliku test.txt do zapisu!\n");
		exit(1);
		}
	fprintf(fp,"%s",tekst); // zapisz nasz napis w pliku 
	fclose(fp);// zamknij plik 
	return 0;
}
*/

/*
int main(){
	char bufor[6];
	FILE *fp;
	int i;
	
	fp =fopen("file.txt","r");
	
	bufor[0]=fgetc(fp);
	bufor[1]=fgetc(fp);
	bufor[2]=fgetc(fp);
	bufor[3]=fgetc(fp);
	bufor[4]=fgetc(fp);
	bufor[5]=fgetc(fp);
	
	printf("Odczytane znaki:|%s|\n",bufor);
	printf("Odczytane znaki:\n");
	
	for(i =0;i <6;i++)
		printf("%c\n",bufor[i]);
		
	fclose(fp);
	
	return 0;
}
*/

/*
int main(){
	FILE *fp;
	
	int n =2022;
	char text[]="Programowanie w jezyku C.\n";
	double pi =3.14;
	
	fp =fopen("myfile.txt","w");
	
	fprintf(fp,"%d\n",n);
	fprintf(fp,"%lf\n",pi);
	fprintf(fp,"%s\n",text);
	
	fclose(fp);
	return 0;
}
*/

/*
int main(){
	FILE *fp;
	
	fp =fopen("file.txt","w+");
	
	fputs("This is C programming.\n"
	"This is a system programming language.\n"
	"We are programming in C in 2022 year.\n"
	"Today is 20.12.2022",fp);
	
	fclose(fp);
	
	return 0;
}
*/

/*
int main(){
	FILE *fp;
	int ch;
	
	fp =fopen("alfabet.txt","w+");
	
	for(ch ='a';ch <='z';ch++)
		fputc(ch,fp);
		
	fputc('\n',fp);
	
	for(ch ='A';ch <='Z';ch++)
		fputc(ch,fp);
	
	fclose(fp);
	
	return(0);
}
*/

/*
int main(){
	FILE *fp;
	char buffer[255];
	
	fp =fopen("alfabet.txt","r");
	
	while(fgets(buffer, 255, fp)!=NULL){
		printf("%s\n",buffer);
	}
	
	fclose(fp);
	
	return(0);
}
*/

/* 
int main(){
	FILE *fp;
	char c;
	
	fp =fopen("alfabet.txt","r");
	
	while((c =fgetc(fp))!=EOF){
		printf("%c",c);
	}
	
	fclose(fp);
	
	return(0);
}
*/	


//Zadanie 2
/*
int main(int argc, char **argv){
	char name[100];
	char buffer[250];
	printf("podaj nazwe pliku: ");
	scanf("%s", name);
	
	FILE *fp;
	fp = fopen(name, "r");
	
	while(fgets(buffer, 255, fp)!=NULL){
		printf("%s",buffer);
	}
	
	fclose(fp);
	
	return 0;
}
*/

/*
int main(int argc, char** argv){
	int i;
	printf("Nazwa programu:\t%s\n",argv[0]);
	printf("Ilosc argumentow programu:\t%d\n",argc);
	for(i =1;i <argc;i++)
		printf("Argumentem nr %d jest%s\n",i,argv[i]);
}
*/

//Zadanie 3
/*
int main(int argc, char **argv){
	FILE *fp;
	char c;
	int count = 0;
	
	printf("Nazwa programu:\t%s\n",argv[0]);
	printf("Ilosc argumentow programu:\t%d\n\n",argc);
	
	fp =fopen("myfile.txt","r");
	
	while((c =fgetc(fp))!=EOF){
		printf("%c",c);
		count++;
	}
	
	fclose(fp);
	
	printf("\n\nznaków w tekscie: %d", count);
	
	return 0;
}
*/

//Zadanie 4
/*
int main(int argc, char **argv){
	char buffer[255];
	int count = 0;
	
	FILE *fp;	
	
	fp =fopen("alfabet.txt","r");
	
	printf("Nazwa programu:\t%s\n",argv[0]);
	printf("Ilosc argumentow programu:\t%d\n\n",argc);
	
	while(fgets(buffer, 255, fp)!=NULL){
		printf("%s",buffer);
		count++;
	}
	
	fclose(fp);
	
	printf("\n\nlini w tekscie: %d", count);
	
	return 0;
}
*/

//Zadanie 5
/*
int main(){
	int count = 0;
	FILE *fp;
	char bufor[1024];
	fp =fopen("file.txt","r");
		while(!feof(fp)){
			if(fscanf(fp,"%s",bufor)!=1)
				break;
			printf("%s\n",bufor);
			count++;
		}
	fclose(fp);
	printf("slowa ---- %d", count);
	return 0;
	}
*/

//Zadanie 14
//Z INTERNETU
/*
int main(int argc, char **argv){
	FILE *fp;
	char c;
	
	fp =fopen("myfile.txt","r");

	//fseek(fp, 0, SEEK_SET);
		
	do{
		c = fgetc(fp);
			
		if (isgraph(c)){
			putchar(c);
		}
	}while(c!=EOF);
	
	fclose(fp);
	return 0;
}
*/


//Zadanie 15
/*
int main(int argc, char **argv){
	FILE *fp;
	char g;
	int count = 0;
	
	fp =fopen("myfile.txt","r");
	
	while((g =fgetc(fp))!=EOF){
		if(g == 'c' || g == 'C')
			count++;
	}
	printf("tyle liter 'c' -");
	//  printf(" %d", count);
	fclose(fp);
	return count;
}
*/

//Zadanie 17
/*
int main(){
	FILE *fp;
	int lines = 0;
	char words[255];
	printf("ile lini wgrac: ");
	scanf("%d", &lines);
	
	fp=fopen("lines.txt", "w+");
		for(int i =0; i < lines; i++){
			scanf("%s", words);
			fputs(words, fp);
			fputs("\n", fp);
		}
	
	close(fp);
	return 0;
}
*/

//Zadanie 18

//Zadanie 22

