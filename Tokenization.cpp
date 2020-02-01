#include<bits/stdc++.h>
using namespace std;

string keywords[] = {"auto","break","case","char",
"const","continue","default","do",
"double","else","enum","extern",
"float","for","goto","if",
"int","long","register","return",
"short","signed","sizeof","static",
"struct","switch","typedef","union",
"unsigned","void","volatile","while"};

string brackets[] = {"}","{","(",")","[","]"};

string operators[] = {"=","+","-","*","/","<<",">>","%","++","--",
"==","!=","<=",">=","<",">","&&","||","!","&","|","~","^","+=","-=","*=","/=","%=","? :"};

string separators[] = {";",","};

bool isContained(string query,string arr[],int s)
{
 for(int i=0;i<s;i++)
 {
     if(query == arr[i])
         return true;
 }
 return false;
}
bool isConstant(string query)
{
 for(int i=0;i<query.size();i++)
 {
     if(!isdigit(query[i]))
         return false;
 }
 return true;
}
bool isIdentifier(string query)
{
 if(isdigit(query[0]))
     return false;
 for(int i=1;i<query.size();i++)
 {
     if(!isalnum(query[i]))
         return false;
 }
 return true;
}
int main()
{
 fstream file;
 string line,word="";
 bool flag=false;
 file.open("Input.txt",ios::in);
 cout<<"Token\t\t\tClass"<<endl;
 cout<<"-----\t\t\t-----"<<endl;
 while(getline(file,line))
 {
     line.push_back('\0');
     if(line[0] == '#')
         cout<<line<<"\tPreprocessor Directive"<<endl;
     else
     {
         if(line.find("()") != string::npos)
         {
             flag = true;
         }
         for(int i=0;i<line.size();i++)
         {


             if(line[i] == ' ' || line[i] == '\0' || (flag && line[i]=='('))
             {
                 if(flag && line[i]=='(')
                 {
                     cout<<word<<"\t\t\tFunction"<<endl;
                     cout<<"("<<"\t\t\tBracket"<<endl;
                     flag = false;
                 }
                 else if(isContained(word,keywords,32))
                     cout<<word<<"\t\t\tKeyword"<<endl;
                 else if(isContained(word,brackets,6))
                     cout<<word<<"\t\t\tBracket"<<endl;
                 else if(isContained(word,operators,29))
                     cout<<word<<"\t\t\tOperator"<<endl;
                 else if(isContained(word,separators,2))
                     cout<<word<<"\t\t\tSeparator"<<endl;
                 else if(isConstant(word))
                     cout<<word<<"\t\t\tConstant"<<endl;
                 else if(isIdentifier(word))
                     cout<<word<<"\t\t\tIdentifier"<<endl;
                 else
                     cout<<word<<"\t\t\tUndefined"<<endl;
                 word.clear(); }
             else
             {
                 word.push_back(line[i]);
             }}
     }
     word.clear();
     flag = false;
 }
 file.close();
 return 0;
}