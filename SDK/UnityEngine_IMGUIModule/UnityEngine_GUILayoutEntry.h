#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutOption; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUILayoutEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float minWidth;
		float maxWidth;
		float minHeight;
		float maxHeight;
		UnityEngine_CoreModule::UnityEngine::Rect rect;
		int32_t stretchWidth;
		int32_t stretchHeight;
		bool consideredForMargin;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_Style;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Rect kDummyRect;
			int32_t indent;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_style();
		void set_style(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		int32_t get_marginLeft();
		int32_t get_marginRight();
		int32_t get_marginTop();
		int32_t get_marginBottom();
		int32_t get_marginHorizontal();
		int32_t get_marginVertical();
		void _ctor(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* _style);
		void _ctor(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* _style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		void CalcWidth();
		void CalcHeight();
		void SetHorizontal(float x, float width);
		void SetVertical(float y, float height);
		void ApplyStyleSettings(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		void ApplyOptions(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}

