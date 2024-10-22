#include <stdio.h>
int main (){
int i,j,a,T[50][50],h;
a=1;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
       T[i][j]=a;
       a=a+1;
}
}
  printf( "\n\n");

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("\t%d",T[i][j]);
                                       
}
  printf( "\n\n");
}
printf( "\n");

for(i=0;i<4;i++){
   for(j=0;j<i;j++){
      h = T[i][j];
      T[i][j] = T[j][i];
      T[j][i] = h;
                                       
}
}

for(i=0;i<4;i++){
   for(j=0;j<4;j++){
       printf("\t%d",T[i][j]);
                                       
}
  printf( "\n\n");
}


}
