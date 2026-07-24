#include "Player.h"
#include "Config.h"
#include "DxLib.h"

void Player_Init(void)
{
}

void Player_Update(void)
{
	Player_Draw();
}

void Player_Draw(void)
{
	DrawBox(SCREEN_WIDTH / 2, SCREEN_WIDTH / 4, SCREEN_HEIGHT / 2, SCREEN_HEIGHT / 4, 255, TRUE, 5);
}
