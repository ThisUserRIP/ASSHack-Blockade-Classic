#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "Rewired_ComponentControls_Effects_RotateAroundAxis_Speed.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_ComponentControls_Effects_RotateAroundAxis_RotationAxis.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Space.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::ComponentControls::Effects
{
	struct RotateAroundAxis : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed _speed;
		float _slowRotationSpeed;
		float _fastRotationSpeed;
		Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis _rotateAroundAxis;
		UnityEngine_CoreModule::UnityEngine::Space _relativeTo;
		bool _reverse;
		Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed get_speed();
		void set_speed(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed value);
		float get_slowRotationSpeed();
		void set_slowRotationSpeed(float value);
		float get_fastRotationSpeed();
		void set_fastRotationSpeed(float value);
		Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis get_rotateAroundAxis();
		void set_rotateAroundAxis(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis value);
		UnityEngine_CoreModule::UnityEngine::Space get_relativeTo();
		void set_relativeTo(UnityEngine_CoreModule::UnityEngine::Space value);
		bool get_reverse();
		void set_reverse(bool value);
		void Update();
		static UnityEngine_CoreModule::UnityEngine::Vector3 MjAULDXXJmoltsQlxYxPjACBkhy(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis A_0);
		void SetSpeed(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed speed);
		void SetSpeed(int32_t speed);
		void _ctor();
	};
}

