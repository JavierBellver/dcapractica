#include <libintl.h>
#include<stdio.h>
#include <iostream>
using namespace std;

#define _(x) gettext(x)
int main() {
	string DEVELOPMENT_MODE   ="ON";
	string GETTEXT_PACKAGE    = "saludador";
	string PACKAGE_LOCALE_DIR ="/usr/local/share/locale/";
	string PROJECT_DIR ="/home/jb/DCA/Practica8";

	string localedir;

	if (DEVELOPMENT_MODE == "ON") { // App not installed,
                localedir = "./po";
        } else {
                localedir = PACKAGE_LOCALE_DIR;
        }
	setlocale (LC_MESSAGES, "");
	bindtextdomain (GETTEXT_PACKAGE.c_str(), localedir.c_str());
	bind_textdomain_codeset (GETTEXT_PACKAGE.c_str(), "UTF-8");
	textdomain (GETTEXT_PACKAGE.c_str());
	cout << (_("saludo\n"))
	cout << (_("despedida\n"));
	return 0;
}
