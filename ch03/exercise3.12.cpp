vector<vector<int>> ivec;         // 合法
vector<string> svec = ivec;       // 不合法，类型不同
vector<string> svec(10, "null");  // 合法

