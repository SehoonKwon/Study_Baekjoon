#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int sum = 0;
	for(int i=0; i<N; i++){
		char c;
		cin >> c;
		sum += (c-'A') + 1;
	}
	cout<<sum;
	return 0;
}