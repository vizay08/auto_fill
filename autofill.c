///////auto fill///

#include<stdio.h>
#include<conio.h>
void addtoarray(char *array,char ele,int index)
{
     array[index]=ele;
 }
 void autofill(char *to,char from[4][4],int max)
 {
      int i,j;

      for(i=0;i<6;i++)
      for(j=0;(j<max)&&(from[i][j]==to[j]);j++)
      {
                                    int k;
                       if((j==(max-1))&&(from[i][j]==to[j]))
                       {
                                   
                                   for(k=0;k<4;k++)
                                   {
                                                          printf("%c",from[i][k]);
                                                  
                                   
                                   }
                                   printf("\n");
                       }             
                                   else if(j<max&&from[i][j]!=to[j])
                                   break;
                                   else 
                                   continue;
      }
      
  }
 void printarray(char *array,int max)
 {
      int i;
 
      for(i=0;i<max;i++)
      printf("%c",array[i]);
  }
int main()
{
    char array[100];
    int i=0,t,k;
    char ele;
   
   char a[6][5]={'a','a','b','y','a','a','c','y','a','b','b','c','b','a','b','a','d','a','d','a'};
   printf("Press 0 to exit and 9 for deleting the last character\n");
    while(ele!='0'){
         
        scanf("%c",&ele);
   
        if((ele=='9')&&(i!=0)&(ele!='\n'))
        {
                                          
                             i=i-1;
                             //system("cls");
                                                      
        }
        else if(ele!='9'&&(ele!='\n')&&ele!='0')
        {
             addtoarray(array,ele,i++);
            // system("cls");
                
         }
         else if(ele=='\n')
         {
              system("cls");
                   printarray(array,i);
        printf("\n");
        autofill(array,a,i);
                 }
         
    }
   
    getch();
    return 0;
}
