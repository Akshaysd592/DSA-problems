#include <bits/stdc++.h>
using namespace std;

// only writing fuction for the program to be written in leetcode question number 54

vector spiralorder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // index initialization
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;
    while (count < total)
    {

        // printing starting row first
        for (int index = startingcol; index <= total && endingcol; index++)
        {
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;

        // printing ending column
        for (int index = startingrow; index <= total && endingrow; i++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;

        // printing endingrow now
        for (int index = endingcol; index >= startingcol; index--)
        {
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;

        // printing startingcol

        for (int index = endingrow; index >= startingrow; index--)
        {
            ans.push_back([index][startingcol]);
            count++;
        }
        startingcol++;
    }

    return ans;
}

// again writing same program for better understanding

vector returnspiral(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int startingrow = 0;
    int endingrow = row - 1;
    int startingcol = 0;
    int endingcol = col - 1;

    int count = 0;
    int total = row * col;
    while (count <= total)
    {
        // printing startingrow

        for (int index = startingcol; index <= total && endingcol; index++)
        {
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;

        // printing endingcol
        for (int index = startingrow; index <= total && endingrow; index++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;

        // printing endingrow
        for (int index = endingcol; index >= startingcol; index--)
        {
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;

        // printing startingrow
        for (int index = endingrow; index >= startingrow; index--)
        {
            ans.push_back(matrix[index][startingrow]);
            count++;
        }
        startingrow++;
    }
    return ans;
}