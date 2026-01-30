#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct CalibrationMap; };
#include "Rewired_ControllerType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct CalibrationMapSaveData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::CalibrationMap* azXidtWDhkamIWTiyjyVbZHqkpF;
		Rewired_Core::Rewired::ControllerType EBtabYCMVXBsRbYhFnfqdjKXqLQ;
		mscorlib::System::String* dtwuSjetiKRQPPejbzbARDqlAod;
		Rewired_Core::Rewired::CalibrationMap* get_map();
		Rewired_Core::Rewired::ControllerType get_controllerType();
		mscorlib::System::String* get_hardwareIdentifier();
		void _ctor(Rewired_Core::Rewired::CalibrationMap* calibrationMap, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* hardwareIdentifier);
	};
}

