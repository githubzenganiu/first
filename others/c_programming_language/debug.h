#ifndef DEBUG_H_
#define DEBUG_H_
#define DEBUG_LOG 1
#ifdef DEBUG_LOG
#define LOG(imp, str) cout<< __FILE__<< " "<<__LINE__<<" "<<__func__<<" "<<str<<endl;
#define LOG_P(imp, str, p) cout <<__FILE__<<" "<<__LINE__<<" "<<__func__<<" "<<str<<" "<<p<<endl;
#else
#define LOG(imp, str) 
#define LOG_P(imp, str, p) 
#endif

#endif

