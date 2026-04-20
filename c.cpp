#include <iostream>
#include<cstring>
using namespace std;
template <typename m>
m add(m a,m b){
    return a+b;
}
template <>
const char *add(const char *a,const char *b){
        int total_len=strlen(a)+strlen(b)+1;
        char *result=(char *)malloc(total_len);
        strcpy(result,a);
        strcpy(result,b);
        return result;
}
int main()
{ 
    cout << "r=add(4,5)----" << add(4, 5) << endl;
	cout << "r=add(100000l,200000l)----" << add(100000l, 200000l) << endl;
	cout << "r=add(4.1f,5.2f)----" << add(4.1f, 5.2f) << endl;
	cout << "r=add(12.5,75.75)----" << add(12.5, 75.75) << endl;
	cout << "r=add(\"abc\",\"123\")----" << add("abc", "123") << endl;
	return 0;
}