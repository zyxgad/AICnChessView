
#ifndef __CHESS_TYPES_H__
#define __CHESS_TYPES_H__


class BasePiece;
typedef BasePiece* board_t[10][9];

enum struct GameStatus{
    NONE,
    LOADING,        // 加载界面
    HOME,           // 主页
    SETTING,        // 设置
    OFFLINE_SET,    // 单机设置
    ONLINE_HOME,    // 联机页面
    GAME_RUNNING,   // 游戏进行中
    GAME_WAITING,   // 游戏等待中
};

enum struct LoginType:uint8_t{
    UNKNOW  = 0,    // 未定义
    OFFLINE = 1,    // 离线模式（单机）
    ONLINE  = 2,    // 在线模式（联机）
    ROBOT   = 9,    // 机器人
};

enum struct ChessTeam:uint8_t{
    NONE = 0,
    RED  = 1,
    BLK  = 2
};

enum struct ChessType:uint8_t{
    NONE = 0,
    SOLDIER,  // 卒/兵
    CANNON,   // 炮
    ROOK,     // 车
    SOWAR,    // 马
    MINISTER, // 象/相
    GUARD,    // 士/仕
    GENERAL   // 将/帅
};

typedef struct{
    uint8_t x;
    uint8_t y;
} pos_t;

typedef struct{
    std::string name;
    std::string head;
} userdata_t;

typedef uint32_t chekey_t;

#endif // __CHESS_TYPES_H__
