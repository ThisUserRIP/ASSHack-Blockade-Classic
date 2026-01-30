#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Rewired_Core\Rewired_InputActionEventData.h"
namespace Rewired_Core::Rewired { struct InputActionEventData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct TouchControls1_ManipulateCube : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float rotateSpeed;
		float moveSpeed;
		int32_t currentColorIndex;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors;
		void OnEnable();
		void OnDisable();
		void OnMoveReceivedX(Rewired_Core::Rewired::InputActionEventData data);
		void OnMoveReceivedY(Rewired_Core::Rewired::InputActionEventData data);
		void OnRotationReceivedX(Rewired_Core::Rewired::InputActionEventData data);
		void OnRotationReceivedY(Rewired_Core::Rewired::InputActionEventData data);
		void OnCycleColor(Rewired_Core::Rewired::InputActionEventData data);
		void OnCycleColorReverse(Rewired_Core::Rewired::InputActionEventData data);
		void OnMoveReceived(UnityEngine_CoreModule::UnityEngine::Vector2 move);
		void OnRotationReceived(UnityEngine_CoreModule::UnityEngine::Vector2 rotate);
		void OnCycleColor();
		void OnCycleColorReverse();
		void _ctor();
	};
}

