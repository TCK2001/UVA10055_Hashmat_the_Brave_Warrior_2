/*
Sample Input
10 12
10 14
100 200
Sample Output
2
4
100
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	long long int a; //�׳� �ΰ��� ���� �A �� ���ϴ°�; 
	long long int b;
	while(cin>>a>>b)
	{ 
		cout<<abs(a-b)<<endl;
	}
	return 0;
}
