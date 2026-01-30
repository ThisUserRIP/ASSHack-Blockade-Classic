#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_MaskableGraphic.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct VertexHelper; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct RawImage : UnityEngine_UI::UnityEngine::UI::MaskableGraphic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Texture* m_Texture;
		UnityEngine_CoreModule::UnityEngine::Rect m_UVRect;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Texture* get_mainTexture();
		UnityEngine_CoreModule::UnityEngine::Texture* get_texture();
		void set_texture(UnityEngine_CoreModule::UnityEngine::Texture* value);
		UnityEngine_CoreModule::UnityEngine::Rect get_uvRect();
		void set_uvRect(UnityEngine_CoreModule::UnityEngine::Rect value);
		void SetNativeSize();
		void OnPopulateMesh(UnityEngine_UI::UnityEngine::UI::VertexHelper* vh);
		void OnDidApplyAnimationProperties();
	};
}

