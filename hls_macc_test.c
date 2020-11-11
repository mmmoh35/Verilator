#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Vhls_macc.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include<string.h>

#define COL 20


vluint64_t main_time = 0;
double sc_time_stamp () {
return main_time;
}

int main(int argc, char **argv, char **env){
	  clock_t t;
	  t = clock();

Verilated::commandArgs(argc, argv);
Vhls_macc* top = new Vhls_macc;
while (!Verilated::gotFinish())
	{

	  FILE *fp;
	  fp=fopen("input_data.txt","r");
	  char line [ 1000 ];


	  int index=0;
	  int input[COL];
	  int i1=1,i;	  
	  while(!feof(fp))
		{
			fscanf(fp,"%s",line);
			//printf("%s\n",line);
			input[index]=atoi(line);
			index = (index+1)%COL;
			if(index==0){								
				int out131;
				int out301;
				int out311;
				int *out13=&out131;
				int *out30=&out301;
				int *out31=&out311;
				int *a1,*a2,*a3,*a4,*a5,*a6,*a7;
				int ap_clk=1;
				int ap_done=0;
				int ap_idle=0;
				int ap_ready=1;
				int ap_return=0;
				int ap_rst=1;
				int ap_start=1;
				a1=&ap_clk;
				a2=&ap_done;
				a3=&ap_idle;
				a4=&ap_ready;
				a5=&ap_return;
				a6=&ap_rst;
				a7=&ap_start;
				int dummy=0;	

}
}
  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
delete top;
exit(0);
}



}

