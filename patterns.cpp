#include<iostream>
using namespace std;

// global variables
char sym;

// functions
// symbol
int symbol()
{   
    char dec;
    cout << "Do U want to enter custom symbol (y/n) : " << endl;
    cin >> dec;
    if (dec == 'y')
    {
        cout << "Enter custom symbol : " << endl;
        cin >> sym;
    }else if (dec == 'n')
    {
        sym = '#';
    }
    return sym;
}


// patterns

// rhombus pattern
int rhombus_pattern()
{
    int sizoz;
    cout << "Enter the size of rhombus : " << endl;
    cin >> sizoz;
    for (int i = sizoz; i >= 1; i--)
    {
        for (int j = 1; j <= i-1; j++)
        {
            cout << "   ";
        }
        for(int j = 1; j <= sizoz; j++)
        {
            cout << " " << sym << " ";
        }
        cout << endl;
    }
    return 0;
}


// binary pyramid
int dual_symb_pyramid()
{   
    int width_bin;
    char dix;
    char a_type, b_type;
    cout << "Enter the width of the pyramid : " << endl;
    cin >> width_bin ;
    cout << "Do u want 2 custom symbols  (y/n): " << endl;
    cin >> dix;
    if(dix == 'y')
    {
        cout << "Enter the first symbol : " << endl;
        cin >> a_type;
        cout << "Enter the second symbol : " << endl;   
        cin >> b_type;
    } else if (dix == 'n')
    {
        a_type = 0;
        b_type = 1;
    }
    for(int i = 1; i <= width_bin; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            int suum = i+j;
            if (suum % 2 == 0)
            {
                cout << " " << a_type << " ";
            } else if (suum % 2 != 0)
            {
                cout << " " << b_type << " ";
            }
        } cout << endl;
    } cout << endl;
    return 0;
}

// Row_pyramid_pattern
int row_number()
{
    int width_rn;
    cout << "Enter the width of patteren required : " << endl;
    cin >> width_rn;
    for(int i = width_rn;i >= 0;i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// butteryfly pattern
int butterfly_pattern()
{
    int n_butt;
    char dic;
    cout << "ENter the width size of butterfly required : " << endl;
    cin >> n_butt;
    cout << "Do u want double sided butterfly (y/n): " << endl;
    cin >> dic;
    if (dic == 'n')
    {
        for(int i  = 1; i <= n_butt; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << " " << sym << " ";
            }
            int space = 2*n_butt - 2*i;
            for(int j = 1; j <= space; j++)
            {
                cout << "   ";
            }
            for(int j = 1; j <= i; j++)
            {
                cout << " " << sym << " ";
            }
            cout << endl;
        }
    }else if (dic == 'y')
    {
        for(int i  = 1; i <= n_butt; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << " " << sym << " ";
            }
            int space = 2*n_butt - 2*i;
            for(int j = 1; j <= space; j++)
            {
                cout << "   ";
            }
            for(int j = 1; j <= i; j++)
            {
                cout << " " << sym << " ";
            }
            cout << endl;
        }
        for(int i  = n_butt; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << " " << sym << " ";
            }
            int space = 2*n_butt - 2*i;
            for(int j = 1; j <= space; j++)
            {
                cout << "   ";
            }
            for(int j = 1; j <= i; j++)
            {
                cout << " " << sym << " ";
            }
            cout << endl;
        }
    } else { cout << " Code exited due to wrong command input...!!!" << endl; exit(EXIT_FAILURE); }
    return 0;
}

// half pyramid with number ( under construction )
int pyramid_number()
{   
    int size_pyr;
    char dic;
    int constint= 1;
    cout << "Enter the size of pyramid : " << endl;
    cin >> size_pyr;
    cout << "Single number printing or continous number printing (s/c) : " << endl;
    cin >> dic;
    if (dic == 's')
    {
        for(int i = 1; i <= size_pyr;i++)
        {
            for(int j = 1;j <= i; j++)
            {
                cout << " " << i << " ";
            }
            cout << endl;
        }
    }else if(dic == 'c') // UNDER CONSTRUCTIONS
    {
        for(int i = 1; i <= size_pyr; i++)
        {
            for (int j = 1; j <= i;j++)
            {
                cout <<" " << constint << " ";
                constint++;
            }
            cout << endl;
        }


    } else { cout << "\n xxxxxxxxxxxxxxxxxxx\nCode exited due to wrong command...!!!!\nxxxxxxxxxxxxxxxxx\n" << endl; exit(EXIT_FAILURE); }
    return 0;
}

