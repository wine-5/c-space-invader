#include "Player.h"
#include "Config.h"
#include "DxLib.h"

#define PLAYER_HALF_SIZE	25
#define PLAYER_MOVE_SPEED	5
#define PLAYER_Y_OFFSET		25

int playerX = 0;

void Player_Init(void)
{
	playerX = SCREEN_WIDTH / 2;
}

void Player_Update(void)
{
	if (CheckHitKey(KEY_INPUT_A) || CheckHitKey(KEY_INPUT_LEFT))
		playerX -= PLAYER_MOVE_SPEED;

	if (CheckHitKey(KEY_INPUT_D) || CheckHitKey(KEY_INPUT_RIGHT))
		playerX += PLAYER_MOVE_SPEED;

	Player_Draw();
}

void Player_Draw(void)
{
	DrawBox(
		playerX - PLAYER_HALF_SIZE,
		SCREEN_HEIGHT / 1 - PLAYER_Y_OFFSET - PLAYER_HALF_SIZE,
		playerX + PLAYER_HALF_SIZE,
		SCREEN_HEIGHT / 1 - PLAYER_Y_OFFSET + PLAYER_HALF_SIZE,
		GetColor(0, 255, 255),
		TRUE);
}
