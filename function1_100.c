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
    long int result = 5; // On part du principe que 2 et 3 sont déjà des nb premiers
    int sr;
    for (int i = 3; i < x; i = i + 2){
        sr = (int) sqrt(i) + 1;
        for (int y = 3; y <= sr; y++){
            if (i%y == 0){
                break;
            }
            if (y == (sr)){
                result += i;
            }
        }
    }
    return result;
}



long int func11(int x){
    char tab1[] = "08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08 " \
                "49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00 "\
                "81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65 "\
                "52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91 "\
                "22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80 "\
                "24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50 "\
                "32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70 "\
                "67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21 "\
                "24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72 "\
                "21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95 "\
                "78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92 "\
                "16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57 "\
                "86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58 "\
                "19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40 "\
                "04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66 "\
                "88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69 "\
                "04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36 "\
                "20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16 "\
                "20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54 "\
                "01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48 ";
    int *tab2 = malloc (2048 * sizeof (int));
    int i = 0; // Rang du tableau de int
    int j = 0; // Rang des dizaines du tableau de char
    int y = 1; // Rang des unités du tableau de char
    while (j != 1200){
        tab2[i] = (10 * (tab1[j] - '0')) + (tab1[y] - '0');
        j += 3;
        y += 3;
        i++;
    }
    long int max = 0;
    long int result = 1;
    for (i = 0; i < 20; i++){
        for (y = 0; y < 20; y++){
            if (y <= 20 - x){
                for (int RIGHT = 0; RIGHT < x; RIGHT++){
                    //printf("%d * %ld = ", tab2[(i*20) + RIGHT + y], result);
                    result = result * tab2[(i*20) + RIGHT + y];
                    //printf("%ld\n ", result);
                }
                if (result > max){
                    max = result;
                }
                result = 1;
            }
            if (i <= 20 - x){
                for (int DOWN = 0; DOWN < x; DOWN++){
                    //printf("%d * %ld = ", tab2[(i*20) + (DOWN*20) + y], result);
                    result = result * tab2[(i*20) + (DOWN*20) + y];
                    //printf("%ld\n ", result);
                }
                if (result > max){
                    max = result;
                }
                result = 1;
            }
            if (i <= 20 - x && y <= 20 - x){
                for (int DIAGO = 0; DIAGO < x; DIAGO++){
                    //printf("%d * %ld = ", tab2[(i*20) + (DIAGO*20) + DIAGO + y], result);
                    result = result * tab2[(i*20) + (DIAGO*20) + DIAGO + y];
                    //printf("%ld\n ", result);
                }
                if (result > max){
                    max = result;
                }
                result = 1;
            }
            if (i <= 20-x && y >= x-1){
                for (int DIAGO = 0; DIAGO < x; DIAGO++){
                    //printf("%d * %ld = ", tab2[((i*20) + (DIAGO*20) + y) - DIAGO], result);
                    result = result * tab2[((i*20) + (DIAGO*20) + y) - DIAGO];
                    //printf("%ld\n ", result);
                }
                if (result > max){
                    max = result;
                }
                result = 1;
            }
        }
    }
    free(tab2);
    return max;
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
    //printf("%ld\n", func10(2000000));
    printf("%ld\n", func11(4));

    return EXIT_SUCCESS;
}
