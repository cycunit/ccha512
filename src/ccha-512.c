/**********************************************************************
* FILENAME:  ccha-512.c       LICENCE: GNU General Public License v3.0
*
* DESCRIPTION:
*       Source Code for hashing algorithm "ccha-512"
*
* NOTES:
*	Special expert hashing algorithm, 
*       only use when you know what your doing!
*       
* AUTHOR:    cybercunt.net        START DATE :    27. Aug 2019
*
* VERSION:   1.0 Stable
*
*/

#define HIGH_SECURITY 1

#include <stdio.h>

int main(int argc, char * argv[]) {

printf("ccha-512 hashing algorithm - cybercunt.net \n");    
printf("          _                  _____ __ ___  \n");
printf("         | |                | ____/_ |__ \\ \n");
printf("  ___ ___| |__   __ _ ______| |__  | |  ) |\n");
printf(" / __/ __| '_ \\ / _` |______|___ \\ | | / / \n");
printf("| (_| (__| | | | (_| |       ___) || |/ /_ \n");
printf(" \\___\\___|_| |_|\\__,_|      |____/ |_|____|\n\n");                                 
                                          
  char * fn;
  FILE * fp;

  if (argc < 2) {
    printf("No File input given, please supply valid file as first commandline argument!\n");
    return (1);
  } else {
    fn = argv[1];
    printf("Calculating has value for file: %s ...\n", fn);
  }

  fp = fopen(fn, "r");

  if (fp) {
    fseek(fp, 0, SEEK_END) + 1;
    int length = (ftell(fp) * 1000) % 512;
    printf("CALCULATED HASH VALUE: %03d\n", length);
  } else {
    printf("File invalid, please supply valid file as first commandline argument!\n");
  }

  return (0);
}

