#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<int> dynamicArray(int n, vector<vector<int>> q,int p) {

        long int lastAnswer=0;
        vector<int>s0;
        vector<int>s1;
        vector<int>ans;
        for(long i=0;i<p;i++)
        {
            if(q[i][0]==1)
            {
                lastAnswer=0;
                if((q[i][1]^lastAnswer)%n==0)
                {
                    s0.push_back(q[i][2]);
                }
                else 
                s1.push_back(q[i][2]);
            }
        
            if(q[i][0]==2)
            {
                int size1=s0.size();
                int size2=s1.size();
                if((q[i][1]^lastAnswer)%n==0)
                {
                lastAnswer=s0[q[i][2]%size1];
                ans.push_back(lastAnswer);
                }
                if((q[i][1]^lastAnswer)%n==1)
                 {
                     lastAnswer=s1[q[i][2]%size1];
                     ans.push_back(lastAnswer);
                 }
            }
            
        }
        
        return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split(rtrim(nq_temp));

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    vector<vector<int>> queries(q);

    for (int i = 0; i < q; i++) {
        queries[i].resize(3);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    vector<int> result = dynamicArray(n, queries,q);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

