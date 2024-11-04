/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf --switch=1 --language=ANSI-C --struct-type atoms.gperf  */
/* Computed positions: -k'1,3-4' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "atoms.gperf"
 /* -*- C -*- */
#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <m4module.h>
#include <stdint.h>
#include "numeral.h"
#line 11 "atoms.gperf"
struct atom_s
{
	const char *name;
	const uintmax_t value;
};

#define TOTAL_KEYWORDS 42
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 12
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 93
/* maximum key range = 89, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static unsigned char asso_values[] =
    {
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 10,  5, 94,
      20,  5,  0, 25, 20,  0, 94, 94, 40,  0,
       5, 25, 94, 20,  5,  0,  0,  5, 15, 94,
      40, 94,  0, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94, 94, 94, 94, 94,
      94, 94, 94, 94, 94, 94
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct atom_s *
in_word_set (register const char *str, register size_t len)
{
  static struct atom_s wordlist[] =
    {
#line 43 "atoms.gperf"
      {"fifty",     50},
#line 34 "atoms.gperf"
      {"fifteen",   15},
#line 29 "atoms.gperf"
      {"ten",       10},
#line 42 "atoms.gperf"
      {"forty",     40},
#line 41 "atoms.gperf"
      {"thirty",    30},
#line 32 "atoms.gperf"
      {"thirteen",  13},
#line 22 "atoms.gperf"
      {"four",   4},
#line 21 "atoms.gperf"
      {"three",  3},
#line 40 "atoms.gperf"
      {"twenty",    20},
#line 33 "atoms.gperf"
      {"fourteen",  14},
#line 27 "atoms.gperf"
      {"nine",   9},
#line 47 "atoms.gperf"
      {"ninety",    90},
#line 38 "atoms.gperf"
      {"nineteen",  19},
#line 23 "atoms.gperf"
      {"five",   5},
#line 25 "atoms.gperf"
      {"seven",  7},
#line 45 "atoms.gperf"
      {"seventy",   70},
#line 20 "atoms.gperf"
      {"two",    2},
#line 36 "atoms.gperf"
      {"seventeen", 17},
#line 30 "atoms.gperf"
      {"eleven",    11},
#line 19 "atoms.gperf"
      {"one",    1},
#line 18 "atoms.gperf"
      {"zero",   0},
#line 62 "atoms.gperf"
      {"quintillion",   1000000000000000000},
#line 63 "atoms.gperf"
      {"quintillions",  1000000000000000000},
#line 53 "atoms.gperf"
      {"thousand",      1000},
#line 52 "atoms.gperf"
      {"thousands",     1000},
#line 24 "atoms.gperf"
      {"six",    6},
#line 44 "atoms.gperf"
      {"sixty",     60},
#line 35 "atoms.gperf"
      {"sixteen",   16},
#line 58 "atoms.gperf"
      {"trillion",      1000000000000},
#line 59 "atoms.gperf"
      {"trillions",     1000000000000},
#line 31 "atoms.gperf"
      {"twelve",    12},
#line 49 "atoms.gperf"
      {"hundred",   100},
#line 50 "atoms.gperf"
      {"hundreds",  100},
#line 26 "atoms.gperf"
      {"eight",  8},
#line 46 "atoms.gperf"
      {"eighty",    80},
#line 37 "atoms.gperf"
      {"eighteen",  18},
#line 60 "atoms.gperf"
      {"quadrillion",   1000000000000000},
#line 61 "atoms.gperf"
      {"quadrillions",  1000000000000000},
#line 54 "atoms.gperf"
      {"million",       1000000},
#line 55 "atoms.gperf"
      {"millions",      1000000},
#line 56 "atoms.gperf"
      {"billion",       1000000000},
#line 57 "atoms.gperf"
      {"billions",      1000000000}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register struct atom_s *resword;

          switch (key - 5)
            {
              case 0:
                resword = &wordlist[0];
                goto compare;
              case 2:
                resword = &wordlist[1];
                goto compare;
              case 3:
                resword = &wordlist[2];
                goto compare;
              case 5:
                resword = &wordlist[3];
                goto compare;
              case 6:
                resword = &wordlist[4];
                goto compare;
              case 8:
                resword = &wordlist[5];
                goto compare;
              case 9:
                resword = &wordlist[6];
                goto compare;
              case 10:
                resword = &wordlist[7];
                goto compare;
              case 11:
                resword = &wordlist[8];
                goto compare;
              case 13:
                resword = &wordlist[9];
                goto compare;
              case 14:
                resword = &wordlist[10];
                goto compare;
              case 16:
                resword = &wordlist[11];
                goto compare;
              case 18:
                resword = &wordlist[12];
                goto compare;
              case 19:
                resword = &wordlist[13];
                goto compare;
              case 20:
                resword = &wordlist[14];
                goto compare;
              case 22:
                resword = &wordlist[15];
                goto compare;
              case 23:
                resword = &wordlist[16];
                goto compare;
              case 24:
                resword = &wordlist[17];
                goto compare;
              case 26:
                resword = &wordlist[18];
                goto compare;
              case 28:
                resword = &wordlist[19];
                goto compare;
              case 29:
                resword = &wordlist[20];
                goto compare;
              case 31:
                resword = &wordlist[21];
                goto compare;
              case 32:
                resword = &wordlist[22];
                goto compare;
              case 33:
                resword = &wordlist[23];
                goto compare;
              case 34:
                resword = &wordlist[24];
                goto compare;
              case 38:
                resword = &wordlist[25];
                goto compare;
              case 40:
                resword = &wordlist[26];
                goto compare;
              case 42:
                resword = &wordlist[27];
                goto compare;
              case 43:
                resword = &wordlist[28];
                goto compare;
              case 44:
                resword = &wordlist[29];
                goto compare;
              case 46:
                resword = &wordlist[30];
                goto compare;
              case 47:
                resword = &wordlist[31];
                goto compare;
              case 48:
                resword = &wordlist[32];
                goto compare;
              case 50:
                resword = &wordlist[33];
                goto compare;
              case 51:
                resword = &wordlist[34];
                goto compare;
              case 53:
                resword = &wordlist[35];
                goto compare;
              case 56:
                resword = &wordlist[36];
                goto compare;
              case 57:
                resword = &wordlist[37];
                goto compare;
              case 82:
                resword = &wordlist[38];
                goto compare;
              case 83:
                resword = &wordlist[39];
                goto compare;
              case 87:
                resword = &wordlist[40];
                goto compare;
              case 88:
                resword = &wordlist[41];
                goto compare;
            }
          return 0;
        compare:
          {
            register const char *s = resword->name;

            if (*str == *s && !strcmp (str + 1, s + 1))
              return resword;
          }
        }
    }
  return 0;
}
#line 64 "atoms.gperf"

uintmax_t numeral_convert(const char *str){
	const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	uintmax_t res = 0, hundreds = 0, pre_value = 0;

	while (str = strpbrk(str, alphabet)){
		size_t len = strspn(str, alphabet);
		struct atom_s *atom = in_word_set(str,len);
		if(!atom){
			numeral_error = strndup(str, len);
			return 0;
		}
		if(atom->value >= 1000){
			res += (hundreds?:1)*atom->value;
			hundreds = 0;
		}
		else if(pre_value <= atom->value){
			hundreds = (hundreds?:1)*atom->value;
		}
		else{
			hundreds += atom->value;
		}

		pre_value = atom->value;
		str += len;
	}

	return res + hundreds;

}




