int lengthOfLongestSubstring(char* s) {
    bool* watcher;
    int res = 0;
    for (int i = 0; i < strlen(s); i++) {
        //free(watcher);
        bool* visited = malloc(sizeof(bool) * 256);
        for (int k = 0; k < 256; k++) {
            visited[k] = false;
        }
        //watcher = visited;
        for (int j = i; j < strlen(s); j++) { 
            if (visited[s[j]] == true) {
                break;
            }
            else {
                if (res > (j - i + 1)){
                    res = res;
                }
                else {
                    res = (j - i + 1);
                }
                visited[s[j]] = true;
            }
        }
        visited[s[i]] = false;
    }
    //free(watcher);
    return res;
}