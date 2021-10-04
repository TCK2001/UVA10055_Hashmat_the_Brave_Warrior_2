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
	long long int a; //그냥 두가지 숫자 뺸 값 구하는거; 
	long long int b;
	while(cin>>a>>b)
	{ 
		cout<<abs(a-b)<<endl;
	}
	return 0;
}
