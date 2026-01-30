#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_HID_HIDGyroscope.h"
namespace Rewired_Core::Rewired::HID { struct HIDGyroscope; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 XtGnGwLqiSHGwZcnjoMhEMRUrNL;
		float iOTYskHRIbSXXcyXLRQfDalwhbs;
		void _ctor();
		void _ctor(IL2CPP::Array<float>* rawValues, float deltaTime);
		void MjXoIGnuqPKtRkGyqidueJiQoOK(IL2CPP::Array<float>* A_1, float A_2);
		void Set(Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf* A_1);
		bool Equals(Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf* A_1);
		void Clear();
		int32_t CompareTo(Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf* other);
	};
}

