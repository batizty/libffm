#include <chrono>

/**
 * 记录间隔时间的Class，用来记录间隔时间
 */
class Timer
{
public:
    /** Construct **/
    Timer();
    void reset();
    
    /** refresh timer start **/
    void tic();

    /** refresh duration **/
    float toc();

    /** return duration long **/
    float get();
private:
    std::chrono::high_resolution_clock::time_point begin;
    std::chrono::milliseconds duration;
};
