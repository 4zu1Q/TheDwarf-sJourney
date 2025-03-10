#pragma once
#include "SceneBase.h"
#include "DxLib.h"

class SceneManager;
class SceneLose :
    public SceneBase
{
public:
	SceneLose();
	virtual ~SceneLose();

	virtual void Init();	//シーンに入るときの初期化処理
	virtual std::shared_ptr<SceneBase> Update();	//毎フレーム行う更新処理
	virtual void Draw();	//毎フレーム行う描画処理
	virtual void End();	//シーンを抜けるときの処理

private:

	//ハンドル変数
	int m_gameoverH;
	int m_retryH;
	int m_titleH;
	int m_selectH;

	int m_frameScene;

	//カーソル選択
	enum Select
	{
		kRetry,		//スタート
		kTitle,		//終了
	};

	float m_selectAnimation;
	Select m_select;

	//フラグ変数
	bool m_isInterval;
	bool m_isCommand;

	//サウンドハンドル
	int m_soundSelectH;
	int m_soundCancelH;
	int m_soundDecsionH;

	int m_soundBgmH;
};

