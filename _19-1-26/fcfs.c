#include<stdio.h>
void print(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int pNum, i;
	scanf("%d", &pNum);
	int at[pNum], bt[pNum], ct[pNum], tat[pNum], wt[pNum];
	for(i = 0; i < pNum; i++){
		scanf("%d", &at[i]);
	}
	for(i = 0; i < pNum; i++){
		scanf("%d", &bt[i]);
	}
	ct[0] = bt[0];
	for(i = 1; i < pNum; i++){
		ct[i] = ct[i - 1] + bt[i];
	}
	for(i = 0; i < pNum; i++){
                tat[i] = ct[i] - at[i];
        }
	for(i = 0; i < pNum; i++){
                wt[i] = tat[i] - bt[i];
        }
	print(at, pNum);
	print(bt, pNum);
	print(ct, pNum);
	print(tat, pNum);
	print(wt, pNum);
	for(i = 0; i < pNum; i++){
		if(i == 0) printf("Process|Arrival Time|Burst Time|Completion Time|TAT|Waiting Time\n");
		           printf("  %d   |      %d    |    %d    |        %d     | %d |     %d    \n", i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);
	}

}
