//
// Created by quinn on 2/16/2025.
//
#include <vector>
#include <string>

using namespace std;

class BinaryGenerator {
public:
    vector<string> generatorBinary(int n) {
        vector<string> result;
        string binary;
        backtrace(result, binary, n);

        return result;
    }

private:
    void backtrace(vector<string>& res, string& bin, int n) {
        if (bin.length() == n) {
            res.push_back(bin);
            return;
        }

        bin.push_back('0');
        backtrace(res, bin, n);
        bin.pop_back();

        bin.push_back('1');
        backtrace(res, bin, n);
        bin.pop_back();
    }
};
