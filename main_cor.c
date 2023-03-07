#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
il s'utilise : rand() % NOMBREMAX + 1 
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2
voir dans la methode main.
*/

int verifyContinue(int tab[9][9]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(tab[i][j]){

            }else{
                return 1;
            }
        }
    }
    return 0;
}



void copyArray(int tab[9][9], int copy[9][9] ){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            copy[i][j] = tab[i][j];
        }
    }
}


void afficher(int tab[9][9]){
    // printf("|X,Y");
    printf("| Y\\X  ");

    for(int i = 0; i < 9; i++){
        printf("| %d ", i);
    }
        printf("|\n");

    for(int i = 0; i < 10; i++){
        printf("----");
    }




    for(int i = 0; i < 9; i++){
        printf("\n");
        printf("| %d >  ", i);
        for(int j = 0; j < 9; j++){
            printf("| %d ", tab[i][j]);
        }
        printf("|\n");
    }
        printf("\n");

}

/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/
int verifierLigneColonne(int tab[9][9], int ligne, int ligneOrCol ){

    int choices[9] = {0,0,0, 0,0,0, 0,0,0};
    int result = 0;
    if(ligneOrCol){
        for(int i = 0; i < 9; i++){
            int numero = tab[i][ligne];
            if(tab[i][ligne] > 0){
                int numero = tab[i][ligne];
                // printf( "\n\n NUM %d", numero -1 );
                choices[numero - 1] = choices[numero- 1] + 1 ;
            }
        }
    } else {
        for(int i = 0; i < 9; i++){
            if(tab[ligne][i]){
                int numero = tab[ligne][i];
                choices[numero - 1] = choices[numero- 1] + 1 ;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        if(choices[i] > 1){
            result = 1; 
        } 
    }
return result;
}
/*
Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
et qui renvoie 1 si la région est correctement remplie, 0 sinon.
*/
int verifierRegion(int grille[9][9],int i ,int k){

    int i, k;
    int array[9];
    int n = 0;

    for(i=0; i<3; i++){
        for(i=0; i<3;i++){
            array[n] = grille[i + k][k + i];
            n++;
        }
    }

    int somme = 0;
    for(i=0; i<9;i++){
        somme += array[i];
    }

    if (somme == 45){
        return 1;

    }else {
        return 0;
    }
}

int ft_verif_region(int grille[9][9], int k, int l){
    
}

// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls
void generate(int tab[9][9], int copyTableau[9][9]){
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            // if(!(rand() % 2)){
            if((rand() % 100) < 97){
                copyTableau[i][j] = tab[i][j];
            }
        }
    }

}
// Ce lien vous sera utile : https://www.geeksforgeeks.org/pass-2d-array-parameter-c/
//Écrire la fonction verifierGrille() qui renvoie 1 si la grille est correctement remplie et 0 sinon
int verifierGrille(int tab[9][9]){

    int isCorrect =1;
    for(int i = 0; i < 9; i++ ){
    int verifLigne = verifierLigneColonne(tab, i, 1);
    int verifCol = verifierLigneColonne(tab, i, 0);
    if(verifCol || verifLigne){
        printf("\n\nAhrf, il semblerait que votre solution ne corresponde pas aux regles, reessayez !\n\n");
        isCorrect = 0;
    }
    }
    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        if(verifierRegion(tab, i, j ) == 0){
            isCorrect = 0;
        }
    }
    }



    return isCorrect;
}

/*Écrire une fonction saisir() qui demande à l’utilisateur de saisir au clavier les indices i et j et la valeur v à placer à l’emplacement (i,j).
La fonction doit vérifier la validité des indices et de la valeur.
Si la case n’est pas occupée, la valeur doit être placée dans la grille. remplissage est alors incrémentée*/
int saisir(int tab[9][9]){

    int result = 0;

    while (result == 0)
    {
        int tableauTest[9][9] = {
            {0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0},

            {0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0},
            
            {0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0}
        };
        copyArray(tab, tableauTest);
        int saisie = 0;
        // int saisieX = 0;
        // int saisieY = 0;

        printf("Veuillez saisir un Y\n");
        scanf("%d", &saisie);
        int saisieX = saisie;
        printf("Veuillez saisir un X\n");
        scanf("%d", &saisie);
        int saisieY = saisie;

        if(tab[saisieX][saisieY]){
            printf("Cette case est deja remplie Reessayez\n");
        } else {
            printf("Quelle valeur souhaitez vous inserer ?\n");
            scanf("%d", &saisie);
            int saisieVal = saisie;
            tableauTest[saisieX][saisieY] = saisieVal;
        
            result = verifierGrille(tableauTest);
            if(result == 1 ){
                tab[saisieX][saisieY] = saisieVal;
            }
        }
    }
    return result;
} 







//Écrire le programme principal, en supposant que la seule condition d’arrêt est la réussite du sudoku (ce test ne devra être fait que si nécessaire)


int main(){
    // Ne pas toucher le code entre les commentaires
    srand( time( NULL ) );


    int i, j, k;
    int solution[9][9];
    ft_presentation();
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
    int tableauJoueur[9][9] = {
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},

        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0}
    };

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            printf("%d ", tableauJoueur[i][j]);
        }
        printf("\n");
    }
    int isTurning = 0;
    generate(solution, tableauJoueur);
    do{
        afficher(tableauJoueur);
        saisir(tableauJoueur);
        isTurning = verifyContinue(tableauJoueur);
    } while(isTurning);
    printf("Bravo, vous avez reussi l'epreuve du sudoku");
    // while (verifierGrille(tableauJoueur) != 0)
    // {
        
    // }
    

    // printf("%d",rand() % 2);
    
  
    


    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}
