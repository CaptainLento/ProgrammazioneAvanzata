//============================================================================
// Name        : pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <memory>


class miao{
	int n;
public:
	miao(int a){
		n = a;
	}
	void miagola(){
		cout<<n<<endl;
	}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
	{
		unique_ptr<miao> micao (new miao(2));
		micao->miagola();
		micao.reset();

		miao* micio2 = new miao(3);
		micio2->miagola();

	}
}
