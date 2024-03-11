#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a)         \
    for (auto &num : a) \
    cin >> num
#define printOutput(a)        \
    for (auto &num : a) \
    cout << num << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;
 
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases; cin >> testCases;
    while(testCases--){
        int numPositions, numClocks, numCounters; cin >> numPositions >> numClocks >> numCounters;
        vector<int> positions;
        for(int i=0;i<numPositions;i++){
            int position; cin >> position;
            positions.push_back(position);
        }
        multiset<int> clocks;
        multiset<int> counters;
        for(int i=0;i<numClocks;i++){
            int clock; cin >> clock;
            clocks.insert(clock);
        }
        for(int i=0;i<numCounters;i++){
            int counter; cin >> counter;
            counters.insert(counter);
        }
        vector<int> differences;
        int maxDifference=0;
        int count=0;
        int lowestPosition=0;
        int highestPosition=0;
        for(int i=1;i<numPositions;i++){
            differences.push_back(positions[i]-positions[i-1]);
            if(positions[i]-positions[i-1]>maxDifference){
                maxDifference=positions[i]-positions[i-1];
                lowestPosition=positions[i-1];
                highestPosition=positions[i];
                count=0;
            }
            else if(positions[i]-positions[i-1]==maxDifference){
                count++;
            }
        }
        if(count>0){
            cout<<maxDifference<<endLine;
            continue;
        }
        int middlePosition=(lowestPosition+highestPosition)/2;
        vector<int> answers;
        for(auto clockValue:clocks){
            int clockDifference=middlePosition-clockValue;
            auto it1=counters.lower_bound(clockDifference);
            int counter1=-1;
            int counter2=-1;
            if(it1==counters.end()){
                it1--;
                counter2=*it1;
            }
            else{
                counter1=*it1;
                if(it1!=counters.begin()){
                    it1--;
                    counter2=*it1;
                }
            }
            if(counter1!=-1){
                int counterPosition1=counter1+clockValue;
                int maximum1=max(abs(counterPosition1-lowestPosition),abs(highestPosition-counterPosition1));
                answers.push_back(maximum1);
            }
            if(counter2!=-1){
                int counterPosition2=counter2+clockValue;
                int maximum2=max(abs(counterPosition2-lowestPosition),abs(highestPosition-counterPosition2));
                answers.push_back(maximum2);
            }
        }
        int maximumValue=1e18;
        for(auto answer:answers){
            maximumValue=min(maximumValue,answer);
        }
        int maxDifferenceValue=maxDifference;
        if(maxDifference<=maximumValue){
            cout<<maxDifference<<endLine;
            continue;
        }
        for(auto difference:differences){
            if(difference==maxDifferenceValue){
                continue;
            }
            maximumValue=max(maximumValue,difference);
        }
        cout<<maximumValue<<endLine;
    }
    return 0;
}
