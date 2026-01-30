#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired::UI
{
	struct UIAnchor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 min;
		UnityEngine_CoreModule::UnityEngine::Vector2 max;
		void _ctor(float minX, float minY, float maxX, float maxY);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector2 min, UnityEngine_CoreModule::UnityEngine::Vector2 max);
		static Rewired_Core::Rewired::UI::UIAnchor get_TopLeft();
		static Rewired_Core::Rewired::UI::UIAnchor get_TopCenter();
		static Rewired_Core::Rewired::UI::UIAnchor get_TopRight();
		static Rewired_Core::Rewired::UI::UIAnchor get_MiddleLeft();
		static Rewired_Core::Rewired::UI::UIAnchor get_MiddleCenter();
		static Rewired_Core::Rewired::UI::UIAnchor get_MiddleRight();
		static Rewired_Core::Rewired::UI::UIAnchor get_BottomLeft();
		static Rewired_Core::Rewired::UI::UIAnchor get_BottomCenter();
		static Rewired_Core::Rewired::UI::UIAnchor get_BottomRight();
		static Rewired_Core::Rewired::UI::UIAnchor get_TopHStretch();
		static Rewired_Core::Rewired::UI::UIAnchor get_MiddleHStretch();
		static Rewired_Core::Rewired::UI::UIAnchor get_BottomHStretch();
		static Rewired_Core::Rewired::UI::UIAnchor get_LeftVStretch();
		static Rewired_Core::Rewired::UI::UIAnchor get_CenterVStretch();
		static Rewired_Core::Rewired::UI::UIAnchor get_RightVStretch();
		static Rewired_Core::Rewired::UI::UIAnchor get_Stretch();
	};
}

