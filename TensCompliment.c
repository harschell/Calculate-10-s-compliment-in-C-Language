//C program for calculate 10's compliment in C Language by //following the following formula, (10n - number), where n = number //of digits in the number.
 
#include<stdio.h>
int power(float x, int y)
{
	int temp;
	if( y == 0)
	return 1;
	temp = power(x, y/2);	 
	if (y%2 == 0)
		return temp*temp;
	else
	{
		if(y > 0)
			return x*temp*temp;
		else
			return (temp*temp)/x;
	}
} 
int main(){
  //calculate 10's compliment in C Language by following the following formula, (10n - number), where n = number of digits in the number.
  int num, n=0, ten=10,t_Power, res10sCompliment;
  //printf("Enter a number: "); //You can uncomment his and read the number from terminal
 // scanf("%d",&num);
  
  num = 456; // I have hardcodedly assigne a fixed number say 456
  for(;num!=0;num=num/10)
  n++; // find n = number of digits in the number "num"
  printf("Total digits are:  %d \n",n);
  
  //Now caculate 10's compliement of "num"
   
    //printf("%f \n t_Power ", t_Power);
	//getchar();
    t_Power = power(ten, n);
    res10sCompliment = t_Power - num;
	//printf("%d", power(ten, n)); 
    printf("res10sCompliment = %d", res10sCompliment);
    
	getchar();
    
  return 0;
}
