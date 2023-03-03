/*!
 * \file tools.c
 * \brief tools for NB decoder
 * \author C.Marchand, A. Al-Ghouwahel, Oussama Abassi, L. Conde-Canencia, A. abdmoulah, E. Boutillon
 * \copyright BSD copyright
 * \date 03/03/2015


 */

#include <string.h>
#include <math.h>

#include "./include/struct.h"
#include "./include/init.h"
#include "./include/tools.h"


void BDS_ICD_Example(int **NBIN) {

    // Example mssage from BeiDou B1C CNAV ICD page 87 - No errors added
    // Flip bits here to test error correction
    NBIN[0][0] = 1;
    NBIN[0][1] = 0;
    NBIN[0][2] = 1;
    NBIN[0][3] = 0;
    NBIN[0][4] = 0;
    NBIN[0][5] = 1;
    NBIN[1][0] = 1;
    NBIN[1][1] = 0;
    NBIN[1][2] = 1;
    NBIN[1][3] = 0;
    NBIN[1][4] = 0;
    NBIN[1][5] = 0;
    NBIN[2][0] = 1;
    NBIN[2][1] = 0;
    NBIN[2][2] = 1;
    NBIN[2][3] = 0;
    NBIN[2][4] = 1;
    NBIN[2][5] = 1;
    NBIN[3][0] = 0;
    NBIN[3][1] = 1;
    NBIN[3][2] = 1;
    NBIN[3][3] = 1;
    NBIN[3][4] = 0;
    NBIN[3][5] = 1;
    NBIN[4][0] = 1;
    NBIN[4][1] = 1;
    NBIN[4][2] = 1;
    NBIN[4][3] = 0;
    NBIN[4][4] = 0;
    NBIN[4][5] = 0;
    NBIN[5][0] = 1;
    NBIN[5][1] = 0;
    NBIN[5][2] = 0;
    NBIN[5][3] = 0;
    NBIN[5][4] = 0;
    NBIN[5][5] = 0;
    NBIN[6][0] = 0;
    NBIN[6][1] = 0;
    NBIN[6][2] = 0;
    NBIN[6][3] = 0;
    NBIN[6][4] = 0;
    NBIN[6][5] = 1;
    NBIN[7][0] = 0;
    NBIN[7][1] = 0;
    NBIN[7][2] = 1;
    NBIN[7][3] = 1;
    NBIN[7][4] = 1;
    NBIN[7][5] = 1;
    NBIN[8][0] = 1;
    NBIN[8][1] = 1;
    NBIN[8][2] = 0;
    NBIN[8][3] = 1;
    NBIN[8][4] = 1;
    NBIN[8][5] = 1;
    NBIN[9][0] = 0;
    NBIN[9][1] = 1;
    NBIN[9][2] = 0;
    NBIN[9][3] = 1;
    NBIN[9][4] = 0;
    NBIN[9][5] = 1;
    NBIN[10][0] = 1;
    NBIN[10][1] = 0;
    NBIN[10][2] = 0;
    NBIN[10][3] = 1;
    NBIN[10][4] = 1;
    NBIN[10][5] = 1;
    NBIN[11][0] = 0;
    NBIN[11][1] = 0;
    NBIN[11][2] = 1;
    NBIN[11][3] = 1;
    NBIN[11][4] = 0;
    NBIN[11][5] = 0;
    NBIN[12][0] = 0;
    NBIN[12][1] = 0;
    NBIN[12][2] = 0;
    NBIN[12][3] = 0;
    NBIN[12][4] = 1;
    NBIN[12][5] = 0;
    NBIN[13][0] = 1;
    NBIN[13][1] = 0;
    NBIN[13][2] = 1;
    NBIN[13][3] = 0;
    NBIN[13][4] = 0;
    NBIN[13][5] = 1;
    NBIN[14][0] = 0;
    NBIN[14][1] = 0;
    NBIN[14][2] = 1;
    NBIN[14][3] = 0;
    NBIN[14][4] = 0;
    NBIN[14][5] = 0;
    NBIN[15][0] = 1;
    NBIN[15][1] = 0;
    NBIN[15][2] = 0;
    NBIN[15][3] = 1;
    NBIN[15][4] = 1;
    NBIN[15][5] = 0;
    NBIN[16][0] = 0;
    NBIN[16][1] = 0;
    NBIN[16][2] = 0;
    NBIN[16][3] = 0;
    NBIN[16][4] = 1;
    NBIN[16][5] = 1;
    NBIN[17][0] = 1;
    NBIN[17][1] = 0;
    NBIN[17][2] = 1;
    NBIN[17][3] = 0;
    NBIN[17][4] = 0;
    NBIN[17][5] = 0;
    NBIN[18][0] = 1;
    NBIN[18][1] = 1;
    NBIN[18][2] = 0;
    NBIN[18][3] = 1;
    NBIN[18][4] = 0;
    NBIN[18][5] = 1;
    NBIN[19][0] = 1;
    NBIN[19][1] = 1;
    NBIN[19][2] = 0;
    NBIN[19][3] = 1;
    NBIN[19][4] = 1;
    NBIN[19][5] = 0;
    NBIN[20][0] = 0;
    NBIN[20][1] = 1;
    NBIN[20][2] = 0;
    NBIN[20][3] = 1;
    NBIN[20][4] = 0;
    NBIN[20][5] = 1;
    NBIN[21][0] = 0;
    NBIN[21][1] = 0;
    NBIN[21][2] = 1;
    NBIN[21][3] = 0;
    NBIN[21][4] = 0;
    NBIN[21][5] = 0;
    NBIN[22][0] = 0;
    NBIN[22][1] = 1;
    NBIN[22][2] = 0;
    NBIN[22][3] = 1;
    NBIN[22][4] = 0;
    NBIN[22][5] = 0;
    NBIN[23][0] = 0;
    NBIN[23][1] = 1;
    NBIN[23][2] = 1;
    NBIN[23][3] = 1;
    NBIN[23][4] = 1;
    NBIN[23][5] = 0;
    NBIN[24][0] = 1;
    NBIN[24][1] = 1;
    NBIN[24][2] = 1;
    NBIN[24][3] = 1;
    NBIN[24][4] = 1;
    NBIN[24][5] = 0;
    NBIN[25][0] = 1;
    NBIN[25][1] = 0;
    NBIN[25][2] = 1;
    NBIN[25][3] = 0;
    NBIN[25][4] = 0;
    NBIN[25][5] = 1;
    NBIN[26][0] = 0;
    NBIN[26][1] = 0;
    NBIN[26][2] = 0;
    NBIN[26][3] = 0;
    NBIN[26][4] = 0;
    NBIN[26][5] = 1;
    NBIN[27][0] = 0;
    NBIN[27][1] = 0;
    NBIN[27][2] = 0;
    NBIN[27][3] = 0;
    NBIN[27][4] = 0;
    NBIN[27][5] = 1;
    NBIN[28][0] = 1;
    NBIN[28][1] = 0;
    NBIN[28][2] = 1;
    NBIN[28][3] = 1;
    NBIN[28][4] = 1;
    NBIN[28][5] = 0;
    NBIN[29][0] = 1;
    NBIN[29][1] = 0;
    NBIN[29][2] = 0;
    NBIN[29][3] = 0;
    NBIN[29][4] = 0;
    NBIN[29][5] = 0;
    NBIN[30][0] = 1;
    NBIN[30][1] = 0;
    NBIN[30][2] = 1;
    NBIN[30][3] = 0;
    NBIN[30][4] = 0;
    NBIN[30][5] = 1;
    NBIN[31][0] = 1;
    NBIN[31][1] = 1;
    NBIN[31][2] = 0;
    NBIN[31][3] = 1;
    NBIN[31][4] = 0;
    NBIN[31][5] = 1;
    NBIN[32][0] = 1;
    NBIN[32][1] = 1;
    NBIN[32][2] = 0;
    NBIN[32][3] = 0;
    NBIN[32][4] = 0;
    NBIN[32][5] = 1;
    NBIN[33][0] = 0;
    NBIN[33][1] = 1;
    NBIN[33][2] = 1;
    NBIN[33][3] = 1;
    NBIN[33][4] = 1;
    NBIN[33][5] = 1;
    NBIN[34][0] = 0;
    NBIN[34][1] = 0;
    NBIN[34][2] = 1;
    NBIN[34][3] = 0;
    NBIN[34][4] = 0;
    NBIN[34][5] = 1;
    NBIN[35][0] = 0;
    NBIN[35][1] = 0;
    NBIN[35][2] = 0;
    NBIN[35][3] = 0;
    NBIN[35][4] = 1;
    NBIN[35][5] = 1;
    NBIN[36][0] = 0;
    NBIN[36][1] = 1;
    NBIN[36][2] = 0;
    NBIN[36][3] = 0;
    NBIN[36][4] = 1;
    NBIN[36][5] = 0;
    NBIN[37][0] = 0;
    NBIN[37][1] = 1;
    NBIN[37][2] = 1;
    NBIN[37][3] = 0;
    NBIN[37][4] = 1;
    NBIN[37][5] = 1;
    NBIN[38][0] = 1;
    NBIN[38][1] = 0;
    NBIN[38][2] = 1;
    NBIN[38][3] = 1;
    NBIN[38][4] = 0;
    NBIN[38][5] = 0;
    NBIN[39][0] = 0;
    NBIN[39][1] = 1;
    NBIN[39][2] = 0;
    NBIN[39][3] = 1;
    NBIN[39][4] = 1;
    NBIN[39][5] = 1;
    NBIN[40][0] = 1;
    NBIN[40][1] = 0;
    NBIN[40][2] = 0;
    NBIN[40][3] = 0;
    NBIN[40][4] = 0;
    NBIN[40][5] = 1;
    NBIN[41][0] = 0;
    NBIN[41][1] = 0;
    NBIN[41][2] = 0;
    NBIN[41][3] = 0;
    NBIN[41][4] = 0;
    NBIN[41][5] = 1;
    NBIN[42][0] = 0;
    NBIN[42][1] = 0;
    NBIN[42][2] = 0;
    NBIN[42][3] = 1;
    NBIN[42][4] = 1;
    NBIN[42][5] = 0;
    NBIN[43][0] = 0;
    NBIN[43][1] = 0;
    NBIN[43][2] = 0;
    NBIN[43][3] = 1;
    NBIN[43][4] = 0;
    NBIN[43][5] = 1;
    NBIN[44][0] = 0;
    NBIN[44][1] = 0;
    NBIN[44][2] = 1;
    NBIN[44][3] = 0;
    NBIN[44][4] = 1;
    NBIN[44][5] = 0;
    NBIN[45][0] = 1;
    NBIN[45][1] = 1;
    NBIN[45][2] = 0;
    NBIN[45][3] = 0;
    NBIN[45][4] = 1;
    NBIN[45][5] = 0;
    NBIN[46][0] = 0;
    NBIN[46][1] = 1;
    NBIN[46][2] = 0;
    NBIN[46][3] = 0;
    NBIN[46][4] = 1;
    NBIN[46][5] = 1;
    NBIN[47][0] = 1;
    NBIN[47][1] = 0;
    NBIN[47][2] = 0;
    NBIN[47][3] = 0;
    NBIN[47][4] = 0;
    NBIN[47][5] = 1;
    NBIN[48][0] = 0;
    NBIN[48][1] = 0;
    NBIN[48][2] = 1;
    NBIN[48][3] = 0;
    NBIN[48][4] = 1;
    NBIN[48][5] = 0;
    NBIN[49][0] = 1;
    NBIN[49][1] = 0;
    NBIN[49][2] = 0;
    NBIN[49][3] = 1;
    NBIN[49][4] = 1;
    NBIN[49][5] = 0;
    NBIN[50][0] = 0;
    NBIN[50][1] = 1;
    NBIN[50][2] = 0;
    NBIN[50][3] = 0;
    NBIN[50][4] = 0;
    NBIN[50][5] = 0;
    NBIN[51][0] = 1;
    NBIN[51][1] = 0;
    NBIN[51][2] = 1;
    NBIN[51][3] = 0;
    NBIN[51][4] = 0;
    NBIN[51][5] = 1;
    NBIN[52][0] = 1;
    NBIN[52][1] = 0;
    NBIN[52][2] = 1;
    NBIN[52][3] = 1;
    NBIN[52][4] = 0;
    NBIN[52][5] = 0;
    NBIN[53][0] = 1;
    NBIN[53][1] = 0;
    NBIN[53][2] = 1;
    NBIN[53][3] = 1;
    NBIN[53][4] = 1;
    NBIN[53][5] = 1;
    NBIN[54][0] = 0;
    NBIN[54][1] = 1;
    NBIN[54][2] = 1;
    NBIN[54][3] = 1;
    NBIN[54][4] = 0;
    NBIN[54][5] = 0;
    NBIN[55][0] = 0;
    NBIN[55][1] = 0;
    NBIN[55][2] = 0;
    NBIN[55][3] = 1;
    NBIN[55][4] = 0;
    NBIN[55][5] = 1;
    NBIN[56][0] = 0;
    NBIN[56][1] = 0;
    NBIN[56][2] = 1;
    NBIN[56][3] = 1;
    NBIN[56][4] = 1;
    NBIN[56][5] = 0;
    NBIN[57][0] = 1;
    NBIN[57][1] = 1;
    NBIN[57][2] = 1;
    NBIN[57][3] = 0;
    NBIN[57][4] = 1;
    NBIN[57][5] = 0;
    NBIN[58][0] = 0;
    NBIN[58][1] = 0;
    NBIN[58][2] = 1;
    NBIN[58][3] = 0;
    NBIN[58][4] = 0;
    NBIN[58][5] = 1;
    NBIN[59][0] = 1;
    NBIN[59][1] = 1;
    NBIN[59][2] = 0;
    NBIN[59][3] = 1;
    NBIN[59][4] = 0;
    NBIN[59][5] = 0;
    NBIN[60][0] = 1;
    NBIN[60][1] = 0;
    NBIN[60][2] = 0;
    NBIN[60][3] = 0;
    NBIN[60][4] = 1;
    NBIN[60][5] = 0;
    NBIN[61][0] = 1;
    NBIN[61][1] = 1;
    NBIN[61][2] = 1;
    NBIN[61][3] = 1;
    NBIN[61][4] = 1;
    NBIN[61][5] = 1;
    NBIN[62][0] = 0;
    NBIN[62][1] = 0;
    NBIN[62][2] = 0;
    NBIN[62][3] = 1;
    NBIN[62][4] = 0;
    NBIN[62][5] = 1;
    NBIN[63][0] = 0;
    NBIN[63][1] = 1;
    NBIN[63][2] = 1;
    NBIN[63][3] = 1;
    NBIN[63][4] = 0;
    NBIN[63][5] = 0;
    NBIN[64][0] = 0;
    NBIN[64][1] = 0;
    NBIN[64][2] = 0;
    NBIN[64][3] = 1;
    NBIN[64][4] = 1;
    NBIN[64][5] = 0;
    NBIN[65][0] = 1;
    NBIN[65][1] = 1;
    NBIN[65][2] = 1;
    NBIN[65][3] = 1;
    NBIN[65][4] = 0;
    NBIN[65][5] = 1;
    NBIN[66][0] = 0;
    NBIN[66][1] = 0;
    NBIN[66][2] = 0;
    NBIN[66][3] = 0;
    NBIN[66][4] = 0;
    NBIN[66][5] = 0;
    NBIN[67][0] = 1;
    NBIN[67][1] = 1;
    NBIN[67][2] = 0;
    NBIN[67][3] = 0;
    NBIN[67][4] = 0;
    NBIN[67][5] = 1;
    NBIN[68][0] = 1;
    NBIN[68][1] = 1;
    NBIN[68][2] = 0;
    NBIN[68][3] = 1;
    NBIN[68][4] = 0;
    NBIN[68][5] = 0;
    NBIN[69][0] = 1;
    NBIN[69][1] = 1;
    NBIN[69][2] = 0;
    NBIN[69][3] = 1;
    NBIN[69][4] = 1;
    NBIN[69][5] = 1;
    NBIN[70][0] = 0;
    NBIN[70][1] = 0;
    NBIN[70][2] = 0;
    NBIN[70][3] = 1;
    NBIN[70][4] = 0;
    NBIN[70][5] = 1;
    NBIN[71][0] = 0;
    NBIN[71][1] = 1;
    NBIN[71][2] = 1;
    NBIN[71][3] = 0;
    NBIN[71][4] = 0;
    NBIN[71][5] = 1;
    NBIN[72][0] = 0;
    NBIN[72][1] = 1;
    NBIN[72][2] = 0;
    NBIN[72][3] = 0;
    NBIN[72][4] = 0;
    NBIN[72][5] = 0;
    NBIN[73][0] = 1;
    NBIN[73][1] = 1;
    NBIN[73][2] = 0;
    NBIN[73][3] = 0;
    NBIN[73][4] = 1;
    NBIN[73][5] = 1;
    NBIN[74][0] = 0;
    NBIN[74][1] = 1;
    NBIN[74][2] = 1;
    NBIN[74][3] = 0;
    NBIN[74][4] = 1;
    NBIN[74][5] = 1;
    NBIN[75][0] = 1;
    NBIN[75][1] = 1;
    NBIN[75][2] = 1;
    NBIN[75][3] = 0;
    NBIN[75][4] = 1;
    NBIN[75][5] = 0;
    NBIN[76][0] = 0;
    NBIN[76][1] = 0;
    NBIN[76][2] = 1;
    NBIN[76][3] = 0;
    NBIN[76][4] = 1;
    NBIN[76][5] = 1;
    NBIN[77][0] = 0;
    NBIN[77][1] = 1;
    NBIN[77][2] = 0;
    NBIN[77][3] = 0;
    NBIN[77][4] = 0;
    NBIN[77][5] = 0;
    NBIN[78][0] = 0;
    NBIN[78][1] = 0;
    NBIN[78][2] = 1;
    NBIN[78][3] = 0;
    NBIN[78][4] = 0;
    NBIN[78][5] = 1;
    NBIN[79][0] = 0;
    NBIN[79][1] = 0;
    NBIN[79][2] = 1;
    NBIN[79][3] = 0;
    NBIN[79][4] = 0;
    NBIN[79][5] = 0;
    NBIN[80][0] = 1;
    NBIN[80][1] = 1;
    NBIN[80][2] = 0;
    NBIN[80][3] = 1;
    NBIN[80][4] = 1;
    NBIN[80][5] = 1;
    NBIN[81][0] = 1;
    NBIN[81][1] = 0;
    NBIN[81][2] = 0;
    NBIN[81][3] = 1;
    NBIN[81][4] = 0;
    NBIN[81][5] = 1;
    NBIN[82][0] = 1;
    NBIN[82][1] = 0;
    NBIN[82][2] = 0;
    NBIN[82][3] = 0;
    NBIN[82][4] = 1;
    NBIN[82][5] = 1;
    NBIN[83][0] = 0;
    NBIN[83][1] = 0;
    NBIN[83][2] = 1;
    NBIN[83][3] = 0;
    NBIN[83][4] = 0;
    NBIN[83][5] = 1;
    NBIN[84][0] = 1;
    NBIN[84][1] = 1;
    NBIN[84][2] = 0;
    NBIN[84][3] = 1;
    NBIN[84][4] = 1;
    NBIN[84][5] = 0;
    NBIN[85][0] = 1;
    NBIN[85][1] = 0;
    NBIN[85][2] = 0;
    NBIN[85][3] = 1;
    NBIN[85][4] = 1;
    NBIN[85][5] = 1;
    NBIN[86][0] = 0;
    NBIN[86][1] = 1;
    NBIN[86][2] = 0;
    NBIN[86][3] = 1;
    NBIN[86][4] = 1;
    NBIN[86][5] = 0;
    NBIN[87][0] = 1;
    NBIN[87][1] = 0;
    NBIN[87][2] = 0;
    NBIN[87][3] = 0;
    NBIN[87][4] = 0;
    NBIN[87][5] = 0;
}





