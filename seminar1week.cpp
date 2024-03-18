#include<iostream>

using namespace std;

int sum(int n, int m){
	cout << n + m << endl;
	return 0;
}

int main(){
	//3번
	int n, m;
	cin >> n >> m;
	// 더하기
	sum(n,m);
	// 빼기
	cout << n - m << endl;
	// 곱하기
	cout << n * m << endl;
	//나누기
	cout << n / m << endl;

}