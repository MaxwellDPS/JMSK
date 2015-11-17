//==========================================================================
// Name:            varicode_table.h
// Purpose:         Varicode look up table
// Created:         Nov 24, 2012
// Authors:         Clint Turner, KA7OEI,  Peter Martinez, G3PLX
// 
// License:
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.1),
//  as published by the Free Software Foundation.  This program is
//  distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
//  License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, see <http://www.gnu.org/licenses/>.
//
//==========================================================================

/* The following table defines the PKS31 varicode.  There are 128 entries,
corresponding to ASCII characters 0-127 with two bytes for each entry.  The bits
for the varicode are to be shifted out MSB-first for both bytes, with the first byte
in the table being the first one to be sent.

More than one zero in sequence signifies the end of the character (i.e.
two zeroes are the intercharacter sequence, so at least two zeroes should always be
sent before the next character is sent.

This file is constructed with information from the article "PSK31 Fundamentals"
by Peter Martinez, G3PLX by Clint Turner, KA7OEI
*/

// Internal Macros
#define HEX__(n) 0x##n##LU
#define B8__(x) ((x&0x0000000FLU)?1:0) +((x&0x000000F0LU)?2:0) +((x&0x00000F00LU)?4:0) +((x&0x0000F000LU)?8:0) +((x&0x000F0000LU)?16:0) +((x&0x00F00000LU)?32:0) +((x&0x0F000000LU)?64:0) +((x&0xF0000000LU)?128:0)

// User-visible Macros
#define B8(d) ((unsigned char)B8__(HEX__(d)))

