/*
 *  
 *
 *  FileManager.cpp in AICnChess
 *  create on 2021/3/10
 *
 */

#import "FileManager.h"

USING_NS_CC;

FileManager* FileManager::_instance = nullptr;

FileManager::FileManager(){
    this->_dirpath = FileUtils::getInstance()->getWritablePath() + "/.AICnChess";

    this->_cachepath = this->_dirpath + "/caches";
    this->_configpath = this->_dirpath + "/configs";
    this->_datapath = this->_dirpath + "/datas";
}

FileManager::~FileManager()
{
}

FileManager* FileManager::getInstance(){
    if(!_instance){
        _instance = new FileManager();
    }
    return _instance;
}

void FileManager::deleteInstance(){
    if(_instance){
        delete _instance;
        _instance = nullptr;
    }
}

