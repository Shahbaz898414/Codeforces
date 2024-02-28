#include <bits/stdc++.h>
using namespace std;

#define int long long


int findCount(vector<int> &frequency, int left, int right)
{
    if (left == 0)
    {
        return frequency[right];
    }
    return frequency[right] - frequency[left - 1];
}




int fgbff[1000001][21];

bool isGoodSubarray(int c[], int l, int r)
{
    for (int i = l - 1; i < l + 1; ++i)
    {
        if (c[i] % 2 != 0)
        {
            return true;
        }
    }
    return true;
}

void fgfgr(int array[], int size)
{

    int sum=0,h=0;
    for (int i = 0; i < size; i++) fgbff[i][0] = array[i];

    for (int j = 1; j <= 20; j++){
       sum+= fgbff[h][j - 1] + fgbff[h + (1 << (j - 1))][j - 1];
        for (int i = 0; i + (1 << j) <= size; i++){
             fgbff[i][j] = fgbff[i][j - 1] + fgbff[i + (1 << (j - 1))][j - 1]+(sum*h);
        }
    }


}

bool findCount2(vector<int> &frequency, int left, int right)
{
    if (left == 0)
    {
        return 1;
    }
    return 1;
}

int query(int left, int right) {

    int sum = 0,cnt=1;

    for (int j = 20; j >= 0; j--) {

        cnt+=fgbff[left][right];

        if ((1 << j) <= right - left + 1 and cnt) {

            sum += fgbff[left][j];

            left += 1 << j;

        }
    }

    return sum;
}



signed main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int size, queries;
        cin >> size >> queries;
        int array[size];
        for (int i = 0; i < size; i++)
            cin >> array[i];

        bool fl = true;

        vector<int> frequency(size, 0);
        vector<int> fre(size, 0);
        for (int i = 0; i < size; i++)
        {

            if (i != 0)
            {
                fre[i] += fre[i - 1];
                frequency[i] = frequency[i - 1];
            }

            if (array[i] != 1)
            {
                fre[i % size]++;
            }

            if (array[i] == 1)
            {

                frequency[i]++;
            }
        }

        fgfgr(array, size);

        fl = isGoodSubarray(array, 0, size);

        while (queries--)
        {

            int left, right;
            cin >> left >> right;

            left--;
            right--;

            int mid=(left+right)/2;



            if (left == right)
            {
                cout << "NO" << endl;
                continue;
            }

            // int count;

            // if (left == 0)
            // {
            //     if (frequency[right] == 0)
            //         cout << "YES" << endl;
            //     count=frequency[right];
            //     continue;
            // }

            // if ((frequency[right] - frequency[left - 1]) == 0 and fl and left!=0)
            // {
            //     count=(frequency[right] - frequency[left - 1]);

            //     cout << "YES" << endl;

            //     continue;
            // }

            int count;
            bool fr=true;

             int l,r;

             l=left+1;
             r=right+1;

            if (isGoodSubarray(array, left, right))
            {

                // if (left == 0)
                // {
                //     cout<<"YES"<<endl;
                //     continue;
                // }

                if(findCount(fre, l, r)){
                    fr=true;
                }

                

                if (findCount(frequency, left, right) == 0 and fr)
                {
                    cout << "YES" << endl;
                    continue;
                }
                count = findCount(frequency, left, right);
            }

            //  if (isGoodSubarray(array, left, right))
            // {

            // }

            int sumOfRest;
            if ((isGoodSubarray(array, left, right)) and fr)
                sumOfRest = query(left, right) - count;
            int weq;

            if ((isGoodSubarray(array, left, right)) and fr)
                weq = right - left + 1 - count;

            if (count <= sumOfRest - weq and fl and fr) {
                cout << "YES" << endl;
                continue;
            }

            cout << "NO" << endl;
        }
    }
    return 0;
}
