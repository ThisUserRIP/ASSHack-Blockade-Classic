#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_PS4_Internal_PadTouchPadInformation.h"
namespace Rewired_Core::Rewired::Platforms::PS4::Internal { struct PadTouchPadInformation; };
#include "Rewired_Platforms_PS4_Internal_PadStickInformation.h"
namespace Rewired_Core::Rewired::Platforms::PS4::Internal { struct PadStickInformation; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::Platforms::PS4::Internal
{
	struct PadControllerInformation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::PS4::Internal::PadTouchPadInformation touchPadInfo;
		Rewired_Core::Rewired::Platforms::PS4::Internal::PadStickInformation stickInfo;
		uint8_t connectionType;
		uint8_t connectedCount;
		int32_t connected;
		int32_t deviceClass;
		uint8_t reserve0;
		uint8_t reserve1;
		uint8_t reserve2;
		uint8_t reserve3;
		uint8_t reserve4;
		uint8_t reserve5;
		uint8_t reserve6;
		uint8_t reserve7;
	};
}

