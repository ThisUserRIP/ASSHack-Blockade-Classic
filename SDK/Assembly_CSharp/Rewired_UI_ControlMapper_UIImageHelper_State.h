#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_UIImageHelper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UIImageHelper; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UIImageHelper_State : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color color;
		void Set(UnityEngine_UI::UnityEngine::UI::Image* image);
		void _ctor();
	};
}

