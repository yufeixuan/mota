/*********************************************
Author: Zhang Hao
GitHub: https://github.com/120910383/mota
*********************************************/

#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

//class tiles_res;
struct tile_t;
struct floor_t;

class MainScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(MainScene);

    bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *e);
    void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *e);

protected:
    void update_floor();
    void add_tile_sprite(const tile_t& tile);

protected:
    const floor_t* _floor;
    cocos2d::Node* _map_node;
    cocos2d::Node* _arrow_node;
};

#endif // __HELLOWORLD_SCENE_H__
