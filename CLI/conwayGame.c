/*conway game of life sim*/

#include <stdio.h>
#include <stdbool.h>    // for the states
#include <stdlib.h>     // for rng and system("cls")
#include <windows.h>    // for sleep
#include <time.h>       // for seed

#define SIZE 25
#define LIVE '*'
#define DEAD ' '
#define DELAY 100
#define GENERATION_MAX 100

int countNeighbours(bool table[SIZE][SIZE], int x, int y);
void display(bool table[SIZE][SIZE], int generation);
void displaySTUPID(bool table[SIZE][SIZE], int generation);
void randomize(bool table[SIZE][SIZE]);

int main(void)
{
    bool table[SIZE][SIZE] = {false};
    bool temp_table[SIZE][SIZE] = {false};
    int generation = 0,
        neighbours;


    srand(time(NULL));

    randomize(table);

    for(generation; generation < GENERATION_MAX; generation++){
        displaySTUPID(table, generation);


        Sleep(DELAY);

        for (int y = 0; y < SIZE; y++){
            for(int x = 0; x < SIZE; x++){
                neighbours = countNeighbours(table, x, y);

                if (table[y][x]){ // if its live/true
                    if (neighbours < 2 || neighbours > 3) // under or over crowded
                        temp_table[y][x] = false;
                    else
                        temp_table[y][x] = true;

                }else{ // if its dead/false
                    if (neighbours == 3) 
                        temp_table[y][x] = true;
                    else
                        temp_table[y][x] = false;
                }
            }
        }

        // finalizing the generation
        for (int y = 0; y < SIZE; y++)
            for(int x = 0; x < SIZE; x++)
                table[y][x] = temp_table[y][x];


    }
    
    return 0;
}

int countNeighbours(bool table[SIZE][SIZE], int x, int y)
{
    int neighbours = 0;

    for (int j = y-1; j <= y+1; j++)
        if (j >= 0 && j < SIZE)
            for (int i = x-1; i <= x+1; i++)
                if ((i >= 0 && i < SIZE) && table[j][i] && (i != x || j != y))
                    neighbours++;
    
    return neighbours;
}

void display(bool table[SIZE][SIZE], int generation)
{
    system("cls");
    printf("Generation %d:\n", generation);
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++)
            printf("[%c]", table[y][x] ? LIVE : DEAD);
        printf("\n");
    }
    fflush(stdout); // Flush the output buffer to ensure immediate display
    Sleep(DELAY);
    printf("\r"); // Move the cursor back to the beginning of the line
}

