#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {

        // Helpers to validate code & business
        auto isValidCode = [](const string& s) -> bool {
            if(s=="")return false;
            for (char c : s) {
                if ( (c >= 'a' && c <= 'z') ||
                     (c >= 'A' && c <= 'Z') ||
                     (c >= '0' && c <= '9') ||
                     c == '_' ) {
                    continue;
                }
                return false;
            }
            return true;
        };
        auto isValidBusiness = [](const string& s) -> bool {
            if(s=="")return false;
            return s == "electronics"
                || s == "grocery"
                || s == "pharmacy"
                || s == "restaurant";
        };

        int n = code.size();
        // Build a vector of (businessLine, code, isActive)
        vector< tuple<string,string,bool> > entries;
        entries.reserve(n);
        for (int i = 0; i < n; ++i) {
            entries.emplace_back(businessLine[i], code[i], isActive[i]);
        }

        // Sort lexicographically: first by businessLine, then code, then bool
        sort(entries.begin(), entries.end());

        vector<string> ans;
        ans.reserve(n);
        // Filter in sorted order
        for (auto& tpl : entries) {
            const auto& biz = get<0>(tpl);
            const auto& c   = get<1>(tpl);
            bool active     = get<2>(tpl);

            if (active 
             && isValidBusiness(biz) 
             && isValidCode(c)) {
                ans.push_back(c);
            }
        }

        return ans;
    }
};