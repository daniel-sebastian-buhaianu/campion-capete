#include <fstream>
using namespace std;
int main()
{
	ifstream f("capete.in");
	int n;
	f >> n;
	f.close();
	ofstream g("capete.out");
	g << n*5;
	g.close();
	return 0;
}

