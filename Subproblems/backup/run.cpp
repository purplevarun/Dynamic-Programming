#include <bits/stdc++.h>
using namespace std;
string getExtension (string filename){
	string ext = "";
	reverse (filename.begin(), filename.end());
	for (char ch:filename){
		if (ch == '.')
			break;
		ext += ch;
	}
	reverse (ext.begin(), ext.end());
	return ext;
}
main (int len, char** args) {
	if (len == 1){
		cout << "No Files Supplied";
		return -1;
	}
	string filename = args[1];
	if (filename.find(".")==string::npos){
		cout << "File has no extension.. ";
		return -1;
	}
	string ext = getExtension(filename);
	//cout << ext << endl;
	string cmd;
	if (ext == "c" || ext == "cc" || ext == "cpp"){
		cmd = "g++ -std=c++14 -Wl,--stack=268435456 -Dvarun_debug " + filename + " && a.exe && del a.exe";
	}
	else if (ext == "py"){
		cmd = "python " + filename;
	}
	else if (ext == "java"){
		cmd = "java " + filename;
	}
	else if (ext == "js"){
		cmd = "node " + filename;
	}
	else {
		cout << "Extension not found..";
		return -1;
	}
	system (cmd.c_str());
}
