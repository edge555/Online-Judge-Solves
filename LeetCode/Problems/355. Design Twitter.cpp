class Twitter {
public:
    int totalTweet;
    unordered_map<int,unordered_set<int>>following;
    unordered_map<int,vector<pair<int,int>>>post;
    Twitter() {
        following.clear();
        post.clear();
        totalTweet=0;
    }

    void postTweet(int userId, int tweetId) {
        post[userId].push_back({totalTweet,tweetId});
        totalTweet++;
    }

    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int cnt=0;
        for(auto s:following[userId]){
            auto allPost=post[s];
            int i=allPost.size()-1,cnt=0;
            while(i>=0 && cnt<10){
                pq.push(allPost[i]);
                if(pq.size()>10){
                    pq.pop();
                }
                cnt++;
                i--;
            }
        }
        auto allPost=post[userId];
        int i=allPost.size()-1;
        cnt=0;
        while(i>=0 && cnt<10){
            pq.push(allPost[i]);
            if(pq.size()>10){
                pq.pop();
            }
            cnt++;
            i--;
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};
