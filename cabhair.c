/* 
  This is a short program developers can use to create a database of words.
  See the Makefile target "focail.bs" for usage.

  Copyright (C) 2003 Kevin P. Scannell <scannell@slu.edu>
 
 This is free software; see the file COPYING for copying conditions.  There is
 NO warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

#if STDC_HEADERS
#include <stdio.h>
#include <string.h>
#else
/* trouble */
#endif

int main()
   {
    const char unusedcode='\n';
    char token[32], prev[32];   /* ngearr-chlóscríobhneoireachta  has 28 */
    int code,m;
    char codec;
    scanf("%s", prev);
    scanf("%d", &code);   codec = (char) code;
    printf("%s%c%c",prev,unusedcode,codec); 
    while (scanf("%s", token) != EOF) {
          scanf("%d", &code);   codec = (char) code;
	  if (!strcmp(prev,token)) {
	         printf("%c",codec);
	        }
          else {
	        m=0;
	        while (prev[m]) {
		     if (prev[m]==token[m]) m++;
		     else break;
		    }
	        printf("%c%d%s%c%c",unusedcode,m,token+m,unusedcode,codec); 
	        strcpy(prev,token);
	       }
         }
    return 0;
   }
