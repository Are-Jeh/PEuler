#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int horizontal(vector<vector<int> > v, int ix, int iy)
{
    int prod = 1, count = 0;
    for (int i = 0; i < 4 && iy + i < v[ix].size(); ++i)
    {
        count++;
        prod *= v[ix][iy + i];
    }
    if (prod == 2137172224)cout<<ix<<' '<<iy<<"3";
    if (count == 4)
        return prod;
    return 0;
}

int vertical(vector<vector<int> > v, int ix, int iy)
{
    int prod = 1, count = 0;
    for (int i = 0; i < 4 && ix + i < v.size(); ++i)
    {
        count++;
        prod *= v[ix + i][iy];
    }
        if (prod == 2137172224)cout<<ix<<' '<<iy<<"2";

    if (count == 4)
        return prod;
    return 0;
}

int diagonal(vector<vector<int> > v, int ix, int iy)
{
    int prod = 0;
    int n = v[ix].size();
    int m = v.size();
    int i = ix, j = iy;
    int tmp = 1;
    int count = 0;
    while (i < n && j < m && i-ix<4)
    {
        tmp *= v[i][j];
        i++, j++;
    }
    prod = tmp;
    i = ix, j = iy;
    tmp = 1;
    while (i < n && j < m && i-ix<4)
    {
        tmp *= v[i][j];
        i++, j--;
    }
    prod = max(prod, tmp);
        if (prod == 2137172224)cout<<ix<<' '<<iy<<"1";

    return prod;
}

int maxProdInAllDir(vector<vector<int> > v, int ix, int iy)
{
    return max(max(horizontal(v, ix, iy), vertical(v, ix, iy)), diagonal(v, ix, iy));
}

int main()
{
    // instead of adding comma for 5 mins to the input matrix
    // I prefer using stream and input using file
    ifstream myfile("input_11.txt");
    string line;
    vector<vector<int> > v;
    if (myfile.is_open())
    {
        while (myfile)
        {
            getline(myfile, line);
            stringstream ss(line);
            string tmp;
            vector<int> temp_v;
            while (getline(ss, tmp, ' '))
            {
                temp_v.push_back(stoi(tmp));
            }
            v.push_back(temp_v);
        }
    }
    else
    {
        cout << "Couldnot open file\n";
    }
    int n = v.size();
    int m = v[0].size();
    int glomax = -1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            glomax = max(glomax, maxProdInAllDir(v, i, j));
        }
    }

    cout << glomax << ' ';
    // find the max 4s in all directions
}