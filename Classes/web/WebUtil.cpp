/*
 *  
 *
 *  WebUtil.cpp in AICnChess
 *  create on 2021/3/11
 *
 */

#import "WebUtil.h"

#import <random>

chekey_t WebUtil::getRandKey(){
    std::mt19937 rng((std::random_device{})());

    return (chekey_t)(rng());
}
