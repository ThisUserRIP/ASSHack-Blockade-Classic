#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::MFlight { struct MouseFlightController; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::MFlight::Demo
{
	struct Hud : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::MFlight::MouseFlightController* mouseFlight;
		UnityEngine_CoreModule::UnityEngine::RectTransform* boresight;
		UnityEngine_CoreModule::UnityEngine::RectTransform* mousePos;
		UnityEngine_CoreModule::UnityEngine::Camera* playerCam;
		void Awake();
		void Update();
		void UpdateGraphics(Assembly_CSharp::MFlight::MouseFlightController* controller);
		void SetReferenceMouseFlight(Assembly_CSharp::MFlight::MouseFlightController* controller);
		void _ctor();
	};
}

