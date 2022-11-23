
#include <stdio.h>

int main() 
{
    int phy,che,math,eng,hin,avg ;
    printf("-----to calculte average of 5 subject-----\n");
  
    printf("enter marks of physics\n");
    scanf("%d",&phy);
    printf("enter marks of chemistry\n");
    scanf("%d",&che);
    printf("enter marks of math\n");
    scanf("%d",&math);
    printf("enter marks of english\n");
    scanf("%d",&eng);
    printf("enter marks of hindi\n");
    scanf("%d",&hin);
    avg = (phy+che+hin+eng+math)/5 ;
    if (avg >= 60)
      printf("1st division",avg);
      else if 
      (avg>= 50 && avg <= 59)
      printf("2nd division",avg);
      else if
      (avg >= 40 && avg <= 49)
      printf("3rd Division");
      else if (avg<40)
		printf("Fail");
 
}
