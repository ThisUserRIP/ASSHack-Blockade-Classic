#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_BaseMeshEffect.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_UIVertex.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UIVertex; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { struct VertexHelper; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Shadow : UnityEngine_UI::UnityEngine::UI::BaseMeshEffect
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color m_EffectColor;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_EffectDistance;
		bool m_UseGraphicAlpha;
		struct StaticFields
		{
			float kMaxEffectDistance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Color get_effectColor();
		void set_effectColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_effectDistance();
		void set_effectDistance(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		bool get_useGraphicAlpha();
		void set_useGraphicAlpha(bool value);
		void ApplyShadowZeroAlloc(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, UnityEngine_CoreModule::UnityEngine::Color32 color, int32_t start, int32_t end, float x, float y);
		void ApplyShadow(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, UnityEngine_CoreModule::UnityEngine::Color32 color, int32_t start, int32_t end, float x, float y);
		void ModifyMesh(UnityEngine_UI::UnityEngine::UI::VertexHelper* vh);
	};
}

