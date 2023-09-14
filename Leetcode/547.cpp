#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;
class Solution
{
public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        map<int, vector<int>> graph;
        for (int i = 0; i < isConnected.size(); i++)
        {
            graph[i + 1] = {};
            for (int j = 0; j < isConnected.size(); j++)
            {
                if (isConnected[i][j] == 1)
                {
                    graph[i + 1].push_back(j + 1);
                }
            }
        }
        int provinces = 0;
        vector<int> color(isConnected.size() + 1);
        fill(color.begin(), color.end(), 0);
        for (auto pair : graph)
        {
            if (color[pair.first] == 0)
            {
                provinces++;
                int root = pair.first;
                queue<int> q;
                color[root] = 1;
                q.push(root);
                while (!q.empty())
                {
                    int currentNode = q.front();
                    q.pop();
                    for (auto node : graph[currentNode])
                    {
                        if (color[node] == 0)
                        {
                            q.push(node);
                            color[node] = 1;
                        }
                    }
                }
            }
        }
        return provinces;
    }
};