// pyrmaid pattern
int pyrmaid_pattern()
{
    int n_pyr;
    cout << "Enter the size of the pyramid : "<< endl;
    cin >> n_pyr;
    for (int i = 1; i <= n_pyr; i++)
    {
        for(int j = 1;j <= n_pyr; j++)
        {
            if (j <= n_pyr- i)
            {
                cout << "   ";
            } else
            {
                cout << " " << sym << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0; 
}

// fill pattern
int fill_pattern()
{
    int rows_f, col_f;
    cout << "Enter the number of rows : " << endl;
    cin >> rows_f;
    cout << "Enter the number of columns : " << endl;
    cin >> col_f;
    for(int i = 0; i < rows_f;i++)
    {
        for(int j = 0; j < col_f ; j++)
        {
            cout << " " << sym << " " ;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

// inverted pyrmaid
int invert_pyrimaid_pattern()
{
    int n_ipyr;
    cout << "Enter the width of pyrmaid : " << endl;
    cin >> n_ipyr;
    for (int i = n_ipyr; i >=1 ;i--)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " " << sym << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;

}

// hollow pattern
int hollow_pattern()
{
     int rows;
    int col;
    cout << "Enter the num of rows : " << endl;
    cin >> rows;
    cout << "Enter the number ofcolumns : " << endl;
    cin >> col;
    cout << " The rows are : " << endl << rows << endl << "The colums are : " << endl << col <<endl;
   

   for(int i = 1;i <= rows ;i++)
   {
    for(int j = 1; j <= col ; j++)
    {
        if(i == 1 || i == rows || j == 1 || j == col)
        {
            cout << " " << sym << " ";
        }else{
            cout << "   ";
        }
    }
        cout << endl;
   }
    cout << endl;
    return 0;
}


// main runner
int main()
{
    char cond;
    char what;
    do { 
        cout << "Enter what pattern is required \n ^f^ -> fill pattern \n ^h^  -> hollow pattern \n ^i^ -> inverted Pyramid pattern  \n ^p^ -> Pyramid pattern \n ^b^ -> Butterfly pattern \n ^r^ -> Rhumbus pattern :"  << endl;
        cin >> what;

        if(what == 'f')
        {   symbol();
            fill_pattern();
        } else if(what == 'h')
        {
            symbol();
            hollow_pattern();
        } else if(what == 'i')
        {
            symbol();
            invert_pyrimaid_pattern();
        } else if (what == 'r') 
        {
            symbol();
            rhombus_pattern();
        } else if (what == 'b')
        {
            symbol();
            butterfly_pattern();
        }else if(what == 'p')
        {   
            char n_cho;
            cout << "Enter \n ^s^ -> symbol \n ^n^ -> numbered \n ^r^ -> row numbered \n ^d^ -> dual numbered :  " <<endl;
            cin >> n_cho;
            if(n_cho== 'n')
            {
                pyramid_number();
            } else if(n_cho== 's')
            {
                symbol();   
                pyrmaid_pattern();
            } else if(n_cho == 'r')
            {
                row_number();
            } else if(n_cho == 'd')
            {
                dual_symb_pyramid();
            }else { cout << " Program exited due to to wrong input command...!!" <<  endl; exit(EXIT_FAILURE); }
        } else if(what == 'd')
        {
            symbol();
            butterfly_pattern();
        }
        cout << "Do you want to try the pattern again ..? (y/n): " << endl;
        cin >> cond;
    }
    while (cond == 'y');

    if (cond == 'n')
    {
        cout << "\nProgram executed....\n" << endl;
    }

    return 0;   
}




                                                                                    