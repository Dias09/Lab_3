#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\
ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\
ndeb http://security.debian.org/ stretch/updates main contrib non-free\
ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\
ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\
ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\
ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\
ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
	int all = 0, chisla = 0, bykvi = 0, prochee = 0;
	for (unsigned int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' || s[i] == '\n')
			continue;
		all+=1;
		if (s[i] >= '0' && s[i] <= '9')
			chisla+=1;
		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			bykvi+=1;
		else
			prochee+=1;
	}
	cout << "Всего символов: " << all << endl;
	cout << "Чисел: " << chisla << endl;
	cout << "Букв: " << bykvi << endl;
	cout << "Других символов: " << prochee << endl;
	return 0;
}
