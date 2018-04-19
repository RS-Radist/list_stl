#include <iostream>
#include <list>
#include <string>

using namespace std;
int main()
{
    //explicit list (const Allocator &a=Allocator());
    list<int> demo_list(10);
    cout<<demo_list.size()<<endl;
    //explicit list (size_type num, const T &val = T(), const Allocator &a = Allocator());
    list<int> demo_list2(3,100);
    cout<<demo_list2.size()<<endl;
    for (std::list<int>::iterator it = demo_list2.begin(); it != demo_list2.end(); it++)
        std::cout << *it << ' ';
    cout<<endl;
    //list (InputIterator first, InputIterator last,const allocator_type& alloc = allocator_type());
    list<int> demo_list3(demo_list2.begin(),demo_list2.end());
    for (std::list<int>::iterator it = demo_list3.begin(); it != demo_list3.end(); it++)
        std::cout << *it << ' ';
    cout<<endl;
    //list (const list& x);
    list<int> demo_list4(demo_list);
    for (std::list<int>::iterator it = demo_list4.begin(); it != demo_list4.end(); it++)
        std::cout << *it << ' ';
    cout<<endl;
    // void assign(size_type num, const T &val);
    list<int> demo_list5;
    demo_list5.assign(4, 22);
    for (std::list<int>::iterator it = demo_list5.begin(); it != demo_list5.end(); it++)
        std::cout << *it << ' ';
    cout<<endl;
    //resize()
    list <int> demo_list6(10);
    cout<<demo_list6.size()<<endl;
    demo_list6.resize(20);
    cout<<demo_list6.size()<<endl;
    // clear()
    list <string> demo_list7;
    demo_list7.push_back("hello");
    demo_list7.push_back("World");
    for (std::list<string>::iterator it = demo_list7.begin(); it != demo_list7.end(); it++)
        std::cout << *it << ' ';
    demo_list7.clear();
    cout<<endl;
    demo_list7.push_back("Logistics sound");
    for (std::list<string>::iterator it = demo_list7.begin(); it != demo_list7.end(); it++)
        std::cout << *it << ' ';
    //pop_back()
    cout<<endl;
    demo_list3.pop_back();
    demo_list3.pop_back();
    for (std::list<int>::iterator it = demo_list3.begin(); it != demo_list3.end(); it++)
        std::cout << *it << ' ';
    //pop_front()
    cout<<endl;
    demo_list5.pop_front();
    for (std::list<int>::iterator it = demo_list5.begin(); it != demo_list5.end(); it++)
        std::cout << *it << ' ';
    //insert
    cout<<endl;
    list<int>::iterator iter;
    iter=demo_list5.begin();
    ++iter;
    ++iter;
    demo_list5.insert(iter, 300);
    for (std::list<int>::iterator it = demo_list5.begin(); it != demo_list5.end(); it++)
        std::cout << *it << ' ';
    //erase(iterator start,end)
    cout<<endl;
    list<string> str;
    list<string>::iterator iteraStart;
    list<string>::iterator iteraEnd;
    str.push_back("M");
    str.push_back("E");
    str.push_back("T");
    str.push_back("A");
    str.push_back("L");
    for (std::list<string>::iterator it = str.begin(); it != str.end(); it++)
        std::cout << *it << ' ';
    iteraStart=str.begin();
    iteraEnd=str.end();
    --iteraEnd;
    ++iteraStart;
    str.erase(iteraStart, iteraEnd);
    cout<<endl;
    for (std::list<string>::iterator it = str.begin(); it != str.end(); it++)
        std::cout << *it << ' ';
    //sort , unique
    cout<<endl;
    list<int> list_sort_unique;
    list_sort_unique.push_back(10);
    list_sort_unique.push_back(4);
    list_sort_unique.push_back(4);
    list_sort_unique.push_back(2);
    list_sort_unique.push_back(2);
    list_sort_unique.push_back(9);
    list_sort_unique.sort();
    for (std::list<int>::iterator it = list_sort_unique.begin(); it != list_sort_unique.end(); it++)
        std::cout << *it << ' ';
    cout<<endl;
    list_sort_unique.unique();
    for (std::list<int>::iterator it = list_sort_unique.begin(); it != list_sort_unique.end(); it++)
        std::cout << *it << ' ';
    //swap
    swap(list_sort_unique, demo_list5);
    cout<<endl;
    for (std::list<int>::iterator it = list_sort_unique.begin(); it != list_sort_unique.end(); it++)
        std::cout << *it << ' ';
    //marge()
    list_sort_unique.merge(demo_list4);
    cout<<endl;
    for (std::list<int>::iterator it = list_sort_unique.begin(); it != list_sort_unique.end(); it++)
        std::cout << *it << ' ';
    //void merge (list& x, Compare comp);---
    
    // splice
    cout<<endl;
     list<int>::iterator iteraEnd2;
    iteraEnd2=list_sort_unique.begin();
    list<int> temp2;
    temp2.push_back(31);
    
    list_sort_unique.splice(iteraEnd2, temp2);
    for (std::list<int>::iterator it = list_sort_unique.begin(); it != list_sort_unique.end(); it++)
        std::cout << *it << ' ';
    
}
