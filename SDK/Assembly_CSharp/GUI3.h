#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp
{
	struct GUI3 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* bar;
			UnityEngine_CoreModule::UnityEngine::Texture2D* blackTex;
			UnityEngine_CoreModule::UnityEngine::Texture2D* whiteTex;
			UnityEngine_CoreModule::UnityEngine::Rect rbar;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Init();
		static void HSlider();
		static void Toggle();
		static UnityEngine_CoreModule::UnityEngine::Vector2 BeginScrollView(UnityEngine_CoreModule::UnityEngine::Rect viewzone, UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector, UnityEngine_CoreModule::UnityEngine::Rect scrollzone, bool debug);
		static void EndScrollView();
		static void DrawBar(UnityEngine_CoreModule::UnityEngine::Rect r);
		static UnityEngine_CoreModule::UnityEngine::Texture2D* GetTexture2D(UnityEngine_CoreModule::UnityEngine::Color _color, float _alpha);
		void _ctor();
		static void _cctor();
	};
}

