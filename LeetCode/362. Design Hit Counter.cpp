class HitCounter
{
public:
    deque<int> dq;
    HitCounter()
    {
    }

    void hit(int timestamp)
    {
        dq.push_back(timestamp);
    }

    int getHits(int timestamp)
    {
        while (!dq.empty())
        {
            if (timestamp - 300 >= dq.front())
            {
                dq.pop_front();
            }
            else
            {
                break;
            }
        }
        return dq.size();
    }
};