#include <stdio.h>


int Exercice1(){
    int a = 0;
    int b = 0;
    printf("Saisissez deux entier :\n");
    scanf("%d %d", &a, &b);
    if (a>b){
        printf("Le plus grand entier est a = %d\n", a);
    }
    else if(b>a){
        printf("Le plus grand entier est b = %d\n", b);
    }
    else {
        printf("Les deux entiers sont égaux\n");
    }
    return 0;
}

int Exercice2(){
    int longueur = 0;
    int largeur = 0;
    printf("Saisissez la largeur puis la longueur du rectangle:\n");
    scanf("%d %d", &largeur, &longueur);
    int perimetre = (longueur+largeur)*2;
    int aire = longueur*largeur;
    printf(" L'aire du rectangle est %d cm carre et le perimetre est %d cm\n", aire, perimetre);

    return 0;
}


int Exercice3(){
    int a = 0;
    int b =3;
    printf("Saisissez un entier :\n");
    scanf("%d", &a);
    if (a>=b && a%3==0){
        printf("%d est un multiple de %d et est supérieur ou égal à 10\n",a,b);
    }
    else if (a>=10 && a%3!=0){
        printf("%d n'est pas un multiple de %d mais est supérieur ou égal à 10\n",a,b);
    }
    else if (a<10 && a%3==0){
        printf("%d est un multiple de %d mais est inférieur à 10\n",a,b);
    }
    else {
        printf("%d est ni un multiple de 3 ni supérieur ou égal à 10\n",a);
    }
    return 0;
}

#define AGE_LIMITE_ENFANT 12
#define AGE_LIMITE_JEUNE 17
#define AGE_LIMITE_ETUDIANT 27
#define AGE_SENIOR 65


int Exercice4(){

    int ageClient = 0;
    int etudiant= 0;
    printf("Saisissez votre age :\n");
    scanf("%d", &ageClient);
    printf("Saisissez 1 si vous etes étudiant sinon 0:\n");
    scanf("%d", &etudiant);

    if (ageClient < AGE_LIMITE_ENFANT){
        printf ("Vous beneficiez du tarif enfant à 4 euros");
    }
    else if (etudiant == 0 && ageClient<=AGE_LIMITE_JEUNE && ageClient>=AGE_LIMITE_ENFANT){
        printf ("Vous beneficiez du tarif jeune à 6 euros");
    }
    else if (etudiant == 1 && ageClient<=AGE_LIMITE_ETUDIANT && ageClient>=AGE_LIMITE_ENFANT) {
        printf("Vous beneficiez du tarif jeune à 6 euros");
    }
    else if (ageClient >= AGE_SENIOR){
        printf("Vous beneficiez du tarif senior à 6 euros");
    }
    else {
        printf("Vous payez plein tarif à 9 euros");
    }
    return 0;
}

int Exercice5(){

    int numero = 0;
    printf("Saisissez le numéro de la boisson\n");
    scanf("%d",&numero);

    if (numero==1){ printf("Vous obtenez un Coca !\n"); }
    else if (numero==2){ printf("Vous obtenez un Fanta !\n"); }
    else if (numero==3){ printf("Vous obtenez un Oasis !\n"); }
    else if (numero==10){ printf("Vous obtenez un Cafe !\n"); }
    else if (numero==11){ printf("Vous obtenez un Chocolat !\n"); }
    else { printf("Ce numero correspond à aucune boisson !\n");}
    return 0;
}

int Exercice6(){

    float note1;
    float note2;
    float note3;
    do {
        printf("Saisissez la note 1 :\n");
        scanf("%f",&note1);
    } while ( note1 > 20.0 || note1 < 0.0);

    do {
        printf("Saisissez la note 2 :\n");
        scanf("%f",&note2);
    } while ( note2 > 20.0 || note2 < 0.0);

    do {
        printf("Saisissez la note 3 :\n");
        scanf("%f",&note3);
    } while (note3 > 20.0 || note3 < 0.0);

    float moy= (note1+note2+note3)/3;
    printf("La moyenne vaut %f\n", moy);

    return moy;
}
int Exercice7(){

    int eleves = 0;
    int classeOuvertes;
    int totalEleve = 0;
    printf("Saisissez le nombre de classe ouvertes\n");
    scanf("%d", &classeOuvertes);
    for (int i = 0;i<classeOuvertes;i++) {
        printf("Combien d'élèves sont dans la classe ouverte numéro %d ?\n", i + 1);
        scanf("%d", &eleves);
        totalEleve += eleves;
    }
    printf("Il y a %d eleves au total !\n", totalEleve);
    return 0;
}

int Exercice8(){

    int n;
    do {
        printf("Saisissez un nombre entier qui est un multiple de 7 et un multiple de 2\n");
        scanf("%d", &n);
    } while ( !(n%2 == 0 && n%7 == 0));

}

int Exercice9(){

    int pierres;
    int m=1;
    int r=0;

    printf("Saisissez le nombre de pierres possédées\n");
    scanf("%d", &pierres);

    while (pierres >= m*m+r){

        if (pierres == m*m+r){
            printf("On peut construire %d étages avec %d pierres\n", m,pierres);
            return 0;
        }
        r+=m*m;
        m+=1;
    }
    printf("On peut construire %d étages avec %d pierres\n", m-1,pierres);
    return 0;

}

int Exercice10(){
    int entier = 0;
    int somme = 0;
    int compteur = 0;

    while (entier>=0) {
        printf("Entrez un entier positif continuer\n");
        scanf("%d", &entier);
        if (entier < 0) {
            printf(" La moyenne des nombres positif est %d\n", somme/compteur);
            return 0 ;
        }
        compteur+=1;
        somme+=entier;
    }
    return 0;
}

int main() {

    //Exercice1();
    //Exercice2();
    //Exercice3();
    //Exercice4();
    //Exercice5();
    //Exercice6();
    //Exercice7();
    //Exercice8();
    //Exercice9();
    //Exercice10();


    return 0;
}
