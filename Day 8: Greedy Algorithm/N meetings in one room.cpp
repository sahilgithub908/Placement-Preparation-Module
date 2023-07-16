vector<pair<int, int>> meetings;

    for (int i = 0; i < n; i++)
    {
        meetings.push_back(make_pair(end[i], start[i]));
    }

    sort(meetings.begin(), meetings.end());

    int count = 1;
    //The count variable is initialized to 1 
    //because we start with at least one meeting that can be accommodated in the meeting room.
    int prev_end = meetings[0].first;

    for (int i = 1; i < n; i++) 
    {
        if (meetings[i].second > prev_end) 
        {
            count++;
            prev_end = meetings[i].first;
        }
    }

    return count;
    }
