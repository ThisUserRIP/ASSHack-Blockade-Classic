#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct CanvasScalerFitter_BreakPoint; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct CanvasScalerExt; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct CanvasScalerFitter : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::CanvasScalerFitter_BreakPoint*>* breakPoints;
		Assembly_CSharp::Rewired::UI::ControlMapper::CanvasScalerExt* canvasScaler;
		int32_t screenWidth;
		int32_t screenHeight;
		mscorlib::System::Action* ScreenSizeChanged;
		void OnEnable();
		void Update();
		void UpdateSize();
		void _ctor();
	};
}

