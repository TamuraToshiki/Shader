#ifndef __GG_POINT_LIGHT_H__
#define __GG_POINT_LIGHT_H__

#include <System/Scene/SceneBase.h>
#include <System/Graphics/Shader.h>
#include <System/Texture/Texture.h>
#include <App/GG31/GGLight.h>
#include <App/GG31/GGLight.h>

class GGPointLight : public Scene
{
	SCENE_DECLARATION(GGPointLight);
private:
	ConstantBuffer* m_pMatrix;
	ConstantBuffer* m_pColorBuf;
	ConstantBuffer* m_pLightBuf;

	static const int LIGHT_NUM = 30;
	Light* m_pLight[LIGHT_NUM];
};

#endif // __GG_POINT_LIGHT_H__