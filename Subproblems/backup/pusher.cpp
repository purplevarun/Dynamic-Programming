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
	string msg = "";
	if (len == 1){
		msg = ".";
	}
	else {
		for (int i=1;i<len;++i){
			msg += args[i];
			if (i<len-1)
				msg+= "-";
		}
	}
	string commit_msg = "git commit -am " + msg;
	system ("git add .");
	system (commit_msg.c_str());
	system ("git push");
}
