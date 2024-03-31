#include<bits/stdc++.h>
using namespace std;
#define int long long
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
void _print(T t)
{
  cerr << t;
}
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(vector<vector<T>> v) {
  cerr << "[\n";
  for (int l = 0; l < v.size(); l++)
  {
    {
      for (int k = 0; k < v[l].size(); k++)
        cerr << v[l][k] << " ";
    }
    cerr << "\n";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}


/*
                           `/+o/.
                       .+sso+/:oydyo/:-:+shdys/    `-:.     `-/+o+/`
                 `/sdh+/::/::ss:`ymdhyso//hmMNyhNNms+ososys+/-:/shms/`
                .+hNNy++oo+/.`.--/osyhdmNNMMMMMMMMMNdsssssoso+hhhhsoo+ymdo.
              -smNy/+ymmmmmNNNNMNMMMMMNNNmmNMMMMMMMMMho:///:--shydNMMNdo-sNs`
            -hNd+-sNMNdmNMMMNNNMNNNMMMddNMMNNmNMMMMMMNmy+///::/:-:/++ymNNdmMN:
          `sNMs`+NMNNNMMMMNNNMMMMMMNmhyso///+ohMmoNMmoo+/::/-:oymNNmsosshdhmMM/
         +NMMy`hMMMhyNMNMMNNNMds:-.`-:syddmNMMmyo`+yMMho:..-+//++omMNNNNNNNmdNMs
       :mMMMh`yMNdodNNNMNMMMs.+sdmmmmmdhNMMMNhy/..`-syhNmdyssso+/.`:yNMMMMNMNMMMy
      :NMNh:-+MMh+mdNNNNNMd.+NNMMMMMMMMmho:-......:--::ohNMMMMMMNmNy/.oNMNmNMNMMMs
     :NMm+/dmmMNydyhNdhMMN.yMMNmhysso+:-``        ```.--:/+sdMMMMMNNNm:-mMNNNNMMMMy
    :NMy/hNMMMMmNddsh/NmMy-Mms:..`.--.`                ``..-.:yNMMMMNMNs:NMMMNNNNMMy
   :NNy/mMMMMMMmNMMshsNdMo/d-...``                       ```...-yMMMNNMd`NMMNMdmoNMM-
  /mMm+NMNNMMNMNNNNNNNNMMmom/                              ```..`+NMMMMh`NMMMMNNdhNMh
 +NMMmmMNyNMNMMMMMNmmmNMdNNyh+.                             ``````/NMMM::MMMMNMNNmNMN
+MNNMMMNymMNNMMMNNNNNMh+:+dNmddhyoo+`                        ````.`sMMN`sMNNMNNMNNNNN
dNNNMNNddMNNNNNNmymMN+---::/shdhyyy:                         `````..hMo.NMNMNMMMNmMMd
dNNNMMNmNNNmmNMNdNMM+.-..----.-:::.                          ````...:mh/NMMMNMMMNNMMh
sMNNMMNMNNmyNMNdmNMo--.....                                  ``...---:dNMNMMNMMNNNMMN.
:NNNMMMNNNsmMNmMNMy...`.-.`                                    `.-----:odNmmNMMMMMNMMo
.NMMMmMMMNmMNNNNMm:-.```..                                       ``-----:/o//dMMMNMMMm
.NMMMNMMNMMNMNNNNs--.``...                                         `....---..dMNMMMMM`
.NNMMNNNNNMMMNNNN:-...`...                                          ```.....`+MMMMMMM.
.MNNNNNNNMMMMMNNy.......-.`                                         ``..---.`.NMMMMMM`
`NMNMMNNNMMNMMMm-...`.-----.`                                        ``.-----.`yMMMMMd
 dMMMNNNNMMNNMMo`-....----..`          ``                      `.`` ```.------`:MMMMM-
 /MMNMNNNMMNMMN-`.`..-.--.` `--..-:-.-.``..``               ```.-......--.----..NMMMd
 `mMNMNNMMMNNMN.``...-.-../hddyysyhysyyso+--/::-..--...----:::+syyyyhhdddy+:-.-.hMMM:
  :NNNNNNMMMMMN.`....--.:dy/:-.-/+++ososss+/:+shyo/::/:+os+:+syosyoso+/://ss//.`+MMm
   +MdmNNMNMMMN+.--....:+-.-:+ooymdddmdhyo++ss+/yMo.`..oNsyhdhmdmmmmNmdo:-.--:+-:MM/
  `y/..-+dNNMMMo-shhyo++--+sso-`dsymoso.smyso+//.od+/:/ho+yyhd/ymsNhyy./yy/``.-hhmm`
  .s+md+- oMMMm``.-/sy//-.+/s.  odys+s-  /shyso+.sm+:::yd/hh+:`.hyyhy- `/y/.` `hs/s`
  -oyMNyhs:NMMo     `.-`         .---` ``.`/::+s/ms````-mo+:`````.--` ````     `sNm`
  `hsMh`.hymMM:       `-         `          .:+:hy`     od:-`                  .+sM-``
   o+o/``-/mMM-        .-                ``.```hy`       s.`.`                 -/+M+``
   .s `./NMMMM-         --            ````  `:ho`        .s`  ```             ./.+My`
    /: `+MMdMM/          -.  `       `   ..+++-           :d/.             ``:o-`oMy
     o. .sdNMMm`            `--:://+//.`-///:.           `.ohooo:-.`` `.-:+//:..`hMy
     `s```.yMMMs                  ```     .y+  `::.:----.-``o:-::/:::--:::-----..mMo
      :s` `oMNMN-                         :N+  -NNhy/:/sds./:..----------------`/MN
        +o``-NMNMd`                      `-syyoo++/.++:so/+yN+..--....-..-....--`dM+
        +:.`oMNNN`                     .:-` `.::.` `--..---/+/---.```........-.:d:
         ./++Ny::`                   `--`          .--..-----::-..```......---.s.
           `:os.--`                  .`            `.. ``.------.`.```..-----.:o
             `h-..`                 ``        .:syy/-/ydho-.--...`````.------.+.
              +o`.`                        ./ymNNNNNNNmmNNNh:....``.```.-----:s
              `h-`.                    -/+oyo/:----:---.--:+sso:........--::-+:
               /d...                 `.++:  -:--/+:/oo+o++-.``--.....-----:-:y
               `Md:.`                ``     `-:/+ooooo+/-........-----------yo
                mNNs-`                     `..-/oo+://:/oo:......----------os
                h:+md:.                  ...``.`         `------.---------++
               `h..-+ddo.`                            ``.----------------s:
                h` .--/ydy:`                   `...--------------------+y.
                h`   ..--+yds+.`               `....----------------:+dN`
               `y      `.-.-:sdhs:.`    `...````..----------------:smsdm
               `h         .--..-+ymdy+/:----:----------------.-/shs+.`os
               `h           `..--..:sdmmhyo/::----------::/+syhy/....`+-
               -y              `..--..--/oosyyyhhhyyyssoooo/:.`...`.` /-
               `.                  `..--.......................````   +`
                                      `...------..-.........``
                                          ``..-.--........``
                                               ```..```
 
*/

const long long inf = 1e18;
const int MOD = 998244353;
const int MAX = 1e6;

bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

int32_t main() {
    fast
    int t;
    cin >> t;
  while(t-->0) {
    int n;
    cin >> n;
    int l[n],r[n];
    map<pair<int,int>,int> mp;
    for(int i=0;i<n;i++){
        cin >> l[i] >> r[i];
        mp[{l[i],r[i]}]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=l[i];j<=r[i];j++){
                if(l[i]==r[i])
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
                if(mp[{l[i],j-1}]==1 && mp[{j+1,r[i]}]==1)
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
                if(j==l[i] && mp[{j+1,r[i]}]==1||j==r[i] && mp[{l[i],j-1}]==1)
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
        }
    }
		

  }

  return 0;
}

