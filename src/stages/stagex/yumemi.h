/*
 * This software is licensed under the terms of the MIT License.
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2019, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2019, Andrei Alexeyev <akari@taisei-project.org>.
*/

#ifndef IGUARD_stages_stagex_yumemi_h
#define IGUARD_stages_stagex_yumemi_h

#include "taisei.h"

#include "entity.h"
#include "resource/sprite.h"

DEFINE_ENTITY_TYPE(YumemiSlave, {
	struct {
		Sprite *core, *frame, *outer;
	} sprites;

	cmplx pos;
	int spawn_time;
	float alpha;
	float rotation_factor;
});

void stagex_init_yumemi_slave(YumemiSlave *slave, cmplx pos, int type);
YumemiSlave *stagex_host_yumemi_slave(cmplx pos, int type);

Boss *stagex_spawn_yumemi(cmplx pos);

#endif // IGUARD_stages_stagex_yumemi_h
