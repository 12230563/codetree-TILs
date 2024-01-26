#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int m;

	// 입력
	cin >> m;
    
    // 출력
    if(m >= 12 || m <= 2)
		cout << "Winter";
	else if(m <= 5)
		cout << "Spring";
	else if(m <= 8)
		cout << "Summer";
	else
		cout << "Fall";
	
    return 0;
}