//// random generator: uniform distribution on [0,1]
//float My_drand48 (void)
//{
//    return((float)(rand())/(float)(RAND_MAX+1.0));
//}


// random generator: uniform distribution on [0,1]

/*!
* \fn My_drand48
* \brief improved randum number generator working for linux and windows
* return an uniformely distributed random number, for windows to replace drand48 of linux
* \author C. Marchand
*******************************************************************************/
float My_drand48(int *initialise)
{


#if defined(_WIN32) || defined(__CYGWIN__) || defined(__MINGW32__)

    static int s1, s2;
    int k, Z;

    if ( *initialise == -1 )
    {
        s1 = (int)(( rand() % 2147483562 ) + 1);
        s2 = (int)(( rand() % 2147483398 ) + 1);
        *initialise = 0;
    }

    k = s1/53668;
    s1 = 40014*(s1 - k*53668) - k*12211;
    if (s1 < 0)
        s1 += 2147483563;

    k = s2/52774;
    s2 = 40692*(s2 - k*52774) - k*3791;
    if (s2 < 0)
        s2 += 2147483399;

    Z = s1 - s2;
    if (Z < 1)
        Z += 2147483562;

    return(Z/2147483563.0);

#elif __linux__

    return(drand48());

#endif


}



/*!
 * \fn Bin2GF
 * \brief compute a GF(q) symbol corresponding to a frame of log_2(GF) bits
 * Parameters    :
 * Inputs        :
 * 	- int *U    : array representing logGF bits
 * 	- int logGF : size of the array U. logGF = log2 (GF)
 * 	- int GF    : order of the field
 * 	- int ** BINGF: binary mapping table
 * Outputs       :
 *      - index of the non-binary symbol
 */

