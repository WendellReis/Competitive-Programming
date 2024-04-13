#include <bits/stdc++.h>

using namespace std;

#define MAXN 100001

int n;
int qtd = 0;

int vetor[MAXN], aux[MAXN];

void merge_sort(int ini, int fim){
	
	if(ini==fim) return;
	
	merge_sort(ini, (ini+fim)/2);
	merge_sort((ini+fim)/2+1, fim);
	
	int tam=0;
	int j=(ini+fim)/2+1;
	
	for(int i=ini; i<=(ini+fim)/2; i++){
		while(j<=fim && vetor[j]<vetor[i]){
            qtd++;
            aux[tam]=vetor[j];
            tam++;
            j++;
		}
		aux[tam]=vetor[i];
		tam++;
	}
	
	while(j<=fim) {
		aux[tam]=vetor[j];
		j++;
		tam++;
	}
	
	for(int i=ini; i<=fim; i++) vetor[i]=aux[i-ini];
}

int main() {
	cin >> n;
	
	for(int i=1; i<=n; i++) scanf("%d", &vetor[i]);
	
	merge_sort(1, n);
	cout << qtd << "\n";
	
	return 0;
}