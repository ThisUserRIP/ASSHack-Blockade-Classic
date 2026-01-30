#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_SimpleControlRemapping.h"
namespace Assembly_CSharp::Rewired::Demos { struct SimpleControlRemapping; };
namespace Rewired_Core::Rewired { struct InputAction; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct SimpleControlRemapping_Row : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputAction* action;
		Rewired_Core::Rewired::AxisRange actionRange;
		UnityEngine_UI::UnityEngine::UI::Button* button;
		UnityEngine_UI::UnityEngine::UI::Text* text;
		void _ctor();
	};
}

