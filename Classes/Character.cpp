//
//  Character.cpp
//  Yellowtail
//
//  Created by Yuki Kotani on 2016/05/16.
//
//


#include "Character.hpp"
#include "Constants.h"
#include "SimpleAudioEngine.h"
#include <math.h>

using namespace cocos2d;
using namespace CocosDenshion;

bool Character::init() {
    if (!Node::init()) {
        return false;
    }
    
    return true;
}

void Character::onEnter(){
    Node::onEnter();
}

void Character::update(float dt){
   
}