#include <Novice.h>

const char kWindowTitle[] = "学籍番号";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		Novice::ScreenPrintf(30, 30, "LC1A_23_ﾏｻｷ_ﾊﾙｶ");
		Novice::ScreenPrintf(30, 60, "2023/10/11");

		Novice::ScreenPrintf(30, 80, "2023/10/18");

		Novice::ScreenPrintf(30, 100, "プルリクエスト、お願いします。");


		Novice::ScreenPrintf(30, 100, "マージします");

		Novice::ScreenPrintf(30, 140, "プルしてから作業するようにします。");

		Novice::ScreenPrintf(30, 160, "コンフリクトしそうです");




		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