int Bin2GF(int *U,int GF,int logGF,int **BINGF)
{
    int k;

    for (k=0; k<GF; k++)
    {
        if (memcmp(U,BINGF[k],sizeof(int)*logGF)==0) break;
    }
    return(k);
}




/**
 * \fn RandomBinaryGenerator
 * \brief Uniform random binary generator (generate the information bits of the code (KBIN))
 * 		   The redundancy symbols are initialized to 0.
 * Inputs
 * 	- N 	: Code length
 * 	- M 	: Number of parity non-binary symbols
 * 	- GF    : Order of the field
 * 	- logGF : logGF = log2(GF)
 * Outputs       :
 *      - NBIN  : Binary representation of the codeword
 *      - KIN   : Binary representation of the information symbols
 *      - NSYMB : Non-binary symbols of the codeword
 *      - KSYMB : Information non-binary symbols
 */
void RandomBinaryGenerator (int N, int M,int GF,int logGF, int **KBIN, int *KSYMB,int **BINGF, int *init_rand)
{
    int k,q;

    /* Random and (bitwise) uniformly distributed information symbols */
    for (k=0; k<N-M; k++)
    {
        for (q=0; q<logGF; q++)
            KBIN[k][q]=floor(My_drand48(init_rand)*1.9999); // avoid the case 2

        KSYMB[k]=Bin2GF(KBIN[k],GF,logGF,BINGF);
     }
}


