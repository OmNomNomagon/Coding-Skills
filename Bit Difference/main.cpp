#include<iostream>
#include<bitset>
using namespace std;

int main()
 {
    const int MAX = 12;
	int T, A, B;
    
    cin >> T;
	for (int i = 0; i < T; i++)
	{
	    cin >> A >> B;
	    int Tot = 0;
	    string aStr = bitset<MAX>(A).to_string();
	    string bStr = bitset<MAX>(B).to_string();
	    //cout << A << " " <<aStr << " " << B << bStr <<endl;
	    for (int j = 0; j < MAX; j++)
	    {
	        //cout << aStr[0] <<endl;
	        if (aStr[j] != bStr[j])
	        {
	            Tot++;
	        }
	    }
	  	cout << Tot <<endl;
	}
	return 0;
}
