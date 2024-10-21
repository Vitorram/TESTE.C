#include <stdio.h>

int nota (float p1, float p2, float p3){
	if (p1<=p2&&p1<=p3){
	printf ("nota disconsidera p1: %.2f\n",p1);
	printf ("sua nota eh %.2f",(p2+p3)/2);}
	else if (p2<=p1&&p2<=p3){
	printf ("nota disconsidera p2: %.2f\n",p2);
	printf ("sua nota eh %.2f",(p1+p3)/2);}
	else {
	printf ("nota disconsidera p3: %.2f\n",p3);
	printf ("sua nota eh %.2f",(p2+p1)/2);}
	return 0;
}

int main (){
	float p1,p2,p3;
	printf ("qual sua nota 1: ");
	scanf ("%f", &p1);
	if (p1<0||p1>10){printf ("nota invalida"); return 0;}
	printf ("qual sua nota 2: ");
	scanf ("%f", &p2);
	if (p2<0||p2>10){printf ("nota invalida"); return 0;}
	printf ("qual sua nota 3: ");
	scanf ("%f", &p3);
	if (p3<0||p3>10){printf ("nota invalida"); return 0;}
	nota (p1,p2,p3);
    return 0;
}