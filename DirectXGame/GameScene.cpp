#include "GameScene.h"
#include "Player.h"
using namespace KamataEngine;

void GameScene::Initialize() {
	textureHandle = TextureManager::Load("ibu.png");
	////スプライトインスタンスの生成
	// spreite = Sprite::Create(textureHandle, {100, 50});
	// 3Dモデルの生成
	model = Model::Create();
	////ワールドトランスフォームの初期化
	// worldTransform.Initialize();
	// カメラの初期化
	camera.Initialize();

	// Playerの生成
	player = new Player();
	// Playerの初期化
	player->Initialize(model, textureHandle, &camera);
}

void GameScene::Update() {
	// Playerの更新
	player->Update();

	////スプライトの今の座標を取得
	// Vector2 position = spreite->GetPosition();
	////座標を{2,1}移動
	// position.x += 2.0f;
	// position.y += 1.0f;
	////移動した座標をスプライトに反映
	// spreite->SetPosition(position);
}

void GameScene::Draw() {
	// DirectXCommonインスタンスの取得
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();
	////スプライト描画後処理
	// Sprite::PreDraw(dxCommon->GetCommandList());

	// spreite->Draw();

	////スプライト描画後処理
	// Sprite::PostDraw();

	// 3Dモデル描画前処理
	Model::PreDraw(dxCommon->GetCommandList());

	// Playerの描画
	player->Draw();
	// 3Dモデル描画
	// model->Draw(worldTransform, camera, textureHandle);

	// 3Dモデル描画後処理
	Model::PostDraw();
}

GameScene::~GameScene() {
	 //delete spreite;
	delete model;
	 delete player;
}