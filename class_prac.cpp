#include <iostream>
#include <string>

using String = std::string;

class Log
{
public:
    const int logLevelInfo = 1;
    const int logLevelWarning = 2;
    const int logLevelError = 3;

private:
    int m_LogLevel = logLevelInfo;

public:
    Log()
        : m_LogLevel(logLevelInfo) {}
    Log(int logLevel)
        : m_LogLevel(logLevel) {}

    void setLogLevel(int logLevel)
    {
        m_LogLevel = logLevel;
    }
    void getLogLevel()
    {
        std::string level[3];
        level[0] = "INFO";
        level[1] = "WARNING";
        level[2] = "ERROR";
        std::cout << "The current log level is " << level[m_LogLevel] << '\n';
    }
};
