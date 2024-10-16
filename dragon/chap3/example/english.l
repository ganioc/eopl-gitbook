/* English -> American */

%%

"colour"  { printf("color"); }
"flavour" {  printf("flavor"); }
"clever"  {  printf("smart");  }
"smart"   {  printf("elegant"); }
"conservati" {  printf("liberal"); }
.            {  printf("%s", yytext); }

%%


