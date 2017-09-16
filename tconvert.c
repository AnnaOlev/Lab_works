#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fahrenheit(float x)
{
	float t1,t2;
	if (x<-459.67) {
		printf("Are you sure?\n");
	}
	else 
	{
		t1=(x-32)/1.8;
		t2=(x+459.67)/1.8;
		printf("%.2f C\n",t1);
		printf("%.2f K\n",t2);
	}
}

int celsius(float x)
{
	float t1,t2;
	if (x<-273.15) {
		printf("Are you sure?\n");
	}
	else
	{
		t1=x*1.8+32;
		t2=x+273.15;
		printf("%.2f F\n",t1);
		printf("%.2f K\n",t2);
	}
	
}

int kelvin(float x)
{
	float t1,t2;
	if (x<0) {
		printf("Are you sure?\n");
	}
	else
	{
		t1=x*1.8-459.67;
		t2=x-273.15;
		printf("%.2f F\n",t1);
		printf("%.2f C\n",t2);
	}
}	

int main(int argc, char *argv[])
{
	float temp = atof(argv[1]);
	if (argc==2)
	{
		printf("%.2f F:\n",temp);
		fahrenheit(temp);
		printf("%.2f C:\n",temp);
		celsius(temp);
		printf("%.2f K:\n",temp);
		kelvin(temp);
	}
	else if (argc==3)
	{
		if (strcmp(argv[2], "C") == 0) {
              		celsius(temp);
		}
		else if (strcmp(argv[2], "F") == 0) {
              		fahrenheit(temp);
		}
		else if (strcmp(argv[2], "K") == 0) {
              		kelvin(temp);
		}
	}
}
