#include<iostream>

using namespace std;

int sum(int n, int m){
	cout << n + m << endl;
	return 0;
}

int main(){
	//3��
	int n, m;
	cin >> n >> m;
	// ���ϱ�
	sum(n,m);
	// ����
	cout << n - m << endl;
	// ���ϱ�
	cout << n * m << endl;
	//������
	cout << n / m << endl;

}