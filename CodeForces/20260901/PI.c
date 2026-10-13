/********************************
*  PI     						*
*********************************/
#include<stdio.h>
#include <stdbool.h>

#define MAX 1001

int A[MAX];

void solve()
{
	int N;
	scanf("%d", &N);
	
	for(int i=0 ; i<N ;i++ )
	{
		scanf("%d",&A[i]);
	}
	//N是奇數一定有解 
	if(N%2 !=0)
	{
		printf("Yes\n");
		return;
	}
	//N是偶數
	int min = 0;
	bool possible = true;
	
	for(int i=0 ;i < N-1 ; i+=2)
	{
		min += A[i]-A[i+1];
		
		if(min <0 &&  i + 2 < N) 
			possible = false;
		
	}
	
	if( possible && min == 0 )
	{
		printf("Yes\n");
	}else
	{
		printf("No\n");
	}
	
	
}


int main(void)
{
	int T;
	if(scanf("%d",&T)==1)
	{
		while(T>0)
		{
			solve();
			T--;
		}
	} 
	return 0;

 }
