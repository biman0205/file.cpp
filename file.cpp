#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class file
{
    char ch;
    public:
    void createfile(string fn);
    void displayfile(string fn);
    string updatefile(string fn);
};
void file::createfile(string fn)
{
    ofstream fout(fn);
    string s;
    if(fout.fail()!=0)
    {
        cout<<"file not open\n";
    }
    else{
        cin.get();
        cout<<"enter data:";
        while((ch=cin.get())!='\n')
        {
            fout<<ch;
           
        }
         fout.close();
         cout<<"file created\n";

    }
}
void file::displayfile(string fn)
{
    ifstream fin(fn);
    string txt;
    if(fin.fail()!=0)
    {
        cout<<"file not open\n";
    }
    else{
        fin.get(ch);
        while(fin)
        {
            cout<<"ch";
            fin.get(ch);
        }
        cout<<"\n";
        fin.close();
    }
}
string file::updatefile(string fn){
    string nf;
    cout<<"Enter name for new file: ";
    cin>>nf;
    ofstream fout(nf);
    ifstream fin(fn);
    if(fout.fail()!=0 || fin.fail()!=0){
        cout<<"Updation unsucessfull\n";
        return fn;
    }
    else{
        bool flag=false;
        fin.get(ch);
        if(ch!=' '){
            fout<<char(toupper(ch));
            fin.get(ch);
            flag=true;
        }
        while(fin){
            if(ch==' '){
                fout<<ch;
                while(ch==' '){
                    fin.get(ch);
                }
                flag= true;
                fout<<char(toupper(ch));
                fin.get(ch);
            }
            else{
                fout<<ch;
                fin.get(ch);
            }
        }
        cout<<"New file created";
        fin.close();
        fout.close();
        return nf;
    }
}
int main()
{
    string fn;
    file f1;
    cout<<"enter name of the file";
    cin>>fn;
    f1.createfile(fn);
    f1.displayfile(fn);
    fn= f1.updatefile(fn);
    f1.displayfile(fn);
    return 0;
}