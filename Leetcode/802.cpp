#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<int, bool> checked;
    vector<vector<int>> g;
    bool dfs(int node){
        if (checked.count(node)){
            return checked[node];
        }
        checked[node] = false;
        for (auto child: g[node]){
            if (!dfs(child)){
                return checked[node];
            }
        }
        checked[node] = true;
        return checked[node];
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        g = graph;
        vector<int> array;
        for (int i = 0 ; i < g.size(); i++){
            if (dfs(i)){
                array.push_back(i);
            }
        }
        return array;

    }
};