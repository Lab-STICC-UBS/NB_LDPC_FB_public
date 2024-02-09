# Welcome to the c code for NB-LDPC simulation

You can use this code to simulation NB-LDPC matrices using the Extented-Min Sum (EMS) algorithm.
 The Check Node (CN) is processed using Forward Backward(FB) algorithm. The FB algorithm splits CN in elementary CNs (ECN)

# usage

## input argument
 there are 8 arguments
 1.		NbMonteCarlo     : # simulated frames
 1.		NbIterMax        : # of maximum decoding iteration
 1.		FileMatrix       : File name of the parity-check matrix
 1.		EbN              : Eb/No (dB)
 1.		n_vc             : size of truncated messages from Variable to Check
 1.		n_cv			 : size of truncated messages from Check to Variable
 1.		Offset           : offset correction factor (0.4 -- 1)
 1.		NbOper           : Maximum number of operations for sorting
 
 ## output

Frame Error Rate for the given simulation parameters

## input and output files
 * Input File : 'FileMatrix' is an ASCII file with the parity-check matrix description in aList format.
 * Output File : a txt file giving in the ./data forder giving SNR, BER, average number of iterations and time of the end of simulation

## Simulation on windows

you may use CodeBlocks IDE

in the Projet-> Set Programs' arguments

> 2000 10 ./matrices/KN/N528_K264_GF64_BeiDou.txt  2.0  20 20 0.3 25

giving

<0> FER= 40 / 9397 = 0.004257 BER= 875 / x = 0.000353  avr_it=3.25

## Simulation on Linux

compile the c code using the makefile

> make

then run with appropriate parameters

> ./essai 2000 10 ./matrices/KN/N528_K264_GF64_BeiDou.txt  2.0  20 20 0.3 25

you may use the start.sh shell script to run simulation for multiple snr

> sh ./start.sh

## Simulation results

> <0> FER= 40 / 9397 = 0.004257 BER= 875 / x = 0.000353  avr_it=3.25

