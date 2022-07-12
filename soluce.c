#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>

/* FONCTION AUXILIAIRE */

long long int factoriel (int x){
    long int temp = 1;
    for (int i = 1; i <= x; i++){
        temp = temp * i;
    }
    return temp;
}

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

long int func12(long int x){
    int count = 0; // Nb diviseurs
    long int triNum = 1; // Nb triangulaires
    int sum = 0; // Permet d'incrémenter les nb triangulaires
    while (count != x+1){
        if (triNum%2 == 0){ // Check que les pairs
            for (int y = 1; y <= (int)sqrt(triNum); y++){
                if (triNum%y == 0){
                    count += 2;
                }
            }
        }
        if (count >= x){
            return triNum;
        }
        count = 0;
        sum++;
        triNum = (sum*(sum+1))/2; // Incrementation des nb triangulaire
    }
    return 0;
}

void func13 (int x){ // Parametre correpondant au nb de chiffre de la somme à afficher en resultat
    char *numbers = "37107287533902102798797998220837590246510135740250"
                    "46376937677490009712648124896970078050417018260538"
                    "74324986199524741059474233309513058123726617309629"
                    "91942213363574161572522430563301811072406154908250"
                    "23067588207539346171171980310421047513778063246676"
                    "89261670696623633820136378418383684178734361726757"
                    "28112879812849979408065481931592621691275889832738"
                    "44274228917432520321923589422876796487670272189318"
                    "47451445736001306439091167216856844588711603153276"
                    "70386486105843025439939619828917593665686757934951"
                    "62176457141856560629502157223196586755079324193331"
                    "64906352462741904929101432445813822663347944758178"
                    "92575867718337217661963751590579239728245598838407"
                    "58203565325359399008402633568948830189458628227828"
                    "80181199384826282014278194139940567587151170094390"
                    "35398664372827112653829987240784473053190104293586"
                    "86515506006295864861532075273371959191420517255829"
                    "71693888707715466499115593487603532921714970056938"
                    "54370070576826684624621495650076471787294438377604"
                    "53282654108756828443191190634694037855217779295145"
                    "36123272525000296071075082563815656710885258350721"
                    "45876576172410976447339110607218265236877223636045"
                    "17423706905851860660448207621209813287860733969412"
                    "81142660418086830619328460811191061556940512689692"
                    "51934325451728388641918047049293215058642563049483"
                    "62467221648435076201727918039944693004732956340691"
                    "15732444386908125794514089057706229429197107928209"
                    "55037687525678773091862540744969844508330393682126"
                    "18336384825330154686196124348767681297534375946515"
                    "80386287592878490201521685554828717201219257766954"
                    "78182833757993103614740356856449095527097864797581"
                    "16726320100436897842553539920931837441497806860984"
                    "48403098129077791799088218795327364475675590848030"
                    "87086987551392711854517078544161852424320693150332"
                    "59959406895756536782107074926966537676326235447210"
                    "69793950679652694742597709739166693763042633987085"
                    "41052684708299085211399427365734116182760315001271"
                    "65378607361501080857009149939512557028198746004375"
                    "35829035317434717326932123578154982629742552737307"
                    "94953759765105305946966067683156574377167401875275"
                    "88902802571733229619176668713819931811048770190271"
                    "25267680276078003013678680992525463401061632866526"
                    "36270218540497705585629946580636237993140746255962"
                    "24074486908231174977792365466257246923322810917141"
                    "91430288197103288597806669760892938638285025333403"
                    "34413065578016127815921815005561868836468420090470"
                    "23053081172816430487623791969842487255036638784583"
                    "11487696932154902810424020138335124462181441773470"
                    "63783299490636259666498587618221225225512486764533"
                    "67720186971698544312419572409913959008952310058822"
                    "95548255300263520781532296796249481641953868218774"
                    "76085327132285723110424803456124867697064507995236"
                    "37774242535411291684276865538926205024910326572967"
                    "23701913275725675285653248258265463092207058596522"
                    "29798860272258331913126375147341994889534765745501"
                    "18495701454879288984856827726077713721403798879715"
                    "38298203783031473527721580348144513491373226651381"
                    "34829543829199918180278916522431027392251122869539"
                    "40957953066405232632538044100059654939159879593635"
                    "29746152185502371307642255121183693803580388584903"
                    "41698116222072977186158236678424689157993532961922"
                    "62467957194401269043877107275048102390895523597457"
                    "23189706772547915061505504953922979530901129967519"
                    "86188088225875314529584099251203829009407770775672"
                    "11306739708304724483816533873502340845647058077308"
                    "82959174767140363198008187129011875491310547126581"
                    "97623331044818386269515456334926366572897563400500"
                    "42846280183517070527831839425882145521227251250327"
                    "55121603546981200581762165212827652751691296897789"
                    "32238195734329339946437501907836945765883352399886"
                    "75506164965184775180738168837861091527357929701337"
                    "62177842752192623401942399639168044983993173312731"
                    "32924185707147349566916674687634660915035914677504"
                    "99518671430235219628894890102423325116913619626622"
                    "73267460800591547471830798392868535206946944540724"
                    "76841822524674417161514036427982273348055556214818"
                    "97142617910342598647204516893989422179826088076852"
                    "87783646182799346313767754307809363333018982642090"
                    "10848802521674670883215120185883543223812876952786"
                    "71329612474782464538636993009049310363619763878039"
                    "62184073572399794223406235393808339651327408011116"
                    "66627891981488087797941876876144230030984490851411"
                    "60661826293682836764744779239180335110989069790714"
                    "85786944089552990653640447425576083659976645795096"
                    "66024396409905389607120198219976047599490197230297"
                    "64913982680032973156037120041377903785566085089252"
                    "16730939319872750275468906903707539413042652315011"
                    "94809377245048795150954100921645863754710598436791"
                    "78639167021187492431995700641917969777599028300699"
                    "15368713711936614952811305876380278410754449733078"
                    "40789923115535562561142322423255033685442488917353"
                    "44889911501440648020369068063960672322193204149535"
                    "41503128880339536053299340368006977710650566631954"
                    "81234880673210146739058568557934581403627822703280"
                    "82616570773948327592232845941706525094512325230608"
                    "22918802058777319719839450180888072429661980811197"
                    "77158542502016545090413245809786882778948721859617"
                    "72107838435069186155435662884062257473692284509516"
                    "20849603980134001723930671666823555245252804609722"
                    "53503534226472524250874054075591789781264330331690";
    int *tab = malloc(5000 * sizeof(int)); // Allocation mémoire pour 5000 int car il y a 100 lignes de 50 chiffres
    for (int i = 0; i < 5000; i++){ // Convertion du tableau de char en tableau de int
        tab[i] = (numbers[i] - '0');
        if (i%50 == 0){
        }
    }
    int retenue = 0;
    long int result = 0;
    char finalresult[10];
    bool flag = false;
    while(!flag){
        for (int y = 49; y >= 0; y--){
            for (int i = 0; i < 100; i++){
                result = result + tab[i*50 + y]; // Somme de tous les éléments par colonne
            }
            result = result + retenue;
            retenue = (int)result/10;
            if (y <= 7){  // Afficher les 8 premiers chiffres des 10 premiers de la somme entière
                finalresult[y + 2] = (result%10 + '0'); 
            }
            if (y == 0){ // Ajouter la retenu a finalresult
                for (int i = 1; i >= 0; i-- ){
                    finalresult[i] = (retenue%10 + '0');
                    retenue = retenue/10;
                }
            }
            result = 0;
            if (y == 0){ // Arret de la boucle
                flag = true;
            }
        }
    }
    printf("%s", finalresult);
    free(tab);
    printf("\n");
}

