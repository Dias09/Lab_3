#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
using namespace std;
int main()
{
	int n;
	cout <<"Число в диапазоне от 1 до 100"<<endl;
	cin >> n;
	if (n>=11 && n<=14) {
		locale loc("ru_RU.UTF-8");
		wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec;
		string s = "В караване было  верблюдов";
		wstring ws = codec.from_bytes(s);
		ws.insert(16, to_wstring(n));
		s = codec.to_bytes(ws);
		cout<< s <<endl;
	}
	if (n%10==1 && n!=11) {
		locale loc("ru_RU.UTF-8");
		wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec;
		string s = "В караване было  верблюдов";
		wstring ws = codec.from_bytes(s);
		ws.erase(14,1);
		ws.erase(23,2);
		ws.insert(15, to_wstring(n));
		s = codec.to_bytes(ws);
		cout<< s <<endl;
	}
	if (n%10==5 || n%10==6 || n%10==7 || n%10==8 || n%10==9 || n%10==0) {
		locale loc("ru_RU.UTF-8");
		wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec;
		string s = "В караване было  верблюдов";
		wstring ws = codec.from_bytes(s);
		ws.insert(16, to_wstring(n));
		s = codec.to_bytes(ws);
		cout<< s <<endl;
	}
	if ((n%10==2 || n%10==3 || n%10==4) && (n!=12 && n!=13 && n!=14)) {
		locale loc("ru_RU.UTF-8");
		wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec;
		string s = "В караване было  верблюдов";
		wstring ws = codec.from_bytes(s);
		ws.erase(24,2);
		ws.push_back(L'а'); 
		ws.insert(16, to_wstring(n));
		s = codec.to_bytes(ws);
		cout<< s <<endl;
	}
	return 0;
}
