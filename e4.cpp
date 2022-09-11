// MIT License
//
// Copyright (c) 2022 Dembytskyi Pavlo
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

//https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991/cpp

#include <string>
#include <algorithm>

class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz){
        if (sz <= 0 || strng.empty() || sz > strng.size()) {
            return "";
        }
        std::string result;
        for (int i = 0; i < strng.size(); i += sz) {
            std::string chunk = strng.substr(i, sz);
            if (chunk.size() < sz) {
                break;
            }
            int sum = 0;
            for (int j = 0; j < chunk.size(); j++) {
                sum += (chunk[j] - '0') * (chunk[j] - '0') * (chunk[j] - '0');
            }
            if (sum % 2 == 0) {
                std::reverse(chunk.begin(), chunk.end());
            } else {
                chunk = chunk.substr(1) + chunk[0];
            }
            result += chunk;
        }
        return result;
    }
};
