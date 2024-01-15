#include <iostream>
using namespace std;

int max_contiguous_length(int N, int A[]) {
    if (N == 0) {
        return 0;
    }

    int a = 1, b = 1,c = 1;

    for (int i = 1; i < N; ++i) {
        if (A[i] > A[i - 1]) {
            a++;
            b = 1;
        } else if (A[i] < A[i - 1]) {
            b++;
            a = 1;
        } else {
            a = b = 1;
        }

       c = max(max_len, max(a, b));
    }

    return c;
}

int main() {
    // Example 1

    int n;cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    
  
    int output = max_contiguous_length(n, arr);
    cout <<  output << endl;

    // // Example 2
    // int input3 = 3;
    // int input4[] = {2, 2, 2};
    // output = max_contiguous_length(input3, input4);
    // cout << "Example 2 Output: " << output << endl;

    return 0;
}





/*


Question 1

How to Attempt?

Customer Purchase Data

George is a software developer who is currently working on a project involving the
analysis of customer purchase data. He has been given the purchase data of N
customers and an array A which consists of N customer purchase amouints that he
must analyze.
George must perform the following operations on the customer purchase amounts:
. He must identify the largest contiguous increasing subarray.

. He must identify the largest contiguous decreasing subarray.

. Finally, he needs to find the maximum length between the two subarrays.

Your task is to help George find and return an integer value representing the
maximum length of the subarray's largest contiguous increasing and decreasing
subarray.

Note: Contiguous elements are consecutive elements.

Revisit Later


Note: Contiguous elements are consecutive elements.

Input Specification:
input1 : An integer value N, denoting the number of customers.
input2 : An integer array A of N integers, denoting N customer purchase
amounts.

Output Specification:
Return an integer value representing the maximum length of the subarray's largest
contiguous increasing and decreasing subsequenœes.

Example 1:

input1 :6
input2 : (25,46,15,96,24,10)

Output : 3



Example 1:

input1 :6
input2 : (25,46,15,96,24,10)

Output : 3

Explanation:
We have been given the purchase data of 6 customers and the customer purchase
amounts are (25,46,15,96,24,10).
We apply the operations on the customer purchase amounts in the following way:
. There are 2 contiguous increasing order subarrays: (25,46) and {15,96}. Here
the length is of the subarrays is 2.

. The largest contiguous decreasing order subarray is (96,24,10} whose length is
3.

Since 3 > 2, the maximum length is 3. Therefore, 3 is retumned as the output.

Example 2:

input1:3
input2 : (2,2,2)

Output : 1

Explanation:
We have been given the purchase data of 3 customers and the customer purchase
amounts are (2,2,2]. Since all the elements are same, the contiguous increasing and
decreasing order subarray would be (2} and the length of this array is 1. Hence, 1 is
returned as the output.


*/


/*


1

{

6

7

8

9

10

11
12



public static void main(string args[])

TreeMap tm =new TreeMap();
tm.put("x", new Integer(1));
tm.put("Y", new Integer (2));
tm.put("z", new Integer (3));
System.out.println(tm.entryset());

Consider that you are working on a program in which you have implemented the Treemap in the code
shown alongside:
import java.util .*;
2 class Maps
3
4
5


What will be the correct output of this code? Analyze the given choices and select the correct option.


*/

/*


Consider that you are working on a program in which you have implemented the Treemap in the code
shown alongside:

import java.util .*;
class Maps
{

public static void main(string args[])

TreeMap tm = new TreeMap();
tm.put("x", new Integer(1));
tm.put("Y", new Integer (2));
tm.put("z", new Integer (3));
System.out.println(tm.entryset());

}

What will be the correct output of this code? Analyze the given choices and select the correct option.


Select an option



[X=1, Y=2, Z=3]

[X, Y, Z]

[1,2,3]

{X=1,Y=2,Z=3}


*/


