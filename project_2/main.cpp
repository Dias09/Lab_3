#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s="deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\
ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\
ndeb http://security.debian.org/ stretch/updates main contrib non-free\
ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\
ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\
ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\
ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\
ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
	string m="mephi", y="yandex";
	for (unsigned int i=0; i<s.length(); i++) {
		if (s.substr(i, m.length()) == m)
			s.replace(i, m.length(), y);
	}
	cout<<s<<endl;
	return 0;
}
