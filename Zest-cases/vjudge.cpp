#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int ll;

int main()
{
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    ll a, b;

    std::cin >> a >> b;
    std::vector<ll> x(a), y(b);

    for (ll i = 0; i < a; ++i)
        std::cin >> x[i];

    for (ll i = 0; i < b; ++i)
        std::cin >> y[i];

    std::sort(x.begin(), x.end());

    for (ll i = 0; i < b; ++i)
    {
        ll count = std::upper_bound(x.begin(), x.end(), y[i]) - x.begin();
        std::cout << count << " ";
    }

    return 0;
}
