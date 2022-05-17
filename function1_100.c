#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>

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

long int func8(int x){
char *number = "73167176531330624919225119674426574742355349194934" \
		"96983520312774506326239578318016984801869478851843" \
		"85861560789112949495459501737958331952853208805511" \
		"12540698747158523863050715693290963295227443043557" \
		"66896648950445244523161731856403098711121722383113" \
		"62229893423380308135336276614282806444486645238749" \
		"30358907296290491560440772390713810515859307960866" \
		"70172427121883998797908792274921901699720888093776" \
		"65727333001053367881220235421809751254540594752243" \
		"52584907711670556013604839586446706324415722155397" \
		"53697817977846174064955149290862569321978468622482" \
		"83972241375657056057490261407972968652414535100474" \
		"82166370484403199890008895243450658541227588666881" \
		"16427171479924442928230863465674813919123162824586" \
		"17866458359124566529476545682848912883142607690042" \
		"24219022671055626321111109370544217506941658960408" \
		"07198403850962455444362981230987879927244284909188" \
		"84580156166097919133875499200524063689912560717606" \
		"05886116467109405077541002256983155200055935729725" \
		"71636269561882670428252483600823257530420752963450";    
    int length = strlen(number);
    long int maxresult = 0;
    long int result = 1;
    for (int i = 0; i < length - x; i++){
        for (int y = 0; y < x; y++){
            result = result *(number[y + i] - '0');
        }
        if (maxresult < result){
            maxresult = result;
        }
        result = 1;
    }
    return maxresult;
}

long int func9(int x){
    int a, b, truncate;
    double c;
    for (a = 1; a < x; a++){
        for (b = 1; b < x; b++){
            c = (b*b) + (a*a);
            c = sqrt(c);
            truncate = (int)c;
            if (truncate == c){
                if (a+b+c == x){
                    printf("a = %d, b = %d, c = %d\n", a, b, truncate);
                    return a*b*c;
                }
            }
        }
    }
    printf("Aucune solution trouvée ... \n");
    return 0;
}

long int func10(long int x){
    int result = 0;
    int temp = 1;
    bool flag = false;
    while (!flag){
        for (int i = 0; i < x; i++){
            if (temp%i == 0){
                break;
            }
            if (i == temp - 1){
                result = result + temp;
            }
        }
        temp ++;
    }
    return result;
}

int main(void){
    //printf("La somme des multiples de 3 et 5 jusqu'à 1000 = %d\n", func1(1000));
    //printf("Jusqu'a %d le evenFib = %ld\n", 4000000, func2(4000000));
    //printf("Le plus grand facteur commun de %ld = %d\n", 600851475143 , func3(600851475143 ));
    //printf("Le plus grand palindrome entre le produit de 2 nb a 3 chiffres = %d\n", func4());
    //printf("La difference entre la somme des carrés et le carré de la somme des nb entre 1 et %d = %d \n", 100, func6(100));
    //printf("Le plus petit nombre positif divisible par tous les nombres de 1 à %d = %d\n", 20, func5(20));
    //printf("Le %dème chiffre premier = %ld\n", 500, func7(500));
    //printf("Les %d chiffres adjacents du nombre à 1000 chiffres qui ont le plus grand produit = %ld\n", 4,  func8(13));
    //printf("%ld\n", func9(1000));
    printf("%ld", func10(10));

    return EXIT_SUCCESS;
}
