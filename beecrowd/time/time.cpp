#include <iostream>
int main()
{
    int n,h,m,s;

    std::cin >> n;

    m = (n%3600/60);
    h = n/3600;
    s = n % 60;
    std::cout << h << ":" << m << ":" << s << '\n';
    return 0;
}