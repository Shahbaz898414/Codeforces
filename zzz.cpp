#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(std::string t1, std::string t2) {
        int m = t1.length();
        int n = t2.length();

        // Create a matrix to store the lengths of common subsequences
        std::vector<std::vector<int>> matrix(m + 1, std::vector<int>(n + 1, 0));
      

        // Fill the matrix bottom-up
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                if (t1[i] == t2[j]) {
                    matrix[i][j] = 1 + matrix[i + 1][j + 1];
                } else {
                    matrix[i][j] = std::max(matrix[i][j + 1], matrix[i + 1][j]);
                }
                
            }
            
        }

        
        

        // Return the length of the longest common subsequence
        return matrix[0][0];
    }
};

int main() {
    // Test case
    Solution solution;
    std::string t1 = "abcde";
    std::string t2 = "ace";
    int result = solution.longestCommonSubsequence(t1, t2);
    cout << "Length of longest common subsequence: " << result << endl;

    return 0;
}







/*


Number of Axes .-
Each robotic manipulator has a number of axes about which it's links
rotate or along Which its links translate. Usually, the frst three
axes, or major axes, are used to establish the position of the wrist,
While the remaining ares are used to establish the crientation
of the dool ov gripper.

2. Capacuy and Speed
Load - canying capacity Varies greaHy between robotS. Fox
example, the Minimaver 5 Micvobor, an educaHonal toble - top
robor, has a load Sarying Capacity of a.2. kg. At the afioise
of the spectrum, he GcA -XRE Extended Reach Industial
Yobot has a load casrying capacity of 4928 kg.
The maximum tool- tip speed can also Vary SubStanHally bekueen
manipulators . The westinghouse series 4000 robot has a
tool- Hp speed of 92 mm/sec, While the Adept One SCARA
robor has a dool Hp speed of 9000 mm/Sec.
w Cycle. Hme - is the ime required to perform a
periodic moHon similar to a simple pick and place operalien.

////////////////////////


Co-ordinate frames


*/

/*

322. Number of Connected Components in an Undirected Graph blind 75,Blind 75,Blind 75 LeetCode Sheet Solved,Blind 75 Sheet Solved,Number of Connected Components in an Undirected Graph blind 75,Number of Connected Components in an Undirected Graph,322. Number of Connected Components in an Undirected Graph,322 Number of Connected Components in an Undirected Graph on leetcode,322 on leetcode,322 on leetcode solved,Number of Connected Components in an Undirected Graph c++,Number of Connected Components in an Undirected Graph python,Number of Connected Components in an Undirected Graph solution


#30dayschallenge
#challenge
#consistency
#Cp 
#AlgorithmExplained 
#ProblemSolving
#lessons
#learning
#Youtube


////////////////////
Q. 6 Write short notes on any two :-
(a) Generalized Voronoi Diagram (GVD)
(b) Kinematic parameters
(c) Robotic work cell
(d) Shrink & Swell Operators

Normal sliding and approach vector

///////////////////////////////////////////////

The Denavit - Hartenberg (D-H RepresentaHon.
(D-H Mlgtorithm gives sysiematic hataHon for assighing
Yighi- handed orthonormal - Co-ardinate frames ,one to each link
in an open Kinemdlic. Chain af links)(Atler assighing Co-asdinok
frames, transfor mation berween adjacent co-ordinate frames
Can ten be vepresented by a single stendard 4x4
homogeneous co-ardinate hansfor mation mdtrix)
frhe D-H algorithm is a two pass algorithm . on the
.ftrst pass C steps o through 7), a ser of ntl vight handed
erthonoxmal co-ordinate frames assigned to each unk(on
The Second pass (steps 8 thsougn 13), the values for the.
KinemaHc. paxameters (0, d,a) x) are deler mined ?

Number the Joints from It n Starhng Wiw me
ending wih the too). yaw, pitch and voll in mel- ordey ..
Asslgn a vighr handed orthonssmal co-erdinate frame La to
the robot base, making Sure that z"aligns with the axis
of joint 1. set K=l.
Allgn zk with the axis of jolnt k+ !.
Locale the orlgin af Lk at the IntersecHon of the zh and
zk axes . If they do not Intersect, use the Intessechon af
zk with a common novmal between. zkand zki.
Selech xk to be ovthogonal to both zh and zk4. 2f zk
and zk-i are parallel, point xk away from.k !.
Selecr yk ts form a right handed ortno normal Ca-odinase frame.
LK.
Ser K=ktl. f k<n, ga + Step a; ele cantinue.
ser the origin af Ln at the tool Hp . Aign z" with the
appooach vecheryh with the Sliding vecies, and xn with hhe.
horma Vector of te tool. ser kel.

//////////////////////////////////

27

General propestles of SolyHions - (pI .. Reler Class Notes))
1- Gxistence.of Solutions -
if.the desived tool -Hp position p is ourside. its Wask envelape
then no SoluHon can exist.
Even. When p .is withln the Work envelope, there may be
certain tool onenratons R Which are not realixable
Without violating one or more of the joint variable limils.

2 _ Uniqueness of Solution -
The existence of a soluHon to the inverse kinematics
Problem Is not the only Issue dhat needs to be addressed.
When soluHons clo exist, typically they are not unique.
Foy example, So me tobots are. designed wimn naxes
Wheve h>6. Fo these Ychots, inhnitely muny solutiont
to the Inverse kinematice problem tpically exist. Hence.
h>6 robots are rejerred as KinemaHcally redundant
robots, because. Wey have more degrees of freedom
han are necessary to estahli.sh arbitary tool Confiqtralh.

////////////////


322. Number of Connected Components in an Undirected Graph blind 75,Blind 75,Blind 75 LeetCode Sheet Solved,Blind 75 Sheet Solved,Number of Connected Components in an Undirected Graph blind 75,Number of Connected Components in an Undirected Graph,322. Number of Connected Components in an Undirected Graph,322 Number of Connected Components in an Undirected Graph on leetcode,322 on leetcode,322 on leetcode solved,Number of Connected Components in an Undirected Graph c++,Number of Connected Components in an Undirected Graph python,Number of Connected Components in an Undirected Graph solution

*/