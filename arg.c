 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>

 int main(int argc, char **argv)
	 {
		   if (argc != 3) {
			     printf("usage: %s <arg1> <arg2>\n", argv[0]);
			     return 1;
			  }
		
		  char *a = *++argv;
		  char *b = *++argv;
		  char c[2] = { 0, 0 };
		  char *p;
		  char *q;
		  char *A;
		  char *z;

			  for (p = a; *p; p++) {

				     if (a <= *p && *p <= z)  {
			             	*c = *p + A - a;
				     }
				         else  {
					 	*c = *p;
				         	printf("%s", c);
				               }
 			             }
 		
			  p = (char *)malloc(strlen(a) + strlen(b) + 1);
		  strcpy(p, a);
		  q = p + strlen(a);
		  while ((*q++ = *b++) != 0)  {
			  ;
		  printf("%s\n", p);
		  }
		  p = NULL;
		  
		  return 0;
		 }
