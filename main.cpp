#include "funcs.h"
#include <string>
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::vector;
using std::endl;

// std::cout << "hello world!" << std::endl;

// // Creating vector in c++
// std::vector <int> myVector;
// myVector.push_back(10);
// myVector.push_back(20);
// myVector.push_back(30);
// myVector.push_back(40);

// for (int i =0; i < myVector.size(); i++) {
//     std::cout << myVector[i] << std::endl;
// };
void printVector(const std::vector<int> &p)
{
for (int i : p)
    std::cout << i << " ";
std::cout << std::endl;
};
void printMakeVector(int n)
{
	vector<int> p = makeVector(n);
	cout << "Length of " << n << ": ";
	printVector(p);
}
void printGoodVibes(const vector<int> &p)
{
	printVector(p);
	printVector(goodVibes(p));
}
void printPair(const vector<int> a, const vector<int> b)
{
	printVector(a);
	printVector(b);
	printVector(sumPairWise(a, b));
}
void printFusion(vector<int> &goku, vector<int> &vegeta)
{
	printVector(goku);
	printVector(vegeta);
	gogeta(goku, vegeta);
	printVector(goku);
}

int main()
{
	cout << "Task A" << endl;
	printMakeVector(10);
	printMakeVector(5);
	printMakeVector(7);

	cout << "Task B" << endl;
	vector<int> t{1,2,3,-4,-5,-10,6};
    vector<int> t1{0,-9,2,3,4,-2, 4,-100,4};
    vector<int> t2{-2,-4,-6,-1,1};
	printGoodVibes(t);
	printGoodVibes(t1);
	printGoodVibes(t2);
	



	return 0;

}

    
    