/*

Question 3

Which of the following pseudocodes implements DFS?

A)

void search(Node root){
if(root == null) return;
visit(root);
root. visited = true;
for each (Node n in root.adjacent){
if(n.visited == true){
search(n);
}
}
}

C)
void search(Node root) {
if(root == null) return;
visit(root);
root. visited = false;
for each (Node n in root.adjacent){
if(n.visited == true){
search(n);
}
}
}

D)
void search(Node root){
if(root == null) return;
visit(root);
root.visited = false;
for each (Node n in root.adjacent){
if(n.visited == false){
search(n);
}
}
}


*/

/*

The function "swap" given below will perform the action of swapping two values in an array. If the array
and the number of elements in the array "n" is passed as parameters to the function, what is the output
array obtained after the 2nd iteration?

Note: consider an array of items (33,54,65,34,79,23,13,19).


FUNCTION solve(array[ ], n)

DECLARE i, min
FOR(İ = 0; i< n - 1; i++)
min = i

FOR( j = i+1; j<n ; j++)
IF (array[j] < array[min]) THEN
min = j
END IF
END FOR

IF (min != i) THEN
swap (array[min], array[i])
END IF
END FOR

END FUNCTION


Select an option

(13,19,23,33,34,54,65,79)

(13,54,65.34,79,23,33,19|

[13,19,65,34,79,23,33,54)

(13,19,23,34,79,33,54,65)

*/


/*



What is the functionality of the following piece of code?


Node temp = tafl.getPrev();

public int function()
{
I Node temp = tail.getPrev();
tail.setPrev(temp.getPrev());
temp.getPrev().setNext(tail);
size --;
return temp.getItem();

}

Select right an option



Return the element at the tail of the list but do not remove it

Return the element at the tail of the list and remove it from the list

Return the last but one element at the tail of the list and remove it from the list

Return the last but one element from the list but do not remove it

*/

