#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Demos_ControlRemappingDemo1.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1_WindowProperties
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t windowId;
		UnityEngine_CoreModule::UnityEngine::Rect rect;
		mscorlib::System::Action_2<mscorlib::System::String, mscorlib::System::String>* windowDrawDelegate;
		mscorlib::System::String* title;
		mscorlib::System::String* message;
	};
}

