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



int ft_presentation()
{
    printf("\n");
    printf("          .:~!7777!~^:.          :~~~.              .~~~:     .^~~~~~~~~~~~~^^:.                   .:~!77777~^:.            :~~~.             :~~~~:   .^~~^               ^~~~.\n");
    printf("       .!5GBBBBBBBBBBBPJ^        ?#BB^              ~BB#7     .GBBBBBBBBBBBBBBBG5?^             :75GBBBBBBBBBBBPY!.         JBBB^           ^YBBBP!.   .GBBP.              5BBG.\n");
    printf("      ^PBBG?~::...:^!5BBBY.      ?BBB^              ~BBB7     .GBBG^^^^^^^^^~!JPBBB5^         :YBBBGJ!^:...:^7YGBBG?.       ?BBB^         ^YBBBY^      .GBB5.              5BBG.\n");
    printf("     .GBB5.           ~BB#5.     ?BBB^              ~BBB7     .GBBP.           .~PBBB7       7BBB5~.           .7GBBG^      ?BBB^      .~5BBGJ:        .GBB5.              5BBG.\n");
    printf("     :BBBJ             !J??.     ?BBB^              ~BBB7     .GBBP.             .5BBB~     7BBBJ.               :PBBB^     ?BBB^    .~5BBG?:          .GBB5.              5BBG.\n");
    printf("      JBBBY~:..                  ?BBB^              ~BBB7     .GBBP.              :GBBP.   :BBBP.                 :GBBP.    ?BBB^  .!PBBP7.            .GBB5.              5BBG.\n");
    printf("       ~5BB#BGP5J7!^:..          ?BBB^              ~BBB7     .GBBP.               5BBB:   7BBB7                   YBBB^    ?BBB^.7GBBBB~              .GBB5.              5BBG.\n");
    printf("         :~?YPGBBB#BBGPJ~.       ?BBB^              ~BBB7     .GBBP.               YBBB^   JBBB~                   ?BBB!    ?BBBYGBB55BBB?.            .GBB5.              5BBG.\n");
    printf("              ..:^!?YPBBBG?.     ?BBB^              ~BBB7     .GBBP.               5BBB:   ?BBB!                   JBBB~    ?BBBBBY^  !GBBP~           .GBB5               5BBG.\n");
    printf("    .::^.            .:?BBBJ     7BBB~              !BBB!     .GBBP.              :GBBP.   ^BBB5                  .GBBG.    ?BBBY:     :5BBBY.         .GBBP.             .PBBG.\n");            
    printf("    :BBBJ               YBBG.    ~BBBJ              YBBB^     .GBBP.             .YBBB~     ?BBB?                .5BBB~     ?BBB^        !GBBG!         5BBB:             :BBB5 \n");            
    printf("     JBBB?.            ^GBB5     .PBBB!            7BBB5      .GBBP.            :5BBB7       ?BBBY:            .~PBBB!      ?BBB^         :5BBB5:       ~BBB5.           .5BBB~ \n");            
    printf("     .7GBBGJ~:......:~JBBB5.      :PBBB57^:....:^75BBB5.      .GBBP:.....:::^~75BBBP~         ^5BBB57^:.....:~?PBBBY:       ?BBB^          .7GBBG7.      !BBBGJ~:.....:~?GBBG!  \n");            
    printf("       :?PBB#BBGGGGBB#BGY~         .!5GB#BBBGGBBB#BGY~        .GBBBBBBBBBBBBBBBBPJ~.           .^?PBBBBGGGGGBBBB5?:         J#BB^            :5BB#P^      :?PBB#BBGGBBB#BBP?:   \n");            
    printf("         .:^!7JJYYJJ7~:.              .^!7JJYYJJ7!^.          .!777777777777!~^:.                 .:^!?JYYJJ7!^.            ^777:             .!7777.       .:~7?JJYJJ?7~:.     \n");            

    printf("\n");

    return 0;
}













