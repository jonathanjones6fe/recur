#include <iostream>

using namespace std;

int digitSum(int num) {
	int sum = 0;
	if (num == 0)
		return num;
    sum += (num % 10) + digitSum(num / 10);
    return sum;
}

int main() {
	cout<<digitSum(1364)<<endl;
	cout<<digitSum(1234)<<endl;
	cout<<digitSum(6)<<endl;
	cout<<digitSum(12)<<endl;
	cout<<digitSum(13643)<<endl;
	cout<<digitSum(136)<<endl;
	cout<<digitSum(0)<<endl;
	cout<<digitSum(-1)<<endl;
	cout<<digitSum(-50)<<endl;
	cout<<digitSum(-523)<<endl;
	
}
