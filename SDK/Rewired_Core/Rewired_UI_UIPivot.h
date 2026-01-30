#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core::Rewired::UI
{
	struct UIPivot
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float min;
		float max;
		void _ctor(float min, float max);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Implicit(Rewired_Core::Rewired::UI::UIPivot x);
		static Rewired_Core::Rewired::UI::UIPivot op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector2 x);
		static Rewired_Core::Rewired::UI::UIPivot get_TopLeft();
		static Rewired_Core::Rewired::UI::UIPivot get_TopCenter();
		static Rewired_Core::Rewired::UI::UIPivot get_TopRight();
		static Rewired_Core::Rewired::UI::UIPivot get_MiddleLeft();
		static Rewired_Core::Rewired::UI::UIPivot get_MiddleCenter();
		static Rewired_Core::Rewired::UI::UIPivot get_MiddleRight();
		static Rewired_Core::Rewired::UI::UIPivot get_BottomLeft();
		static Rewired_Core::Rewired::UI::UIPivot get_BottomCenter();
		static Rewired_Core::Rewired::UI::UIPivot get_BottomRight();
	};
}

