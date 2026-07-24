#include "Game.h"
#include "Player.h"
#include "Config.h"
#include "DxLib.h"

void Game_Init(void)
{
	Player_Init();
}

void Game_Update(void)
{
	Player_Update();
}

void Game_Draw(void)
{
	Player_Draw();
}
