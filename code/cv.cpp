#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'findSpecialProduct' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY inputArray as parameter.
 */

vector<int> findSpecialProduct(vector<int> inputArray) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string inputArray_count_temp;
    getline(cin, inputArray_count_temp);

    int inputArray_count = stoi(ltrim(rtrim(inputArray_count_temp)));

    vector<int> inputArray(inputArray_count);

    for (int i = 0; i < inputArray_count; i++) {
        string inputArray_item_temp;
        getline(cin, inputArray_item_temp);

        int inputArray_item = stoi(ltrim(rtrim(inputArray_item_temp)));

        inputArray[i] = inputArray_item;
    }

    vector<int> result = findSpecialProduct(inputArray);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

