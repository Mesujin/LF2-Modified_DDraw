#ifndef _GAMEENUMS_H_
 #define _GAMEENUMS_H_
 #include "angelscript.h"
 /*
  credits go to zort for the original enum
  modified by Someone else
 */
 typedef enum
 {
  STATE_STANDING = 0,
  STATE_WALKING = 1,
  STATE_RUNNING = 2,
  STATE_ATTACKING = 3,
  STATE_JUMPING = 4,
  STATE_DASHING = 5,
  STATE_ROWING = 6,
  STATE_DEFENDING = 7,
  STATE_BROKEN_DEFENCE = 8,
  STATE_CATCHING = 9,
  STATE_CAUGHT = 10,
  STATE_INJURED = 11,
  STATE_FALLING = 12,
  STATE_FROZEN = 13,
  STATE_LYING = 14,
  STATE_OTHER = 15,
  STATE_DOP = 16,
  STATE_DRINKING = 17,
  STATE_BURNING = 18,
  STATE_FIRERUNNING = 19,
  STATE_LOUIS_DASH_ATTACKING = 100,
  STATE_DEEP_STRAFING = 301,
  STATE_TELEPORTING_ENEMY = 400,
  STATE_TELEPORTING_FRIEND = 401,
  STATE_RUDOLF_TRANSFORMING = 500,
  STATE_RUDOLF_TRANSFORMING2 = 501,
  STATE_LIGHT_WEAPON_FALLING = 1000,
  STATE_LIGHT_WEAPON_HELD = 1001,
  STATE_LIGHT_WEAPON_THROWN = 1002,
  STATE_LIGHT_WEAPON_JUST_ON_GROUND = 1003,
  STATE_LIGHT_WEAPON_GROUND = 1004,
  STATE_SELF_HEALING = 1700,
  STATE_HEAVY_WEAPON_FALLING = 2000,
  STATE_HEAVY_WEAPON_HELD = 2001,
  STATE_HEAVY_WEAPON_GROUND = 2004,
  STATE_BALL_FLYING = 3000,
  STATE_BALL_HITTING = 3001,
  STATE_BALL_HIT = 3002,
  STATE_BALL_REBOUND = 3003,
  STATE_BALL_DISAPPEAR = 3004,
  STATE_BALL_FLYING_INVIS = 3005,
  STATE_BALL_PIERCING = 3006,
  STATE_CRIMINAL_TRANSFORM_BEGIN = 8000,
  STATE_CRIMINAL_TRANSFORM_END = 8999,
  STATE_LOUIS_TRANSFORM = 9995,
  STATE_LOUIS_ARMOR = 9996,
  STATE_LOUIS_MESSAGE = 9997,
  STATE_LOUIS_DELETE = 9998,
  STATE_LOUIS_BROKEN_WEAPON = 9999
 } ObjectStates;
 typedef enum 
 {
  KIND_NORMAL = 0,
  KIND_CATCH_DOP = 1,
  KIND_PICK_WEAPON = 2,
  KIND_CATCH = 3,
  KIND_THROWN = 4,
  KIND_WEAPON = 5,
  KIND_FINISH_HIM = 6,
  KIND_ROWING_PICK = 7,
  KIND_HEAL = 8,
  KIND_SHIELD = 9,
  KIND_FLUTE = 10,
  KIND_FLUTE_2 = 11,
  KIND_NONE = 12,
  KIND_NONE_2 = 13,
  KIND_OBSTACLE = 14,
  KIND_WHIRLWIND_LIFT = 15,
  KIND_WHIRLWIND_FREEZE = 16,
 } ItrKinds;
 void RegisterGameEnums(asIScriptEngine *ScriptEngine);
#endif