int func14 (int x){
    int count = 0;
    int max = 0;
    long int temp;
    int tab[30];
    int incr = 0;
    bool find = false;
    for (int i = 1; i < x; i++){
        temp = i;
        while (temp != 1){ 
            find = false;
            for (int y = 0; y < sizeof(tab)/sizeof(tab[0]); y += 2){
                if (temp == tab[y]){
                    count = count + tab[y+1];
                    find = true;
                    break;
                }
            }
            if (find){
                break;
            }
            if (temp % 2 == 0){
                count++;
                temp = temp/2;
            }
            else {
                temp = temp*3 + 1;
                count++;
            }
            printf("( %ld )", temp);
            if (temp == 1){
                tab[incr] = i;
                tab[incr + 1] = count;
                incr += 2;
            }
        }
        if (count > max){
            max = count;
        }
        count = 0;
    }
    for (int i = 0; i < 30; i++){
        printf("%d \n", tab[i]);
    }
}

long long int func15(int x){
    unsigned long long tab[x+1][x+1];
    tab[0][0] = 1;
    for (int i = 0; i <= x; i++){
        for(int j = 0; j <= x; j++){
            tab[i][j] = 1;
        }
    }
    for (int i = 1; i <= x; i++){
        for(int j = 1; j <= x; j++){
            tab[i][j] = tab[i-1][j] + tab[i][j-1];
        }
    }
    return tab[x][x];
}



int main(int argc, char *argv){
    //printf("1 - La somme des multiples de 3 et 5 jusqu'à 1000 = %d\n", func1(1000));
    //printf("2 - Jusqu'a %d le evenFib = %ld\n", 4000000, func2(4000000));
    //printf("3 - Le plus grand facteur commun de %ld = %d\n", 600851475143 , func3(600851475143 ));
    //printf("4 - Le plus grand palindrome entre le produit de 2 nb a 3 chiffres = %d\n", func4());
    //printf("5 - La difference entre la somme des carrés et le carré de la somme des nb entre 1 et %d = %d \n", 100, func6(100));
    //printf("6 - Le plus petit nombre positif divisible par tous les nombres de 1 à %d = %d\n", 20, func5(20));
    //printf("7 - Le %dème chiffre premier = %ld\n", 500, func7(500));
    //printf("8 - Les %d chiffres adjacents du nombre à 1000 chiffres qui ont le plus grand produit = %ld\n", 4,  func8(13));
    //printf("9 - Le produit du triplet de pythagore dont leur somme vaut %d = %ld\n", 1000, func9(1199));
    //printf("10 - La somme de tous les nombres premier jusqu'à %d = %ld\n", 2000000, func10(2000000));
    //printf("11 - Les %d chiffres adjacent possèdant le plus grand produits dans la grille = %ld\n", func11(4));
    //printf("12 - Le premier chiffre triangulaire possèdant %d diviseurs = %ld\n", 500, func12(500));
    //printf("13 - Les 10 premiers chiffres de la somme totales de tous les nombres à 50 chiffres = %d\n",func13(10));
    //printf("%d\n", func14(13));
    //printf("%llu\n", func15(20));
    return EXIT_SUCCESS;
}
