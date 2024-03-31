
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define mp make_pair
#define line cout << endl;
#define ff first
#define ss second
#define vi vector<int>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define printv(v)                      \
  for (int i = 0; i < (v.size()); i++) \
  {                                    \
    cout << v[i] << " ";               \
  }                                    \
  line;
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define tk(x) \
  int x;      \
  cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif
template <class T>
void _print(T t) {
  cerr << t;
}

template <class T, class V>
void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}

template <class T>
void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v){
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(vector<vector<T>> v) {
  cerr << "[\n";
  for (int l = 0; l < v.size(); l++) { 
    {
      for (int k = 0; k < v[l].size(); k++)
        cerr << v[l][k] << " ";
    }
    cerr << "\n";
  }
  cerr << "]";
}

template <class T, class V>
void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

const long long inf = 1e18;
const int MOD = 1e9+7;
const int MAX = 1e6;

bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

void rotateMatrix(vector<vector<int>> &v, int n) {
  for(int i = 0; i < n / 2; i++){
    for(int j = i; j < n - i - 1; j++) {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}

int32_t main() {
  fast
  int T;cin >> T;
	while(T--){
		int n;cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        
 
    int mi= *min_element(arr, arr + n);
    int mx= *max_element(arr, arr + n);
    
    int ans=max(mx-arr[0],arr[n-1]-mi);
    for(int i=0;i<n-1;i++){
        ans=max(ans,arr[i]-arr[i+1]);
    }
    cout<<ans<<endl;
    
	}
  
  
}

/*
                                                                     Introduction

The James Webb Space Telescope is the largest, most powerful space telescope ever built. It will allow scientists to look at what our universe was like about 200 million years after the Big Bang. The telescope will be able to capture images of some of the first galaxies ever formed. It will also be able to observe objects in our solar system from Mars outward, look inside dust clouds to see where new stars and planets are forming and examine the atmospheres of planets orbiting other stars.


Q1- When was James Webb Space Telescope launched?

a) 20 December, 2021

b) 18 December, 2021

c) 25 December, 2021

d) 15 December, 2021

Answer:  25 December 2021

Explanation- The James Webb Space Telescope was launched on December 25, 2021, from Kourou, French Guiana. It arrived at the Sun-Earth L2 Lagrange Point in January 2022.

Q2-> Which rocket launched James Webb Space Telescope?

a) Ariane 4

b) Ariane 5

c) Apollo 11

d) Apollo 17

Answer: Ariane 5

Explanation: NASA’s James Webb Space Telescope was launched on an Ariane 5 rocket. It is a European heavy-lift space launch vehicle which is developed and operated by Arianespace for the European space Agency (ESA).

Q3-> James Webb Space Telescope’s development was done by NASA in collaboration with which two Space agencies?

a) European Space Agency and Canadian Space Agency

b) European Space Agency and Indian Space Research Organisation

c) Canadian Space Agency and Indian Space Research Organisation

d) Indian Space Research Organisation and Roscosmos

Answer: European Space Agency and Canadian Space Agency

Explanation: The National Aeronautics and Space Administration (NASA) led the development of James Webb Space Telescope in collaboration with the European Space Agency and Canadian Space Agency.

Q4-> James Webb Space Telescope orbits which celestial body?

a) Earth

b) Mars

c) Moon

d) Sun

Answer: Sun

Explanation: As per NASA, the James Webb Space Telescope will not be in orbit around the Earth, like the Hubble Telescope is, and it will actually orbiting the Sun, 1.5 million kilometers away from the Earth at what is called the second Lagrange Point or L2.

Q5- How much did the James Webb Space Telescope cost?

a) USD 8.7 billion

b) USD 10 billion

c) USD 1 trillion

d) USD 39 million

Answer: 10 billion

Explanation: The program of the James Webb Space Telescope was plagued with enormous cost overruns and delays. A major redesign in 2005 led to the current approach, with the construction completed in 2016 at a total cost of USD 10 billion.

Q6-> What shape is the James Webb Space Telescope Primary Mirror?

a) Rectangular

b) Circular

c) Hexagonal-shaped

d) Square-shaped

Answer: Hexagonal-shaped

Explanation: The Webb Telescope Team had decided to build the mirror in segments on a structure which folds up so that it can fit into the rocket. Each of the 18 Hexagonal-shaped mirror segments is 1.32 meters in diameter, flat to flat.

Q7-> What is the telescope’s primary mirror material?

a) Beryllium coated with Gold

b) Aluminum

c) Metal

d) Iron

Answer: Beryllium coated with Gold

Explanation: The James Webb Space Telescope Team decided to make the mirror segments from beryllium, which is both strong and light. Each segment weighs approx. 20 kilograms.

Q8-> What is the mission duration of James Webb Space Telescope?

a) 15-20 years

b) 20-30 years

c) 5-10 years

d) 10-20 years

Answer: 5-10 Years

Explanation: The mission duration of the James Webb Space Telescope to investigate across the fields of astronomy and cosmology is 5-10 years.

Q9-> James Webb Space Telescope is named after James E. Webb, who was he?

a) President of the United States of America

b) NASA astronaut

c) American Astrophysicist

d) NASA Administrator

Answer: NASA Administrator

Explanation: James Webb Space Telescope is named after James E. Webb. He was the administrator of NASA from 1961 to 1968 during the Mercury, Gemini and Apollo Programs.

Q10-> When the first images from James Webb Space Telescope were released?

a) July 11, 2022

b) July 1, 2022

c) July 4, 2022

d) July 9, 2022

Answer: July 11, 2022

Explanation: The first images from the James Webb Space Telescope was released to the public via a press conference on July 11, 2022. The image released by the telescope is the highest-resolution image of the early universe ever taken.

0:00 Introduction
1:21 What will JWST study?
4:27 Mirrors of Gold
6:16 Special Sunshield
8:23 Telescope Orbit
9:54 Time Travel?

\subsection{SHREE L.R TIWARI}
\subsection{SHREE L.R TIWARI}


Modeling and Simulation
Mathematics |,||

 javascripts | HTML |CSS |react|nodejs
*/

// \descript{BACK-END JAVA|SPRING BOOT}

/*
Built an app where a business owner can create a page that allows users
to recommend new features and comments on an existing
recommended feature. \\


Worked with \textbf{\href{http://www.cs.cornell.edu/~ashesh/}} and \textbf{\href{http://www.cs.cornell.edu/~asaxena/}}to create , a tool which  learns from large scale user preference feedback to plan robot trajectories in human environments.
*/

// introduction
// conclusion
// advantages
// diasvantages
//  future scope
//  application
// time travel
// working
// how it build