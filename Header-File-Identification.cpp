#include<bits/stdc++.h>
using namespace std;

int main()
{
    char allHeaderFilesInC[48][50] =
 {
"stdio.h","STDIO.H","conio.h","CONIO.H","assert.h","ASSERT.H","ctype.h","CTYPE.H",
                                      "cocale.h","COCALE.H","math.h","MATH.H","setjmp.h","SETJMP.H","signal.h","SIGNAL.H",
                                      "stdarg.h","STDARG.H","stdlib.h","STDLIB.H","string.h","STRING.H","time.h","TIME.H",
                                      "complex.h","COMPLEX.H","stdalign.h","STDALIGN.H","errno.h","ERRNO.H","locale.h","LOCALE.H",
                                  "stdatomic.h","STDATOMIC.H","stdnoreturn.h","STDNORETURN.H","uchar.h","UCHAR.H",
                                      "fenv.h","FENY.H","wchar.h","WCHAR.H","tgmath.h","TGMATH.H","stdarg.h", "STDARG.H","stdbool.h","STDBOOL.H"
};

    char input[500],check[500],header_test[500],check2[10];
    cout<<"Enter A Header to test whether it is error or not: ";

    gets(input);

    int length = strlen(input);
    int i,j,k,p,t;
    bool test1 = false,test2 = false,test3 = false,test4=false,test5=false,test6=false,test7=true,final_test=false;
    for(i=0; i<length; i++)
    {
        if(input[i] == '#')
        {
            test1 = true;
            break;
        }
        if(input[i] != ' ')
        {
            test1 = false;
            break;
        }
    }

    if(test1 == true)
    {
        i++;
        for( ; i<length; i++)
        {
            if(input[i] == 'i')
            {
                test2 = true;
                break;
            }
            if(input[i] != ' ')
            {
                test2 = false;
                break;
            }
        }
    }

    if(test2 == true)
    {
        if(input[i+1]=='n'&&input[i+2]=='c'&&input[i+3]=='l'&&input[i+4]=='u'&&input[i+5]=='d'&&input[i+6]=='e')
        {
            test3 = true;
            i += 7;
        }
        else
            test3 = false;
    }

    if(test3 == true)
    {
        for( ; i<length; i++)
        {
            if(input[i] == '<')
            {
                test4 = true;
                break;
            }
            if(input[i] != ' ')
            {
                test4 = false;
                break;
            }
        }
    }

    if(test4 == true)
    {
        i++;
        j = 0;
        for( ; i<length; i++)
        {
            if(input[i] == '.')
            {
                test5 = true;
                break;
            }
            else
            {
                header_test[j++] = input[i];
            }
        }
    }

    if(test5 == true)
    {
        header_test[j] = '.';
        j++;
        i++;
        header_test[j++] = input[i];
        header_test[j] = '\0';

       // cout<<header_test<<"\n";

        for(k=0; k<48; k++)
        {
            if((strcmp(header_test, allHeaderFilesInC[k])) == 0)
            {
                test6 = true;
                break;
            }
        }
    }

    if(test6 == true)
    {
        i++;
        t = 0;
        for( ; i<length; i++)
        {
            if(input[i] == '>')
            {
                t++;
            }
            else if(input[i] != ' ')
            {
                test7 = false;
                break;
            }
        }
    }
    if(test7 == true)
    {
        if(t == 1)
            final_test = true;
        else
            final_test = false;
    }
    else
        final_test = false;



    if(final_test == true)
        cout<<"Valid Header File of C\n";
    else
        cout<<"Invalid Header File\n";

    return 0;

}


