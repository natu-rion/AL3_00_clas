#include "KamataEngine.h"
#include "Player.h"
#include "cassert"
using namespace KamataEngine;

void Player::Initialize(Model* model, uint32_t textureHandle, Camera* camera) {
	assert(model);

	textureHandle = textureHandle;

	model_ = model;

	camera_ = camera;

	worldTransform.Initialize();
}

void Player::Update() { worldTransform.TransferMatrix(); }

void Player::Draw() { model_->Draw(worldTransform, *camera_, textureHandle_); 
}