class Logger {
public:
    map<string, int> message_to_time;

    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if (message_to_time.count(message) > 0 &&  message_to_time[message] + 10 > timestamp) {
            return false;
        }
        message_to_time[message] = timestamp;
        return true;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */
