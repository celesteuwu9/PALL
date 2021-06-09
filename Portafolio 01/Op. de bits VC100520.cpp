#include <iostream>
#include <bitset>
using namespace std;

int main (){
	
	int x = 18;
	int y = 23;
	
	cout << "       Decimal   " << "      Binario  " << endl;
	cout <<"       "<< x << "            "<< bitset<41>(x)<<endl;
	cout <<"       "<< x << "            "<< bitset<41>(x)<<endl;
	
	int c = x & y ;
	cout <<"x & y: "  << c << "            "<< bitset<41>(c)<<endl;
	c = x | y;
	cout <<"x | y: "  << c << "            "<< bitset<41>(c)<<endl;
	c = x ^ y;
	cout <<"x ^ y: "  << c << "            "<< bitset<41>(c)<<endl;
	c = x << y;
	cout <<"x<< y: "  << c << "           "<< bitset<41>(c)<<endl;
	c == x >> y;
	cout <<"x>> y: "  << c << "           "<< bitset<41>(c)<<endl;
	
	return 0;
	
}
