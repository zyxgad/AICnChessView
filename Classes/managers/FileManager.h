/*
 *  
 *
 *  FileManager.h in AICnChess
 *  create on 2021/3/10
 *
 */

#ifndef FileManager_h__
#define FileManager_h__

#include "CheMacro.h"

class FileManager{
private:
    FileManager();
	~FileManager();

    static FileManager* _instance;

public:
    static FileManager* getInstance();
    static void deleteInstance();

private:
    std::string _dirpath;
    std::string _cachepath;
    std::string _configpath;
    std::string _datapath;

public:
    std::string getDirPath() const { return this->_dirpath; }
    std::string getCachePath() const { return this->_cachepath; }
    std::string getConfigPath() const { return this->_configpath; }
    std::string getDataPath() const { return this->_datapath; }

};



#endif // FileManager_h__
