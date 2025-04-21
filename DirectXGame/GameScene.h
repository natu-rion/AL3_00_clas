#pragma once
#include "KamataEngine.h"
#include "Player.h"
// ゲームシーン
class GameScene {
public:
	// 3Dモデル
	KamataEngine::Model* model = nullptr;
	////スプライト
	// KamataEngine::Sprite* spreite = nullptr;
	// ワールドトランスフォーム
	KamataEngine::WorldTransform worldTransform;
	// カメラ
	KamataEngine::Camera camera;
	////デバックカメラ
	// KamataEngine::DebugCamera* debugCamera = nullptr;

	Player* player = nullptr;

	// 初期化
	void Initialize();

	// 更新
	void Update();

	// 描画
	void Draw();

	~GameScene();

private:
	// テクスチャハンドル
	uint32_t textureHandle = 0;
};