/*
Pour l'exercice vous aurez besoin de generer des entiers aléatoire : rand() renvoit un entier aléatoire.
il s'utilise : rand() % NOMBREMAX + 1, ça oui je veut bien
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2.mais ça pour quoi faire ??
voir dans la methode main. yes
*/






// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls. ???

int ft_generer_cases_vide(grille){
    
    int nb, difficulte = 3;
    int i, j;
    
    for(nb = 0; nb <difficulte; nb++){
        i = rand() % 9 + 1;
        j = rand() % 9 + 1;
        grille[i][j] = 0;
    }
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

int ft_verif_bonne_saisi(i,j,v,grille){
    if (i<=9){
        if (j<=9){
            if (v<=9){
                return 1;
                
            }else{
                printf("! Vous avez choisi une mauvaise colonne 〔・╭╮・〕\n");
                if (1 == ft_retry())
                    ft_saisir(grille);
            }
        }else{
            printf("! Vous avez choisi une mauvaise ligne 〔・╭╮・〕\n");
            if (1 == ft_retry())
                ft_saisir(grille);
        }
    }else{
        printf("! Vous avez choisi une mauvaise valeur 〔・╭╮・〕\n");
        if (1 == ft_retry())
            ft_saisir(grille);
    }
    return 0;
}

int ft_verif_busy(i,j,v){
    
}


int ft_saisir(grille){
    
    int i=0, j=0, v=40; //restart=1;
    
    printf("Saisissez la position dans le tableau, \n");
    printf("*\n");
    printf("\t(Voici un exemple de comment faire:6 8 5 (ligne, colonne, valeur)) \n");
    printf("*\n");
    printf("Allez-y :");
    scanf("%d %d %d", &j, &i, &v);
        
    if (ft_verif_bonne_saisi(i,j,v,grille) == 1){
        printf("Vous avez choisi la case %d-%d, et la valeur %d", j, i, v);
        // if (ft_verif_busy(i,j,v) == 1)
            //grille[i][j] = v;
    }
    
    
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

void ft_afficher_grille(grille, solution){
    
    int wantGrilleOrSolution, i, j;
    printf("\n Afficher la grille = 2 | Afficher la solution = 1 | Ne pas afficher = 0 : \n");
    scanf("%d", &wantGrilleOrSolution);
    
    if (wantGrilleOrSolution == 2){
        printf("GRILLE");  
        printf("\n");  
        printf("---------------------------------");  
        printf("\n");  
        
        for(i=0;i<9; ++i) 
        {
            for(j=0; j<9; ++j)
                printf("%d ", grille[i][j]);
            printf("\n");  
        }
        printf("---------------------------------");  
        printf("\n");  
    }
    if (wantGrilleOrSolution == 1){
        printf("SOLUTION");  
        printf("\n");  
        printf("---------------------------------");  
        printf("\n");  
        
        for(i=0;i<9; ++i) 
        {
            for(j=0; j<9; ++j)
                printf("%d ", solution[i][j]);
            printf("\n");  
        }
        printf("---------------------------------");  
        printf("\n");  
    }
}



int main(){
    
    ft_presentation();
    // Ne pas toucher le code entre les commentaires
    // srand( time( NULL ) );


    int i, j, k;
    int solution[9][9];
    int grille[9][9];
    // printf("SOLUTION");  
    // printf("\n");  
    // printf("---------------------------------");  
    // printf("\n");  
    for(j=0;j<9; ++j) 
    {
        for(i=0; i<9; ++i)
            solution[j][i] = (i + j*3 +j /3) %9 +1 ; 
    }
    
    // for(i=0;i<9; ++i) 
    // {
    //     for(j=0; j<9; ++j)
    //         printf("%d ", solution[i][j]);
    //     printf("\n");  
    // }
    // printf("---------------------------------");  
    // printf("\n");  
    //toucher le code entre les commentaires 
    
    printf("%d \n",rand() % 2);
    printf("%d \n",rand() % 9 + 1);    
    
    grille = ft_generer_cases_vide(solution);
    
    ft_afficher_grille(grille, solution);
    ft_saisir(grille);



    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}
