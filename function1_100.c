#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int func1(int x){
    int count = 0;
    for (int i = x-1; i > 0; i--){
        if (i%3 == 0 || i%5 == 0){
            count = count + i;
        }
    }
    return count;
}


long int func2(int x){
    int a = 1, b = 2;
    int t;
    int c = 0;
    while (a <= x){
        t = a;
        a = b;
        b += t;
        if (t%2 == 0){
            c = c + t;
        }
    }
    return c;
}

int func3(long long int x){
    long long int tempo = x;
    int i = 2;
    int fac;
    while (tempo > 1){
        if (tempo%i == 0){
            tempo = tempo/i;
            fac = i;
        }
        else{
            i = i+1;
        }
    }
    return fac;
}

int func4(void){
    int pal, maxpal, rem;
    int temp = 0;
    long int reverse = 0;
    for (int i = 999; i >= 100; i--){
        for (int j = 999; j >= 100; j--){
            pal = i * j;
            temp = pal;
            while (temp != 0) {
                rem = temp%10;
                reverse = reverse*10+rem;
                temp/=10;
            }
            if (pal == reverse){
                if (maxpal < pal){
                    maxpal = pal;
                }
            }
            reverse = 0;
        }
    }
    return maxpal;
}

long int func5(int x){
    bool flag = false;
    int j = x;
    while (!flag){ // boucle infini jusqu'à trouver le nombre
        j++;
        for (int i = 1; i <= x; i++){
            if (j%i != 0){
                break;
            }
            if (i == x){
                return j;
            }
        }
    }
    return 0;
}

int func6(int x) {
    int sumofsquares = 0;
    int squareofthesum = 0;
    for (int i = 1; i <= x; i++){
        sumofsquares = sumofsquares + (i*i);
        squareofthesum = squareofthesum + i;
    }
    squareofthesum = squareofthesum * squareofthesum;
    return squareofthesum - sumofsquares;
}

long int func7(int x){
    int count = 1;      // Nombre de nb premier
    int temp = 3;       // On commence à 3
    bool flag = false;
    while (!flag){
        for (int i = 2; i < temp; i++){
            if (temp%i==0){
               break;
            }
            if (i == temp-1){
                count ++;
            }
            if (count == x){
                return temp;
            }
        }
        temp ++;
    }
    return 0;
}



int main(void){
    //printf("La somme des multiples de 3 et 5 jusqu'à 1000 = %d\n", func1(1000));
    //printf("Jusqu'a %d le evenFib = %ld\n", 4000000, func2(4000000));
    //printf("Le plus grand facteur commun de %ld = %d\n", 600851475143 , func3(600851475143 ));
    //printf("Le plus grand palindrome entre le produit de 2 nb a 3 chiffres = %d\n", func4());
    //printf("La difference entre la somme des carrés et le carré de la somme des nb entre 1 et %d = %d \n", 100, func6(100));
    //printf("Le plus petit nombre positif divisible par tous les nombres de 1 à %d = %d\n", 20, func5(20));
    //printf("Le %dème chiffre premier = %ld\n", 10, func7(10));
    return EXIT_SUCCESS;
}
