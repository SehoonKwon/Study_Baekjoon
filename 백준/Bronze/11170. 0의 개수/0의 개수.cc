#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
		int N, M;
		cin >> N >> M;
		
		int cnt = 0;
		for(int i=N; i<=M; i++){
			string str = to_string(i);
			for(int j=0; j<str.size(); j++)
				if(str[j] == '0') cnt++;
		}
		cout<<cnt<<"\n";
	}
	return 0;
}