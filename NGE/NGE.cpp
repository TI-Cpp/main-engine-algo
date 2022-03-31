#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v)
{
    stack<int> st;
    vector<int> nge(v.size()); //⚠️⚠️⚠️The size of vector is declared inside normal brackets!
    for (int i = 0; i < v.size(); ++i)
    {
        while(!st.empty() && v[i]>v[st.top()]) //If the element at current index is more than the element whose index is there
        //in stack
        {
            nge[st.top()] = i;  //Stoer the index of current element in the places of the elements whose indexes are there
            st.pop(); //Remove those indexes after assingning their NGL
        }
        st.push(i); //Insert the greatest elements index in the stack
    }
    while (!st.empty()) //Assaigning the elements whose NGE wasn't present an index of -1
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int tmp;
            v.push_back(tmp);
            cin >> tmp;
            nge[st.top()] = i;  //Stoer the index of current element in the places of the elements whose indexes are there
            st.pop(); //Remove those indexes after assingning their NGL
        }
        vector<int> nge = NGE(v);
        for (int i = 0; i < n; ++i)
        {
            cout << v[i] << " " << (nge[i]==-1?-1:v[nge[i]])<< endl;
        }
    }
}