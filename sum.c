#include <stdio.h>
#include <math.h>

main() {
	int n[100] = {0, };
	int i;
	float sum=0, mean=0, var=0;
	
	for(i=0; i<100; i++) {
		n[i] = i+1;
	}
	
	for(i=0; i<100; i++) {
		sum += n[i];
	}
	
	printf("sum : %.2f\n", sum);
	
	// ��� ���ϱ� 
	mean = sum/100;
	printf("mean : %.2f\n", mean);
	
	// �л� ���ϱ�
	for(i=0; i<100; i++) {
		var += (n[i]-mean)*(n[i]-mean);
	}
	var = var/100;
	printf("mean : %.5f\n", var);
	
	// ǥ������ ���ϱ� 
	printf("std : %.5f\n", sqrt(var));
}
