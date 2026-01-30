#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ThemedElement.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemedElement; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ThemedElement_ElementInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _themeClass;
		UnityEngine_CoreModule::UnityEngine::Component* _component;
		mscorlib::System::String* get_themeClass();
		UnityEngine_CoreModule::UnityEngine::Component* get_component();
		void _ctor();
	};
}

