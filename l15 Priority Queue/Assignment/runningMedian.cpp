/*
@csalgo

Chapter Assignment
Problem Statement: Running median
Problem Level: HARD
Problem Description:
You are given a stream of N integers. For every i-th integer added to the running list of integers, print the resulting median.
Print only the integer part of the median.
Input Format :
The first line of input contains an integer N, denoting the number of integers in the stream.

The second line of input contains 'N' integers separated by a single space.

Output Format :
Print the running median for every integer added to the running list on a new line.

Input Constraints
1 <= N <= 10^5
1 <= Ai <= 10^5

Time Limit: 1sec

Sample Input 1 :
6
6 2 1 3 7 5

Sample Output 1 :
6
4
2
2
3
4

Explanation of Sample Output 1 :
S = {6}, median = 6
S = {6, 2} -> {2, 6}, median = 4
S = {6, 2, 1} -> {1, 2, 6}, median = 2
S = {6, 2, 1, 3} -> {1, 2, 3, 6}, median = 2
S = {6, 2, 1, 3, 7} -> {1, 2, 3, 6, 7}, median = 3
S = {6, 2, 1, 3, 7, 5} -> {1, 2, 3, 5, 6, 7}, median = 4

Sample Input 2 :
5
5 4 3 2 1

Sample Output 2 :
5
4
4
3
3



=====Answer=====
Correct Option:

@csalgo
*/
#include <iostream>
using namespace std;
#include <queue>
#include <vector>

void runningMedian(int *input, int size)
{
    int element;
    vector<int> v;
    // priority_queue<int> pq;
    priority_queue<int> maxPQ;
    priority_queue<int, vector<int>, greater<int>> minPQ;
    int median;
    // maxPQ.push(input[0]);
    for (int i = 0; i < size; i++)
    {
        v.push_back(input[i]);
        if (v.size() % 2 != 0)
        {
            if (maxPQ.empty() && minPQ.empty())
            {
                maxPQ.push(v.at(i));
                cout << maxPQ.top() << endl;
            }
        }
        else
        {
            maxPQ.push(v.at(i));
            // build heap
            int childIndex = i;
            while (childIndex > 0)
            {
                int parentIndex = (childIndex - 1) / 2;
                if (input[childIndex] < input[parentIndex])
                {
                    int temp = input[childIndex];
                    input[childIndex] = input[parentIndex];
                    input[parentIndex] = temp;
                }
                else
                {
                    break;
                }
                childIndex = parentIndex;
            }

            if(maxPQ.top()>minPQ.top()){
                
            }
        }
    }
}
