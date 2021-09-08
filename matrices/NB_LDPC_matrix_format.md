# NB-LDPC matrix format

## Introduction

NB-LDPC matrices can be represented in many way. In this c program, we use 3 different format

UBS, KN and BeiDou. They have their advantages and inconvenient but The advantage of the BeiDou format is that it is standardized. 

## Header common to all format

### First line
**N**: the number of symbol (number of columns in the parity check matrix)
**M**: the number of Parity (number of lines in the parity check matrix)
**GF**: the code order q=2^m
###  Second line (sometime skipped)
**d_v**: maximum variable node degree
**d_c**: maximum check node degree

### Third line
**d_v** of each variable node
### fourth line 
**d_c** of each check node

## UBS format

Format used by Université de Bretatgne Sud (UBS)

M lines, where each line defines the VNs connected to a CN. VNs numbered from 0 to N-1.
one empty line.

M lines, where the multiplicative coefficient associated to each connection is given by the power of the primitive element α +1.

## KN format

Format used the university of Kaiserslautern

http://www.uni-kl.de/channel-codes/channel-codes-database/non-binary-ldpc/

N lines (skipped in the c codes), where each line defines the CNs connected to a VN. CNs numbered from  1to M. The CN number is followed by the coefficient associated to connection defined as the power of the primitive element α 
one empty line

M lines, where each line defines the VNs connected to a CN. VNs numbered from  1to N. The CN number is followed by the coefficient associated to connection defined as the power of the primitive element α 



## BeiDou format

Beidou Navigation Satellite System (BDS) defines NB-LDPC codes in its B1C open service signal [1], B2a signal [2] and B2b signal [3]

M lines, where each line defines the VNs connected to a CN. VNs numbered from 0 to N-1.
one empty line.

M lines, where the multiplicative element associated to each connection is given by the decimal value  of the vector  representation of GF symbol







 [1] “BeiDou Navigation Satellite System, Signal In Space, Interface Control Document, Open Service Signals B1C (Version 1.0) ” China Satellite Navigation Office , December, 2017
 http://en.beidou.gov.cn/SYSTEMS/Officialdocument/201806/P020180608525871869457.pdf

 [2] “BeiDou Navigation Satellite System, Signal In Space, Interface Control Document, Open Service Signals B2a (Version 1.0) ” China Satellite Navigation Office , December, 2017
 http://en.beidou.gov.cn/SYSTEMS/Officialdocument/201806/P020180608525870555377.pdf

 [3] “BeiDou Navigation Satellite System Signal In Space Interface Control Document Open Service Signal B2b (Version 1.0)” China Satellite Navigation Office, July, 2020
 http://en.beidou.gov.cn/SYSTEMS/Officialdocument/202008/P020200803544811195696.pdf