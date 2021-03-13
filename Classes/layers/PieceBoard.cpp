
#include "PieceBoard.h"

USING_NS_CC;


PieceBoard::PieceBoard()
:blk_player(nullptr)
,red_player(nullptr)
,_cycle(ChessTeam::NONE)
{
    for(size_t y = 0; y < 10 ;++y){
        for(size_t x = 0; x < 9 ;++x){
            this->_board[y][x] = nullptr;
        }
    }
}
PieceBoard::~PieceBoard(){
    for(size_t y = 0; y < 10 ;++y){
        for(size_t x = 0; x < 9 ;++x){
            if(this->_board[y][x] != nullptr){
                delete this->_board[y][x];
                this->_board[y][x] = nullptr;
            }
        }
    }
}

bool PieceBoard::init(){
    if(!(Layer::init())){
        return false;
    }
    auto bgSprite = Sprite::create("images/chessbg1.jpg");
    bgSprite->setAnchorPoint(Vec2::ZERO);
    bgSprite->setPosition(Vec2::ZERO);
    this->addChild(bgSprite, 1, "bgSprite");

    return true;
}

void initBoard(){
    // 
}

void initBoardWithFile(std::string file){
    // 
}


void PieceBoard::update(float dt){
}


bool PieceBoard::MovePiece(pos_t sta, pos_t end){
    if(this->_cycle == ChessTeam::NONE){
        return false;
    }
    if(sta.x >= 9 || sta.y >= 10 || end.x >= 9 || end.y >= 10){
        return false;
    }
    auto staPiece = this->_board[sta.y][sta.x];
    auto endPiece = this->_board[end.y][end.x];
    if( (staPiece == nullptr || staPiece->getTeam() != this->_cycle) ||
        (endPiece != nullptr && endPiece->getTeam() == this->_cycle)){
        return false;
    }
    if(!(staPiece->canMove(end, this->_board))){
        return false;
    }
    this->_board[end.y][end.x] = staPiece;
    this->addEats(endPiece);
    this->_cycle = (this->_cycle == ChessTeam::BLK) ?ChessTeam::RED :ChessTeam::BLK;
    return true;
}

void PieceBoard::setBlkPlayer(Player* player){
    if(!player || player == this->blk_player){
        return;
    }
    if(this->_cycle != ChessTeam::NONE){
        return;
    }
    if(this->blk_player){
        this->blk_player->release();
    }
    this->blk_player = player;
    if(this->blk_player){
        this->blk_player->retain();
    }
}

void PieceBoard::setRedPlayer(Player* player){
    if(!player || player == this->red_player){
        return;
    }
    if(this->_cycle != ChessTeam::NONE){
        return;
    }
    if(this->red_player){
        this->red_player->release();
    }
    this->red_player = player;
    if(this->red_player){
        this->red_player->retain();
    }
}

void PieceBoard::addEats(BasePiece* piece){
    //
}