/**
 * \fn GaussianElimination
 * \brief Perform a Gaussian elimination on the parity-check matrix.
 * 		   The procedure stops when the
 * 		   The redundancy symbols are initialized to 0.
 * Inputs
 * 	- code->mat   : parity-check matrix
 * 	- table       : lookup tables for computations in GF(q)
 * Outputs       :
 *      - code->matUT : Upper triangular matrix used for encoding
 *      - code->Perm : Column permutation
 */
void GaussianElimination (code_t *code, table_t *table)
{
    const int N = code->N;
    const int M = code->M;
    int n,m,k,m1,ind, buf;
    int temp[12];
    int i;

    code->matUT = calloc((size_t)M,sizeof(int *));
    //if (code->matUT == NULL) err(EXIT_FAILURE,"%s:%d > malloc failed !",__FILE__,__LINE__);
    code->matUT [0] = calloc((size_t)M*N,sizeof(int));
    //if (code->matUT[0] == NULL) err(EXIT_FAILURE,"%s:%d > malloc failed !",__FILE__,__LINE__);
    for (k=1; k<M; k++) code->matUT[k] = code->matUT[0] + k*N;

    code->Perm 	= calloc(N,sizeof(int));
    //if (code->Perm == NULL) err(EXIT_FAILURE,"%s:%d > malloc failed !",__FILE__,__LINE__);

    for (n=0; n<N; n++) code->Perm[n] = n;

    for (m=0; m<M; m++)
    {
        for (k=0; k<code->rowDegree[m]; k++)
        {
            code->matUT[m][code->mat[m][k]] = code->matValue[m][k];
        }
    }
    for (m=0; m<M; m++)
    {
        for (ind=m; ind<N; ind++)
        {
            if (code->matUT[m][ind]!=0) break;
        }
        if (ind==N)
        {
            printf("The matrix is not full rank (%d,%d)\n",m,ind);
            exit(EXIT_FAILURE);
        }
        buf = code->Perm[ind];
        code->Perm[ind] = code->Perm[m];
        code->Perm[m] = buf;
        for (m1=0; m1<M; m1++)
        {
            buf = code->matUT[m1][m];
            code->matUT[m1][m] = code->matUT[m1][ind];
            code->matUT[m1][ind] = buf;
        }

        for (m1=m+1; m1<M; m1++)
        {
            if (code->matUT[m1][m]!=0)
            {
                buf=code->matUT[m1][m];
                for (n=m; n<N; n++)
                {
                    if (code->matUT[m1][n]!=0)
                        code->matUT[m1][n] = table->DIVGF[code->matUT[m1][n]][buf];
                }
                for (n=m; n<N; n++)
                {
                    if (code->matUT[m1][n]!=0)
                        code->matUT[m1][n] = table->MULGF[code->matUT[m1][n]][code->matUT[m][m]];
                }
                for (n=m; n<N; n++)
                {
                                for(i=0; i<code->logGF; i++)
                                {
                                    temp[i] = (table->BINGF[code->matUT[m1][n]][i])^(table->BINGF[code->matUT[m][n]][i]);
                                }
                                code->matUT[m1][n] = Bin2GF(temp,code->GF,code->logGF,table->BINGF);

                    //code->matUT[m1][n] = table->ADDGF[code->matUT[m1][n]][code->matUT[m][n]];
                }
            }
        }
    }
}


