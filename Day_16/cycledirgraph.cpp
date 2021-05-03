// Course Schdule 
// There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

// For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
// Return true if you can finish all courses. Otherwise, return false.

class Solution {
public:
    
    bool cyclic(int V, vector<int> adj[]) {
	   	vector<int>indegree(V,0);
	   	for(int i = 0 ; i < V ; i++){
	   	    for(auto j :  adj[i]){
	   	        indegree[j]++;
	   	    }
	   	}
	   	queue<int> q;
	   	for(int i = 0 ; i < V ; i++){
	   	    if(indegree[i] == 0) q.push(i);
	   	}
	   	int cnt = 0; 
	   	while(!q.empty()){
	   	    int k = q.front();
	   	    q.pop();
	   	    cnt++;
	   	    for(auto i : adj[k]){
	   	        indegree[i]--;
	   	        if(indegree[i] == 0)q.push(i);
	   	    }
	   	    
	   	}
	   	if(cnt == V) return false;
	   	return true;
	}
    
    bool canFinish(int num, vector<vector<int>>& pre) {
        vector<int> g[num];
        for(int i = 0 ; i < pre.size() ; i++){
            int a = pre[i][0];
            int b = pre[i][1];
            //cout << a << " " <<b<< endl;
            g[a].push_back(b);
        }
	    if(cyclic(num , g)) return false;
        return true;
	
    }
};
