#include<iostream>
#include<string>
#include<bitset>


using namespace std;
int main()
 {
    int T, N, Tot;
    cin >> T;
    for(int i = 0; i < T ;i++)
    {
        cin >> N;
        Tot = 0;
        for (int j = N; j >0; j--)
        {
            Tot = Tot + bitset<16>(j).count();   
            //cout << Tot << " " << bitset<8>(j) <<" ";
        }
        cout << Tot <<endl;
    }
	return 0;
}
