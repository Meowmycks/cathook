/*
 * HEsp.h
 *
 *  Created on: Oct 6, 2016
 *      Author: nullifiedcat
 */

#ifndef HESP_H_
#define HESP_H_

#include "IHack.h"

class ConVar;
class CachedEntity;

namespace hacks { namespace shared { namespace esp {

extern CatVar local_esp;
extern CatVar buildings;
extern CatVar enabled;
extern CatVar entity_info;
extern CatVar teammates;
extern CatVar item_esp;
extern CatVar item_dropped_weapons;
extern CatVar item_ammo_packs;
extern CatVar item_health_packs;
extern CatVar item_powerups;
extern CatVar item_money;
extern CatVar item_money_red;
extern CatVar entity_id;
extern CatVar tank;
extern CatVar box_esp;
extern CatVar show_distance;
extern CatVar show_name;
extern CatVar show_class;
extern CatVar show_conditions;
extern CatVar vischeck;
extern CatVar legit;
extern CatVar show_health;
extern CatVar proj_rockets;
extern CatVar proj_arrows;
extern CatVar proj_pipes;
extern CatVar proj_stickies;
extern CatVar proj_enemy;
extern CatVar proj_esp;
extern CatVar entity_model;
extern CatVar item_weapon_spawners;
extern CatVar item_adrenaline;

void CreateMove();
void Draw();

void DrawBox(CachedEntity* ent, int clr, float widthFactor, float addHeight, bool healthbar, int health, int healthmax);
void ProcessEntity(CachedEntity* ent);
void ProcessEntityPT(CachedEntity* ent);

}}}

#endif /* HESP_H_ */