/*

Consider the following recurrence relation of the all pairs of shortest paths and find out their time
complexity:
Ak(ij)= {0
min(Ak-1(i.j) , Ak-1(i,k)+Ak-1(k,j)

ifi=j
if i != j }

Select an option

O(2^n)

(Evu)O

O

O(3^n)



Consider the following statements
S1. Greedy approach always gives correct result in less time in comparison to dynamic method.
S2. Dynamic approach always gives correct answer in less time in comparison to greedy method .
S3. Dynamic approach always gives correct answer in more time in comparison to greedy method.
S4. Greedy approach always gives correct result in more time in comparison to dynamic method.

Which of the above statements is true?


Select an option


Only S1

Only S2


only S3


only S4



Find out the time complexity of the following program:
1 int maxLength(int a[], int n)
2
3
4
5

6

7
8
9
10
11
12
13
14

int a[]= { 1, 2, 3, 2 };
int n = sizeof(a) / sizeof(a[0]);
cout << maxLength(a, n) << "\n";
return 0;

int sum = 0, len = 0;
for (int i = 0; i < n; i++)
sum += a[i];
if (sum % 2 == 0) I
return n;
for (int i = 0; i < n; i++)

if (a[i] % 2 == 1)
len = max(len, max(n - i - 1, i));

return len;

15 int main()
16
17
18
19

20
21 }




int maxLength(int a[], int n)
{

int sum = 0, len = 0;
for (int i = 0; i < n; i++)
sum += a[i];
if (sum % 2 == 0)
return n;
for (int i = 0; i < n; i++)
{

if (a[i] % 2 == 1)
len = max(len, max(n - i - 1, i));
}
return len;
}
int main()
{
int a[]= { 1, 2, 3, 2 };
int n = sizeof(a) / sizeof(a[0]);
cout << maxLength(a, n) << "\n";
return 0;
}



READ N
WHILE even <= N

6
7

How many times the while loop will be executed for N = 8?
1 SET even = total = 0;
2

 total = total + even;
 even = even + 2;
ENDWHILE
PRINT total




How many times the while loop will be executed for N = 8?

SET even = total = 0;
READ N
WHILE even <= N
total = total + even;
even = evep + 2;
ENDWHILE
PRINT total

Select an option


4

8

5

9




Your program needs to assign designations to an employee according to their seniority level and the
yeals of service they did in an organization. How will you implement that?
A)
Let the age of employee = 50
Let years of service = 10
if (age of employee > 40) and years of service
> 5) {
BAND = 'A';
else if (age of employee > 40) {
BAND = "B"

...

B)
Let the age of employee = 50
Let years of service = 10
if (age of employee > 40 and years of service
> 5) {
BAND = 'A';
else if (age of employee > 40 and years of service
> 2) {
BAND = "B"

.......


C)
Let the age of employee = 50
Let years of service = 10
if (age of employee I, 40) {
BAND = 'A';
else if (age of employee > 30 and age of employee < 40) {
BAND = "B"
..

D)

Let the age of employee = 50
Let years of service = 10
if (years of service > 10) {
BAND = 'A';
else if (years of service > 5 and years of service <= 10) {
BAND = "B"

..

I





Assume that you are a Linux system administrator responsible for managing a high-performance web
server that hosts a complex web application. Recently, the server has been experiencing intermittent
performance issues, and you suspect that one or more processes are consuming excessive CPU resources,
causing the slowdown. In order to diagnose and resolve the problem, you need to implement a
comprehensive system resource monitoring script that identifies the top three CPU-consuming processes
on the server.

How will you write a Bash soript that monitors CPU usage on a Linux server and prints the top three CPU-
consuming processes along with their respective CPU utilization percentages? The script should refresh
the output every 5 seconds and terminate after running for 1 minute. You must use standard Linux
command-line tools to fulfill this task.

Analyze the given choices and select the correct option.

A)
#!/bin/bash
duration=60
interval=5

for ((i=0; i<$((duration/interval)); i++))
do
ps -eo pid,%cpu, comm -- sort =- %cpu | head -n 4 | tail -n 3
sleep $interval
done

B)
#!/bin/bash
duration=60
interval=5

for ((i=0; i<$((duration/interval)); i++))
do
top -bn1 | head -n 17 | tail -n 15 | awk '{print $1, $9,
$12}
sleep $interval
done

C)
#!/bin/bash
duration=60
interval=5

for ((i=0; i<$((duration/interval)); i++))
do
ps -eo pid,%cpu, comm -- sort =- %cpu | tail -n 3 | awk '{print
$1, $3}'
sleep $interval
done

D)
#!/bin/bash
duration=60
interval=5

for ((i=0; i<$((duration/interval)); i++))
do
top -bn1 | head -n 12 | tail -n 10 | awk '{print $1, $9,
$14}'
sleep $interval
done




Assume that you are troubleshooting a kernel panic issue on a Linux server and suspect that a faulty
driver might be causing the problem. You decide to investigate by analyzing the kernel stack trace.
Consider the given C code snippet:


#include <stdio.h>
#include <stdlib.h>

void faultyFunction() {
int *ptr = NULL;
*ptr = 10; // Access violation, causing a kernel panic
}
void myFunction() {
faultyFunction();

}

int main() {
myFunction();
return 0;
}

Assuming this code snippet triggers a kernel panic, which line of code in the stack trace will likely indicate
the cause of the kemnel panic? Select the correct option from the given choices.

Select an option



ptr = 10; // Access violation, causing a kernel panic

void faultyFunction0 {

void myFunction0 1



int main0 {

    ///////////////////////////



    Consider you are a Linux system administrator responsible for managing a high-performance web server
that hosts a complex web application. Recently, the server has been experiencing intermittent performance
issues, and you suspect that one or more processes are consuming excessive CPU resources, causing the
slowdown. To diagnose and resolve the problem, you need to implement a comprehensive system
resource monitoring script that identifies the top three CPU-consuming processes on the server.

How will you write a Bash soript that monitors CPU usage on a Linux server and prints the top three CPU-
consuming processes along with their respective CPU utilization percentages? The script should refresh
the output every 5 seconds and terminate after running for 1 minute. You must use standard Linux
command-line tools to achieve this task.

Analyze the given choices and select the correct option.

A)
#!/bin/bash
duration=60
interval=5

for ((i=0; i<$((duration/interval)); i++))
do
ps -eo pid,%cpu, comm -- sort =- %cpu | head -n 4 | tail -n 3
sleep $interval
done

B)
#!/bin/bash
duration=60
interval=5

for ((i=0; i<$((duration/interval)); i++))
do
top -bn1 | head -n 17 | tail -n 15 | awk '{print $1, $9,
$12}'
sleep $interval
done

C)




/////////////////////////////////////////////

Assume that you are managing a duster of servers in a heterogeneous environment with various Linux
distributions induding CentOS, Ubuntu, and Fedora. You have been alerted of a potential network
intrusion and you suspect a kernel-level rootkit is involved. You have taken a few snapshots of the /proc
filesystem across your server farm and want to inspect all the active processes across different
servers. You dedde to write a shell script that will use these snapshots and perform the given operations:

-Parse the process list snapshot taken from /proc for each server.
-Check if there are any hidden processts that are not listed in /proc/[pid]/status but still show up in
/proc/[pid]/sched for every pid.
-Compile a report for atl such processes, listing the PID, process name, and the server it was found on.

You need to execute this script on a central admin server that has ssh-based passwordless sudo access to
all other servers. Which command sequence will be appropriate for such a script? Analyze the given
choices and select the correct option.

A)

#!/bin/bash

SERVERS=("server1" "server2" "server3")
REPORT_FILE="hidden_processes_report.txt"

for server in "${SERVERS[@]}"; do
echo "checking hidden processes on $server ... "
ssh admin@$server "sudo find /proc -maxdepth 1 -type d -regex
'/proc/[0-9]+' -exec sh -c 'echo -n \"PID: \"; cat {}/status
| grep -E \"^pid|^Name\"; echo -n \"Sched: \"; cat {}/sched |
grep -E \"^se. sum_exec_runtime|Anr_switches\"' \;" >>
$REPORT_FILE
done

B)

#l/bin/bash

SERVERS=("server1" "server2" "server3")
REPORT_FILE="hidden_processes_report.txt"

for server in "${SERVERS[@]}"; do
echo "checking hidden processes on $server ... "
ssh admin@$server 'sudo find /proc -maxdepth 1 -type d -regex
"/proc/[0-9]+" -exec sh -c "echo -n \"PID: \"; cat {}/status
| grep -E \"^Pid|"Name\"; echo -n \"Sched: \"; cat {}/sched |
grep -E \"^se. sum_exec_runtime|^nr_switches\"" \;' >>
$REPORT_FILE
done

C)
#!/bin/bash

SERVERS=("server1" "server2" "server3")
REPORT_FILE="hidden_processes_report.txt"

for server in "${SERVERS[@]]"; do
echo "checking hidden processes on $server ... "
ssh admin@$server 'sudo find /proc -maxdepth 1 -type d -regex
"/proc/[0-9]+" -exec sh -c "echo -n PID: ; cat {}/status |
grep -E ^Pid|"Name; echo -n Sched: ; cat {]/sched | grep -E
^se. sum_exec_runtime|"nr_switches" \;' >> $REPORT_FILE
done

D)
#!/bin/bash

SERVERS=("server1" "server2" "server3")
REPORT_FILE="hidden_processes_report.txt"

for server in "${SERVERS[@]}"; do
echo "checking hidden processes on $server ... "
ssh admin@$server 'sudo find /proc -maxdepth 1 -type d -regex
"/proc/[0-9]+" -exec sh -c '\'echo -n PID: ; cat {}/status |
grep -E ^Pid|^Name; echo -n Sched: ; cat {}/sched | grep -E
^se. sum_exec_runtime|"nr_switches'\'' \;' >> $REPORT_FILE
done
*/