unsigned char const varicode_table1[256] =	{
    B8(10101010),
    B8(11000000), // 0 NUL
    B8(10110110),
    B8(11000000), // 1 SOH
    B8(10111011),
    B8(01000000), // 2 STX
    B8(11011101),
    B8(11000000), // 3 ETX
    B8(10111010),
    B8(11000000), // 4 EOT
    B8(11010111),
    B8(11000000), // 5 ENQ
    B8(10111011),
    B8(11000000), // 6 ACK
    B8(10111111),
    B8(01000000), // 7 BEL
    B8(10111111),
    B8(11000000), // 8 BS
    B8(11101111),
    B8(00000000), // 9 HT
    B8(11101000),
    B8(00000000), // 10 LF
    B8(11011011),
    B8(11000000), // 11 VT
    B8(10110111),
    B8(01000000), // 12 FF
    B8(11111000),
    B8(00000000), // 13 CR
    B8(11011101),
    B8(01000000), // 14 SO
    B8(11101010),
    B8(11000000), // 15 SI
    B8(10111101),
    B8(11000000), // 16 DLE
    B8(10111101),
    B8(01000000), // 17 DC1
    B8(11101011),
    B8(01000000), // 18 DC2
    B8(11101011),
    B8(11000000), // 19 DC3
    B8(11010110),
    B8(11000000), // 20 DC4
    B8(11011010),
    B8(11000000), // 21 NAK
    B8(11011011),
    B8(01000000), // 22 SYN
    B8(11010101),
    B8(11000000), // 23 ETB
    B8(11011110),
    B8(11000000), // 24 CAN
    B8(11011111),
    B8(01000000), // 25 EM
    B8(11101101),
    B8(11000000), // 26 SUB
    B8(11010101),
    B8(01000000), // 27 ESC
    B8(11010111),
    B8(01000000), // 28 FS
    B8(11101110),
    B8(11000000), // 29 GS
    B8(10111110),
    B8(11000000), // 30 RS
    B8(11011111),
    B8(11000000), // 31 US
    B8(10000000),
    B8(00000000), // 32 SP
    B8(11111111),
    B8(10000000), // 33 !
    B8(10101111),
    B8(10000000), // 34 "
    B8(11111010),
    B8(10000000), // 35 #
    B8(11101101),
    B8(10000000), // 36 $
    B8(10110101),
    B8(01000000), // 37 %
    B8(10101110),
    B8(11000000), // 38 &
    B8(10111111),
    B8(10000000), // 39 '
    B8(11111011),
    B8(00000000), // 40 (
    B8(11110111),
    B8(00000000), // 41 )
    B8(10110111),
    B8(10000000), // 42 *
    B8(11101111),
    B8(10000000), // 43 +
    B8(11101010),
    B8(00000000), // 44 ,
    B8(11010100),
    B8(00000000), // 45 -
    B8(10101110),
    B8(00000000), // 46 .
    B8(11010111),
    B8(10000000), // 47 /
    B8(10110111),
    B8(00000000), // 48 0
    B8(10111101),
    B8(00000000), // 49 1
    B8(11101101),
    B8(00000000), // 50 2
    B8(11111111),
    B8(00000000), // 51 3
    B8(10111011),
    B8(10000000), // 52 4
    B8(10101101),
    B8(10000000), // 53 5
    B8(10110101),
    B8(10000000), // 54 6
    B8(11010110),
    B8(10000000), // 55 7
    B8(11010101),
    B8(10000000), // 56 8
    B8(11011011),
    B8(10000000), // 57 9
    B8(11110101),
    B8(00000000), // 58 :
    B8(11011110),
    B8(10000000), // 59 ;
    B8(11110110),
    B8(10000000), // 60 <
    B8(10101010),
    B8(00000000), // 61 =
    B8(11101011),
    B8(10000000), // 62 >
    B8(10101011),
    B8(11000000), // 63 ?
    B8(10101111),
    B8(01000000), // 64 @
    B8(11111010),
    B8(00000000), // 65 A
    B8(11101011),
    B8(00000000), // 66 B
    B8(10101101),
    B8(00000000), // 67 C
    B8(10110101),
    B8(00000000), // 68 D
    B8(11101110),
    B8(00000000), // 69 E
    B8(11011011),
    B8(00000000), // 70 F
    B8(11111101),
    B8(00000000), // 71 G
    B8(10101010),
    B8(10000000), // 72 H
    B8(11111110),
    B8(00000000), // 73 I
    B8(11111110),
    B8(10000000), // 74 J
    B8(10111110),
    B8(10000000), // 75 K
    B8(11010111),
    B8(00000000), // 76 L
    B8(10111011),
    B8(00000000), // 77 M
    B8(11011101),
    B8(00000000), // 78 N
    B8(10101011),
    B8(00000000), // 79 O
    B8(11010101),
    B8(00000000), // 80 P
    B8(11101110),
    B8(10000000), // 81 Q
    B8(10101111),
    B8(00000000), // 82 R
    B8(11011110),
    B8(00000000), // 83 S
    B8(11011010),
    B8(00000000), // 84 T
    B8(10101011),
    B8(10000000), // 85 U
    B8(11011010),
    B8(10000000), // 86 V
    B8(10101110),
    B8(10000000), // 87 W
    B8(10111010),
    B8(10000000), // 88 X
    B8(10111101),
    B8(10000000), // 89 Y
    B8(10101011),
    B8(01000000), // 90 Z
    B8(11111011),
    B8(10000000), // 91 [
    B8(11110111),
    B8(10000000), // 92 "\"
    B8(11111101),
    B8(10000000), // 93 ]
    B8(10101111),
    B8(11000000), // 94 ^
    B8(10110110),
    B8(10000000), // 95 _ (underline)
    B8(10110111),
    B8(11000000), // 96 `
    B8(10110000),
    B8(00000000), // 97 a
    B8(10111110),
    B8(00000000), // 98 b
    B8(10111100),
    B8(00000000), // 99 c
    B8(10110100),
    B8(00000000), // 100 d
    B8(11000000),
    B8(00000000), // 101 e
    B8(11110100),
    B8(00000000), // 102 f
    B8(10110110),
    B8(00000000), // 103 g
    B8(10101100),
    B8(00000000), // 104 h
    B8(11010000),
    B8(00000000), // 105 i
    B8(11110101),
    B8(10000000), // 106 j
    B8(10111111),
    B8(00000000), // 107 k
    B8(11011000),
    B8(00000000), // 108 l
    B8(11101100),
    B8(00000000), // 109 m
    B8(11110000),
    B8(00000000), // 110 n
    B8(11100000),
    B8(00000000), // 111 o
    B8(11111100),
    B8(00000000), // 112 p
    B8(11011111),
    B8(10000000), // 113 q
    B8(10101000),
    B8(00000000), // 114 r
    B8(10111000),
    B8(00000000), // 115 s
    B8(10100000),
    B8(00000000), // 116 t
    B8(11011100),
    B8(00000000), // 117 u
    B8(11110110),
    B8(00000000), // 118 v
    B8(11010110),
    B8(00000000), // 119 w
    B8(11011111),
    B8(00000000), // 120 x
    B8(10111010),
    B8(00000000), // 121 y
    B8(11101010),
    B8(10000000), // 122 z
    B8(10101101),
    B8(11000000), // 123 {
    B8(11011101),
    B8(10000000), // 124 |
    B8(10101101),
    B8(01000000), // 125 }
    B8(10110101),
    B8(11000000), // 126 ~
    B8(11101101),
    B8(01000000) // 127 (del)
};

// This code was used on FDMDV version 1), and is more compact that Code 1), but only covers a subset
// of the ASCII cahacter set
 
char const varicode_table2[] = {

    ' ' ,B8(11000000),
    13  ,B8(01000000), // CR, end of message
    '=' ,B8(10000000),
    '1' ,B8(11110000),
    '2' ,B8(01110000),
    '3' ,B8(10110000),
    '4' ,B8(11010000),
    '5' ,B8(01010000),
    '6' ,B8(10010000),
    '7' ,B8(11100000),
    '8' ,B8(01100000),
    '9' ,B8(10100000),
    'a' ,B8(11111100),
    'b' ,B8(01111100),
    'c' ,B8(10111100),
    'd' ,B8(11011100),
    'e' ,B8(01011100),
    'f' ,B8(10011100),
    'g' ,B8(11101100),
    'h' ,B8(01101100),
    'i' ,B8(10101100),
    'j' ,B8(11110100),
    'k' ,B8(01110100),
    'l' ,B8(10110100),
    'm' ,B8(11010100),
    'n' ,B8(01010100),
    'o' ,B8(10010100),
    'p' ,B8(11100100),
    'q' ,B8(01100100),
    'r' ,B8(10100100),
    's' ,B8(11111000),
    't' ,B8(01111000),
    'u' ,B8(10111000),
    'v' ,B8(11011000),
    'w' ,B8(01011000),
    'x' ,B8(10011000),
    'y' ,B8(11101000),
    'z' ,B8(01101000),
    '0' ,B8(10101000)
};
