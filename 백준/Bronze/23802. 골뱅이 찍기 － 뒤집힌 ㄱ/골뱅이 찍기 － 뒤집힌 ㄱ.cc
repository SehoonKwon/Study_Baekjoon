#include <iostream>
using namespace std;

int Array[501][501];

int main() {
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++)
		for(int j=1; j<=N*5; j++)
			Array[i][j]=1;
	
	for(int i=1; i<=N*5; i++)
		for(int j=1; j<=N; j++)
			Array[i][j] = 1;
	
	for(int i=1; i<=N*5; i++){
		for(int j=1; j<=N*5; j++){
			if(Array[i][j] == 1) cout<<"@";
		}
		cout<<"\n";
	}
	
	return 0;
}