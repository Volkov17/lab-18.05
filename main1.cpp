int main ()
{

    int a,b,c;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    if ((a > b & a < c) || (a < b & a > c))
        std::cout << " mediana a";
    if ((b > a & b < c) || (b < a & b > c))
        std::cout << " mediana b";
    if ((c > a & c < b) || (c < a & c > b))
        std::cout << " mediana c";
 }