void displaySTUPID(bool table[SIZE][SIZE], int generation){ // dont judge
    system("cls");
    printf("Generation %d:\n", generation);
    for (int y = 0; y < SIZE; y++) {
        printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]", 
            table[y][0] ? LIVE : DEAD,
            table[y][1] ? LIVE : DEAD, table[y][2] ? LIVE : DEAD, table[y][3] ? LIVE : DEAD, table[y][4] ? LIVE : DEAD, table[y][5] ? LIVE : DEAD, table[y][6] ? LIVE : DEAD, table[y][7] ? LIVE : DEAD, table[y][8] ? LIVE : DEAD, table[y][9] ? LIVE : DEAD, table[y][10] ? LIVE : DEAD, table[y][11] ? LIVE : DEAD, table[y][12] ? LIVE : DEAD, table[y][13] ? LIVE : DEAD, table[y][14] ? LIVE : DEAD, table[y][15] ? LIVE : DEAD, table[y][16] ? LIVE : DEAD, table[y][17] ? LIVE : DEAD, table[y][18] ? LIVE : DEAD, table[y][19] ? LIVE : DEAD, table[y][20] ? LIVE : DEAD, table[y][21] ? LIVE : DEAD, table[y][22] ? LIVE : DEAD, table[y][23] ? LIVE : DEAD, table[y][24] ? LIVE : DEAD, table[y][25] ? LIVE : DEAD, table[y][26] ? LIVE : DEAD, table[y][27] ? LIVE : DEAD, table[y][28] ? LIVE : DEAD, table[y][29] ? LIVE : DEAD, table[y][30] ? LIVE : DEAD, table[y][31] ? LIVE : DEAD, table[y][32] ? LIVE : DEAD, table[y][33] ? LIVE : DEAD, table[y][34] ? LIVE : DEAD, table[y][35] ? LIVE : DEAD, table[y][36] ? LIVE : DEAD, table[y][37] ? LIVE : DEAD, table[y][38] ? LIVE : DEAD, table[y][39] ? LIVE : DEAD, table[y][40] ? LIVE : DEAD, table[y][41] ? LIVE : DEAD, table[y][42] ? LIVE : DEAD, table[y][43] ? LIVE : DEAD, table[y][44] ? LIVE : DEAD, table[y][45] ? LIVE : DEAD, table[y][46] ? LIVE : DEAD, table[y][47] ? LIVE : DEAD, table[y][48] ? LIVE : DEAD, table[y][49] ? LIVE : DEAD, table[y][50] ? LIVE : DEAD, table[y][51] ? LIVE : DEAD, table[y][52] ? LIVE : DEAD, table[y][53] ? LIVE : DEAD, table[y][54] ? LIVE : DEAD, table[y][55] ? LIVE : DEAD, table[y][56] ? LIVE : DEAD, table[y][57] ? LIVE : DEAD, table[y][58] ? LIVE : DEAD, table[y][59] ? LIVE : DEAD, table[y][60] ? LIVE : DEAD, table[y][61] ? LIVE : DEAD, table[y][62] ? LIVE : DEAD, table[y][63] ? LIVE : DEAD, table[y][64] ? LIVE : DEAD, table[y][65] ? LIVE : DEAD, table[y][66] ? LIVE : DEAD, table[y][67] ? LIVE : DEAD, table[y][68] ? LIVE : DEAD, table[y][69] ? LIVE : DEAD, table[y][70] ? LIVE : DEAD, table[y][71] ? LIVE : DEAD, table[y][72] ? LIVE : DEAD, table[y][73] ? LIVE : DEAD, table[y][74] ? LIVE : DEAD, table[y][75] ? LIVE : DEAD, table[y][76] ? LIVE : DEAD, table[y][77] ? LIVE : DEAD, table[y][78] ? LIVE : DEAD, table[y][79] ? LIVE : DEAD, table[y][80] ? LIVE : DEAD, table[y][81] ? LIVE : DEAD, table[y][82] ? LIVE : DEAD, table[y][83] ? LIVE : DEAD, table[y][84] ? LIVE : DEAD, table[y][85] ? LIVE : DEAD, table[y][86] ? LIVE : DEAD, table[y][87] ? LIVE : DEAD, table[y][88] ? LIVE : DEAD, table[y][89] ? LIVE : DEAD, table[y][90] ? LIVE : DEAD, table[y][91] ? LIVE : DEAD, table[y][92] ? LIVE : DEAD, table[y][93] ? LIVE : DEAD, table[y][94] ? LIVE : DEAD, table[y][95] ? LIVE : DEAD, table[y][96] ? LIVE : DEAD, table[y][97] ? LIVE : DEAD, table[y][98] ? LIVE : DEAD, table[y][99] ? LIVE : DEAD, table[y][100] ? LIVE : DEAD,
            table[y][101] ? LIVE : DEAD, table[y][102] ? LIVE : DEAD, table[y][103] ? LIVE : DEAD, table[y][104] ? LIVE : DEAD, table[y][105] ? LIVE : DEAD, table[y][106] ? LIVE : DEAD, table[y][107] ? LIVE : DEAD, table[y][108] ? LIVE : DEAD, table[y][109] ? LIVE : DEAD, table[y][110] ? LIVE : DEAD, table[y][111] ? LIVE : DEAD, table[y][112] ? LIVE : DEAD, table[y][113] ? LIVE : DEAD, table[y][114] ? LIVE : DEAD, table[y][115] ? LIVE : DEAD, table[y][116] ? LIVE : DEAD, table[y][117] ? LIVE : DEAD, table[y][118] ? LIVE : DEAD, table[y][119] ? LIVE : DEAD, table[y][120] ? LIVE : DEAD, table[y][121] ? LIVE : DEAD, table[y][122] ? LIVE : DEAD, table[y][123] ? LIVE : DEAD, table[y][124] ? LIVE : DEAD, table[y][125] ? LIVE : DEAD, table[y][126] ? LIVE : DEAD, table[y][127] ? LIVE : DEAD, table[y][128] ? LIVE : DEAD, table[y][129] ? LIVE : DEAD, table[y][130] ? LIVE : DEAD, table[y][131] ? LIVE : DEAD, table[y][132] ? LIVE : DEAD, table[y][133] ? LIVE : DEAD, table[y][134] ? LIVE : DEAD, table[y][135] ? LIVE : DEAD, table[y][136] ? LIVE : DEAD, table[y][137] ? LIVE : DEAD, table[y][138] ? LIVE : DEAD, table[y][139] ? LIVE : DEAD, table[y][140] ? LIVE : DEAD, table[y][141] ? LIVE : DEAD, table[y][142] ? LIVE : DEAD, table[y][143] ? LIVE : DEAD, table[y][144] ? LIVE : DEAD, table[y][145] ? LIVE : DEAD, table[y][146] ? LIVE : DEAD, table[y][147] ? LIVE : DEAD, table[y][148] ? LIVE : DEAD, table[y][149] ? LIVE : DEAD, table[y][150] ? LIVE : DEAD, table[y][151] ? LIVE : DEAD, table[y][152] ? LIVE : DEAD, table[y][153] ? LIVE : DEAD, table[y][154] ? LIVE : DEAD, table[y][155] ? LIVE : DEAD, table[y][156] ? LIVE : DEAD, table[y][157] ? LIVE : DEAD, table[y][158] ? LIVE : DEAD, table[y][159] ? LIVE : DEAD, table[y][160] ? LIVE : DEAD, table[y][161] ? LIVE : DEAD, table[y][162] ? LIVE : DEAD, table[y][163] ? LIVE : DEAD, table[y][164] ? LIVE : DEAD, table[y][165] ? LIVE : DEAD, table[y][166] ? LIVE : DEAD, table[y][167] ? LIVE : DEAD, table[y][168] ? LIVE : DEAD, table[y][169] ? LIVE : DEAD, table[y][170] ? LIVE : DEAD, table[y][171] ? LIVE : DEAD, table[y][172] ? LIVE : DEAD, table[y][173] ? LIVE : DEAD, table[y][174] ? LIVE : DEAD, table[y][175] ? LIVE : DEAD, table[y][176] ? LIVE : DEAD, table[y][177] ? LIVE : DEAD, table[y][178] ? LIVE : DEAD, table[y][179] ? LIVE : DEAD, table[y][180] ? LIVE : DEAD, table[y][181] ? LIVE : DEAD, table[y][182] ? LIVE : DEAD, table[y][183] ? LIVE : DEAD, table[y][184] ? LIVE : DEAD, table[y][185] ? LIVE : DEAD, table[y][186] ? LIVE : DEAD, table[y][187] ? LIVE : DEAD, table[y][188] ? LIVE : DEAD, table[y][189] ? LIVE : DEAD, table[y][190] ? LIVE : DEAD, table[y][191] ? LIVE : DEAD, table[y][192] ? LIVE : DEAD, table[y][193] ? LIVE : DEAD, table[y][194] ? LIVE : DEAD, table[y][195] ? LIVE : DEAD, table[y][196] ? LIVE : DEAD, table[y][197] ? LIVE : DEAD, table[y][198] ? LIVE : DEAD, table[y][199] ? LIVE : DEAD, table[y][200] ? LIVE : DEAD,
            table[y][201] ? LIVE : DEAD, table[y][202] ? LIVE : DEAD, table[y][203] ? LIVE : DEAD, table[y][204] ? LIVE : DEAD, table[y][205] ? LIVE : DEAD, table[y][206] ? LIVE : DEAD, table[y][207] ? LIVE : DEAD, table[y][208] ? LIVE : DEAD, table[y][209] ? LIVE : DEAD, table[y][210] ? LIVE : DEAD, table[y][211] ? LIVE : DEAD, table[y][212] ? LIVE : DEAD, table[y][213] ? LIVE : DEAD, table[y][214] ? LIVE : DEAD, table[y][215] ? LIVE : DEAD, table[y][216] ? LIVE : DEAD, table[y][217] ? LIVE : DEAD, table[y][218] ? LIVE : DEAD, table[y][219] ? LIVE : DEAD, table[y][220] ? LIVE : DEAD, table[y][221] ? LIVE : DEAD, table[y][222] ? LIVE : DEAD, table[y][223] ? LIVE : DEAD, table[y][224] ? LIVE : DEAD, table[y][225] ? LIVE : DEAD, table[y][226] ? LIVE : DEAD, table[y][227] ? LIVE : DEAD, table[y][228] ? LIVE : DEAD, table[y][229] ? LIVE : DEAD, table[y][230] ? LIVE : DEAD, table[y][231] ? LIVE : DEAD, table[y][232] ? LIVE : DEAD, table[y][233] ? LIVE : DEAD, table[y][234] ? LIVE : DEAD, table[y][235] ? LIVE : DEAD, table[y][236] ? LIVE : DEAD, table[y][237] ? LIVE : DEAD, table[y][238] ? LIVE : DEAD, table[y][239] ? LIVE : DEAD, table[y][240] ? LIVE : DEAD, table[y][241] ? LIVE : DEAD, table[y][242] ? LIVE : DEAD, table[y][243] ? LIVE : DEAD, table[y][244] ? LIVE : DEAD, table[y][245] ? LIVE : DEAD, table[y][246] ? LIVE : DEAD, table[y][247] ? LIVE : DEAD, table[y][248] ? LIVE : DEAD, table[y][249] ? LIVE : DEAD, table[y][250] ? LIVE : DEAD, table[y][251] ? LIVE : DEAD, table[y][252] ? LIVE : DEAD, table[y][253] ? LIVE : DEAD, table[y][254] ? LIVE : DEAD, table[y][255] ? LIVE : DEAD, table[y][256] ? LIVE : DEAD, table[y][257] ? LIVE : DEAD, table[y][258] ? LIVE : DEAD, table[y][259] ? LIVE : DEAD, table[y][260] ? LIVE : DEAD, table[y][261] ? LIVE : DEAD, table[y][262] ? LIVE : DEAD, table[y][263] ? LIVE : DEAD, table[y][264] ? LIVE : DEAD, table[y][265] ? LIVE : DEAD, table[y][266] ? LIVE : DEAD, table[y][267] ? LIVE : DEAD, table[y][268] ? LIVE : DEAD, table[y][269] ? LIVE : DEAD, table[y][270] ? LIVE : DEAD, table[y][271] ? LIVE : DEAD, table[y][272] ? LIVE : DEAD, table[y][273] ? LIVE : DEAD, table[y][274] ? LIVE : DEAD, table[y][275] ? LIVE : DEAD, table[y][276] ? LIVE : DEAD, table[y][277] ? LIVE : DEAD, table[y][278] ? LIVE : DEAD, table[y][279] ? LIVE : DEAD, table[y][280] ? LIVE : DEAD, table[y][281] ? LIVE : DEAD, table[y][282] ? LIVE : DEAD, table[y][283] ? LIVE : DEAD, table[y][284] ? LIVE : DEAD, table[y][285] ? LIVE : DEAD, table[y][286] ? LIVE : DEAD, table[y][287] ? LIVE : DEAD, table[y][288] ? LIVE : DEAD, table[y][289] ? LIVE : DEAD, table[y][290] ? LIVE : DEAD, table[y][291] ? LIVE : DEAD, table[y][292] ? LIVE : DEAD, table[y][293] ? LIVE : DEAD, table[y][294] ? LIVE : DEAD, table[y][295] ? LIVE : DEAD, table[y][296] ? LIVE : DEAD, table[y][297] ? LIVE : DEAD, table[y][298] ? LIVE : DEAD, table[y][299] ? LIVE : DEAD, table[y][300] ? LIVE : DEAD,
            table[y][301] ? LIVE : DEAD, table[y][302] ? LIVE : DEAD, table[y][303] ? LIVE : DEAD, table[y][304] ? LIVE : DEAD, table[y][305] ? LIVE : DEAD, table[y][306] ? LIVE : DEAD, table[y][307] ? LIVE : DEAD, table[y][308] ? LIVE : DEAD, table[y][309] ? LIVE : DEAD, table[y][310] ? LIVE : DEAD, table[y][311] ? LIVE : DEAD, table[y][312] ? LIVE : DEAD, table[y][313] ? LIVE : DEAD, table[y][314] ? LIVE : DEAD, table[y][315] ? LIVE : DEAD, table[y][316] ? LIVE : DEAD, table[y][317] ? LIVE : DEAD, table[y][318] ? LIVE : DEAD, table[y][319] ? LIVE : DEAD, table[y][320] ? LIVE : DEAD, table[y][321] ? LIVE : DEAD, table[y][322] ? LIVE : DEAD, table[y][323] ? LIVE : DEAD, table[y][324] ? LIVE : DEAD, table[y][325] ? LIVE : DEAD, table[y][326] ? LIVE : DEAD, table[y][327] ? LIVE : DEAD, table[y][328] ? LIVE : DEAD, table[y][329] ? LIVE : DEAD, table[y][330] ? LIVE : DEAD, table[y][331] ? LIVE : DEAD, table[y][332] ? LIVE : DEAD, table[y][333] ? LIVE : DEAD, table[y][334] ? LIVE : DEAD, table[y][335] ? LIVE : DEAD, table[y][336] ? LIVE : DEAD, table[y][337] ? LIVE : DEAD, table[y][338] ? LIVE : DEAD, table[y][339] ? LIVE : DEAD);
        printf("\n");
    }

    fflush(stdout); // Flush the output buffer to ensure immediate display
    Sleep(DELAY);
    printf("\r"); // Move the cursor back to the beginning of the line
}



void randomize(bool table[SIZE][SIZE])
{
    for (int y = 0; y < SIZE; y++)
        for(int x = 0; x < SIZE; x++)
            if ((rand() % 10) == 0)
                table[y][x] = true;
}
