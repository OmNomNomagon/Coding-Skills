#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const string NumUnique[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", 
            "eighteen", "nineteen"};

const string NumTens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};


void Calcy(int N)
{
    int Num20, Num9, Num99, Num999, Num9999, Num99999;
    string output;
    Num20 = floor(N%100);
    Num9 = floor(N%10);
    Num99 =floor(N%100/10);
    Num999 = floor(N%1000/100);
    Num9999 = floor(N%10000/1000);
    
    //cout << N << " ";
    
    if (Num9999 > 0)
    {
        cout << NumUnique[Num9999] << " thousand ";
    }
    if (Num999 > 0)
    {
        cout << NumUnique[Num999] << " hundred "; 
    }
    if (Num999 > 0 && Num20 > 0)
    {
        cout << "and ";
    }
    if (Num99 > 1)
    {
        cout << NumTens[Num99] << " " << NumUnique[Num9];
    }
    if (Num20 < 20)
    {
        cout << NumUnique[Num20];
    }
    //cout << " " << Num20 << " "<< Num9 << " "<< Num99 << " " << Num999 << " "<< Num9999 << " ";
    cout <<endl;
}


int main() {
	//code

	int T, N;

	cin >> T;
    	for (int i = 0; i < T; i++)
    	{
    	    cin >> N;
    	    Calcy(N);
    	};
    	return 0;
}

