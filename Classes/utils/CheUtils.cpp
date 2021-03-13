/*
 *  
 *
 *  CheUtils.cpp in AICnChess
 *  create on 2021/3/10
 *
 */

#import "CheUtils.h"


bool CheUtils::checkStdStr(std::string str){
    char c;
    c = (char)(str[0]);
    if(!(('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))){
        return false;
    }
    for(size_t i = 1; i < str.length() ;++i){
        c = str[i];
        if(!(('0' <= c && c <= '9') ||
             ('A' <= c && c <= 'Z') ||
             ('a' <= c && c <= 'z') ||
             (c == '_') )){
            return false;
        }
    }
    return true;
}
