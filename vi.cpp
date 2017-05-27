#include <iostream>
#include <stdio.h>
#include<unistd.h>
#include<fstream>
#include<vector>
using namespace std;
/*
//////////////////////////////////////////////////
///*post scriptum                </////////
///run terminal mode cstr + c then try this
//dd > hello.sh         - create sh file (stdin)
// cstr + d                 -save and exit (write)
//
//dd < hello.sh         -read hello.sh (stdout)
////  
/// ./hello.sh             -run and compile
it works
*/
class VI {
	public:
	struct dane
	{
		char *name[30];
		string nam3;
		string text;
		vector <string> txt;
	};
	struct dd {
		string txt;
	};
	VI(){
		bool done=false;
		menu(done);
	}
	~VI()
	{
		
		}
		private:
		int a=32;
		int MAN() {
		
vector <string > v1;
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");		
						}
char asc[32][64]{
	{"`                        "},
	{"`                        "},
	{"`          vi           "},
	{"` Crtl + C - Quit   "},
	{"` Crtl + S - Save  "},
	{"` Crtl + Z - Close "},
	{"`     1.load                     "},
	{"`        2. New file                  "},
	{"`             3. pokaz pliki folderu biezacego -ls             "},
	{"`                   4.zapis       "},
	{"`                          "}
};
void printForm() {
	for (int i=0; i<11; i++)
	
	cout << asc[i]<< endl << endl;
	
}
int menu (bool done)
{
	char key;
done=false;
	char *path;
  char* mode;
	dane *plik;
	int argc;
	char *argv[argc];
	printForm();
	cin>>key;
	switch (key) {
		case 27 : done= true; break;
		case '1':load (); break;
	     case '2': edit();break;
	 case '3' : ls();break;
	 case '4' : zapis();break;
	 case '5' : buiderload(); break;
	// case '5' : edit(); break;
	 
	}	
if (!done) {return menu(done);}
else return 1;	

	}
	
int ls()
   	{
		system("/system/bin/ls");
		}
int buiderload()
{
	dd pl;
	string nam;
	cin>>nam;
	ofstream outfile(nam.c_str(), ios::app);
	cin>>pl.txt;
	outfile <<pl.txt;
	outfile.close();
}
int load( )
{
	char text[99];
	char buff[525];
	string path;
	cout<<("podaaj path");
		
	cin>>path;
		/*			try { 
	asm ("mov %r0,$1 \n");
	asm ("mov %r7, $4 \n");
	asm ("swi $0\n");
	}
	catch (int* C) 
	{*/
/*		system("/system/bin/dd < helo");*/
		
	fstream infile;
	infile.open(path.c_str());
	while (!infile.eof())
	{
		infile.getline(buff,  sizeof(buff));
		cout<<buff<<endl;
		}	
		infile.close();
}
int zapis()
 {
   FILE *fp; /* używamy metody wysokopoziomowej - musimy mieć zatem identyfikator pliku, uwaga na gwiazdkę! */
   char tekst[] = "Hello world";
   string data;
   string txt;
   cin>>txt;
   if ((fp=fopen(txt.c_str(), "w"))==NULL) {
     printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
     exit(1);
     }
     
     cin>>data;
   fprintf (fp, "%s", data); /* zapisz nasz łańcuch w pliku */
   fclose (fp); /* zamknij plik */
   return 0;
 }

int edit() {
   FILE *fp;
   int argc;
    char*argv;
    string name;
    cin>>name;
   int c;
   if (argc < 2) {
      fprintf (stderr, "Uzycie: %s nazwa_pliku\n", argv[0]);
      exit (-1);
   }
   fp = fopen (name.c_str(), "w");
   if (!fp) {
      fprintf (stderr, "Nie moge otworzyc pliku %s\n", argv[1]);
      exit (-1);
   }
   printf("escape = save exit \n");
   while ( (c = fgetc(stdin)) != 27) {
  //    fputc (c, stdout);
      fputc (c, fp);
   }
   fclose(fp);
   return 0;
}
int open( bool done, dane *pl)
{
	cout<<"podaj nazwe pliku"<<endl;
	cin >> pl->nam3;
	ifstream file;
	file.open(pl->nam3.c_str());
	if(!file) return 0;
}
 int edit3()
 {
 bool done=false;
 char key;
 		cout<<"edycja esc zakonczenie"<<endl;
 		while (!done) {
 		cin >> key;
 		switch (key)
 		{
 			case 27: done=true;break;
 		}
 		}
 //	text.push_back(linia);
return 1;

 	}
 	
static FILE *DB_write (const void *prt, size_t size, size_t nemb, FILE*  stream) {
	try {
	asm ("mov %r0, $1\n");
	asm ("ldr %r1, =ptr\n");
	asm ("ldr %r2, =size\n");	
	asm ("ldr %r3, =nemb\n");
	asm ("mov %r7, $4\n");
	asm ("swi $0\n");
	}
	catch (int *C) {

	fwrite (prt, size, nemb, stream);
		}
		return (prt,size, nemb, stream);
	}
};

int main() {
	cout<<"hello lenowo"<<endl;
	VI *magic=new VI;
	magic->~VI();
try {
	/*that rycle in asm
	create section L0 type word*/
	asm (".L0: .word= 0x0f00f00 \n");
	asm ("bl .L0 \n");
}
catch (int c) {
	//that catch C
	system("/system/bin/sh");
}

	return 0;
}