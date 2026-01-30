#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_InputSource.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct UnknownControllerHat; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct UnknownControllerHat_HatButtons; };

namespace Rewired_Core::Rewired
{
	struct ControllerDataUpdater : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputSource source;
		int32_t axisCount;
		int32_t buttonCount;
		IL2CPP::Array<float>* axisValues;
		IL2CPP::Array<bool>* buttonValues;
		IL2CPP::Array<float>* buttonPressureValues;
		IL2CPP::Array<bool>* axisHasBeenPressedOSXLinux;
		IL2CPP::Array<Rewired_Core::Rewired::UnknownControllerHat*>* rxntJofNEHQHJzQCOijXkgDjbqhF;
		bool hasReceivedInput;
		void _ctor(Rewired_Core::Rewired::InputSource source, int32_t axisCount, int32_t buttonCount, IL2CPP::Array<Rewired_Core::Rewired::UnknownControllerHat*>* unknownControllerHats);
		bool IsUnknownHatCardinal(int32_t buttonIndex);
		Rewired_Core::Rewired::UnknownControllerHat_HatButtons* GetUnknownHatButtons(int32_t buttonIndex);
		void ClearData();
	};
}