/**
 * \fn Encoding
 * \brief Encode the information bits into a codeword.
 * 		   matUT beeing upper triangular, the backsubstitution method is used.
 * 		   The M first symbols in NSYMB are redundancy symbols (before deinterleaving)
 * Inputs
 * 	- KSYMB  ( KSYMB are information symbols)
 * Outputs
 *      - Codeword
 *      - NBIN : binary copy of the codeword
 */
int Encoding(code_t *code, table_t *table, int *CodeWord, int **NBIN, int *KSYMB)
{
    const int N = code->N;
    const int M = code->M;
    const int logGF = code->logGF;
    int k,n,m,q,buf;
    int NSYMB[N];
    int temp[12];
    int i;


    for (k=0 ; k<N-M; k++)
        {
            NSYMB[M+k]=KSYMB[k];
            //printf(" %d ",KSYMB[k]);
        }
        //getchar();

    /* Backsubstitution */
    for (m=M-1; m>=0; m--)
    {
        buf=0;
        for (n=m+1; n<N; n++)
        {
            if (code->matUT[m][n]!=0)
            {
                for(i=0; i<code->logGF; i++)
                {
                    temp[i] = (table->BINGF[buf][i])^(table->BINGF[table->MULGF[code->matUT[m][n]][NSYMB[n]]][i]);
                }
                buf = Bin2GF(temp,code->GF,code->logGF,table->BINGF);
              //  buf = table->ADDGF[buf][table->MULGF[code->matUT[m][n]][NSYMB[n]]];
            }
        }
        /* Systematic codeword (interleaved) */
        NSYMB[m] = table->DIVGF[buf][code->matUT[m][m]];
        }

    /* De-interleaving */
    for (n=0; n<N; n++)
        CodeWord[code->Perm[n]] = NSYMB[n];

    /* Binary copy of the codeword: */
    for (n=0; n<N; n++)
    {
        for (q=0; q<logGF; q++)
        {
            NBIN[n][q] = table->BINGF[CodeWord[n]][q];
            //printf("%d ",table->BINGF[CodeWord[n]][q]);
        }
        //printf("%d ",CodeWord[n]);
    }
    //printf(" \n ");
    //getchar();

    return(0);
}




