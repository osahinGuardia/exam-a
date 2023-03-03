/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <iostream>


/*
Pour l'exercice vous aurez besoin de generer des entiers aléatoire : rand() renvoit un entier aléatoire.
il s'utilise : rand() % NOMBREMAX + 1 
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2
voir dans la methode main.
*/






// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls. ???

int ft_generer(){
    
    return 0;
}

// Ce lien vous sera utile : https://www.geeksforgeeks.org/pass-2d-array-parameter-c/


/*Écrire une fonction saisir() qui demande à l’utilisateur de saisir au clavier les indices i et j et la valeur v à placer à l’emplacement (i,j).ok
La fonction doit vérifier la validité des indices et de la valeur.ok
Si la case n’est pas occupée, la valeur doit être placée dans la grille. remplissage est alors incrémentée*/

int ft_retry(){
    int restart;
    printf("Voulez-vous continuer et retenter ? [1 = oui, 0 = non] :");
    scanf("%d", &restart);
    return restart;
}

int ft_saisir(grille){
    
    int i=0, j=0, v=40; //restart=1;
    
    printf("Saisissez la position dans le tableau, \n");
    printf("*\n");
    printf("\t(Voici un exemple de comment faire:6 8 5 (ligne, colonne, valeur)) \n");
    printf("*\n");
    printf("Allez-y :");
    scanf("%d %d %d", &j, &i, &v);
        
    if (i<=9){
        if (j<=9){
            if (v<=9){
                printf("Vous avez choisi la case %d-%d, et la valeur %d", j, i, v);
            }else{
                printf("! Vous avez choisi une mauvaise colonne 〔・╭╮・〕\n");
                if (1 == ft_retry())
                    ft_saisir();
            }
        }else{
            printf("! Vous avez choisi une mauvaise ligne 〔・╭╮・〕\n");
            if (1 == ft_retry())
                    ft_saisir();
        }
        
    }else{
        printf("! Vous avez choisi une mauvaise valeur 〔・╭╮・〕\n");
        if (1 == ft_retry())
                    ft_saisir();
    }
    
    
    
    
    // return nbNotNul;
    return 0;
}

/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/


/*
Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
et qui renvoie 1 si la région est correctement remplie, 0 sinon.
*/

//Écrire la fonction verifierGrille() qui renvoie 1 si la grille est correctement remplie et 0 sinon


//Écrire le programme principal, en supposant que la seule condition d’arrêt est la réussite du sudoku (ce test ne devra être fait que si nécessaire)


int main(){
    // Ne pas toucher le code entre les commentaires
    srand( time( NULL ) );


    int i, j, k;
    int solution[9][9];
    printf("SOLUTION");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    for(j=0;j<9; ++j) 
    {
    for(i=0; i<9; ++i)
        solution[j][i] = (i + j*3 +j /3) %9 +1 ; 
    }
    
    for(i=0;i<9; ++i) 
    {
        for(j=0; j<9; ++j)
            printf("%d ", solution[i][j]);
        printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n");  
    //toucher le code entre les commentaires 
    
    printf("%d \n",rand() % 2);
    printf("%d \n",rand() % 9 + 1);    
    
    ft_generer();
    ft_saisir(solution);



    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}
