#include "list_template.h"

void main()
{
    List<char> mylist_CHAR;

    for (char i = 'A'; i <= 74; ++i)
    {
        mylist_CHAR.push_back(i);
    }
    mylist_CHAR.show_list();

    List<int> mylist_INT;

    for (int i = 1; i <= 10; ++i)
    {
        mylist_INT.push_back(i);
    }
    mylist_INT.show_list();

    system("pause");
    return;
}