/**
 * \fn Syndrom
 * \brief Compute the syndom of a message
 * Inputs
 * 	- code structure code_t
 * 	- table_t tableGF : lookup table
 * 	- message
 * Outputs
 * 	- synd is 0 iff. the decided message is a codeword
 * 	(the value of synd is not meaningful if synd != 0 )
 */
int Syndrom (code_t *code, int *decide, table_t *tableGF)
{
    int k,l;
    int synd;
    int temp[12];
    int i;

    synd = 0;
    for (k=0; k<code->M; k++)
    {
        for (l=0; l<code->rowDegree[k]; l++)
        {

            for(i=0; i<code->logGF; i++)
            {
                temp[i] = (tableGF->BINGF[synd][i])^(tableGF->BINGF[tableGF->MULGF[code->matValue[k][l]][decide[code->mat[k][l]]]][i]);
            }
            synd = Bin2GF(temp,code->GF,code->logGF,tableGF->BINGF);
            //synd = tableGF->ADDGF[synd][tableGF->MULGF[code->matValue[k][l]][decide[code->mat[k][l]]]];
        }

        if (synd != 0)
            break;
    }

    return (synd);
}


/**
 * \fn void Decision( int *decision,float **APP,int N,int GF)
 * \brief Make a hard decision given the APP
 * Inputs
 * 	- APP
 * 	- N
 * 	- GF
 * Outputs
 * 	- decision
 */
void Decision( int *decision,float **APP,int N,int GF)
{
    int n,g,ind;
    float min;

    for (n=0; n<N; n++)
    {
        //max = APP[n][0];
        min=+1e5;
        ind=0;
        for (g=0; g<GF; g++)
            if (APP[n][g]<min)
            {
                min=APP[n][g];
                ind=g;
            }
        decision[n]=ind;
    }
}


