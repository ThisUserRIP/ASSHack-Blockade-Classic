#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Themes_ThemeTarget.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ColorTargetTextMeshPro : Assembly_CSharp::Doozy::Engine::Themes::ThemeTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool OverrideAlpha;
		float Alpha;
		float m_previousAlphaValue;
		void Update();
		void UpdateTarget(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* theme);
		void SetAlpha(float value);
		void Reset();
		void UpdateReference();
		void _ctor();
	};
}

