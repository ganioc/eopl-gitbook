/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf rude-1.gperf  */
/* Computed positions: -k'' */

#line 1 "rude-1.gperf"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_KEYWORDS 5
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 18
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 18
/* maximum key range = 18, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
hash (register const char *str, register size_t len)
{
  return len;
}

const char *
in_word_set (register const char *str, register size_t len)
{
  static const char * wordlist[] =
    {
      "",
      "\015",
      "", "",
      "f*k\015",
      "sh*t\015",
      "", "",
      "win*ows\015",
      "", "", "", "", "", "", "", "", "",
      "Huh? What the f*?\015"
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key];

          if (*str == *s && !strcmp (str + 1, s + 1))
            return s;
        }
    }
  return 0;
}
#line 12 "rude-1.gperf"

int main(int argc,const char**argv){
	for (--argc, ++argv; argc; --argc, ++argv){
		if(in_word_set(*argv, strlen(*argv))){
			printf("I dont like you saying '%s'.\n",*argv);
		}else{
			printf("Huh? What the f* '%s'?\n", *argv);
		}

	}

	return 0;
}

