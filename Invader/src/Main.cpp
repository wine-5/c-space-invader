#include "DxLib.h"
#include "game/Config.h"
#include "game/Game.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine, int nCmdShow)
{
	// 描画関連の初期化処理
	ChangeWindowMode(TRUE);
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);
	SetMainWindowText(_T("Invader"));

	if (DxLib_Init() == -1)
	{
		return -1;
	}

	// 描画先画面を裏画面にセット
	SetDrawScreen(DX_SCREEN_BACK);

	Game_Init();

	// ループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		// 画面を初期化する
		ClearDrawScreen();

		Game_Update();
		Game_Draw();

		// 裏画面の内容を表画面に反映させる
		ScreenFlip();
	}

	DxLib_End(); // ＤＸライブラリ使用の終了処理

	return 0; // ソフトの終了
}
