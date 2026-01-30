#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_HID_OutputReportOptions.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired::HID
{
	struct OutputReport
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t buffer;
		int32_t bufferLength;
		int32_t reportLength;
		Rewired_Core::Rewired::HID::OutputReportOptions options;
		bool get_IsValid();
		void _ctor(intptr_t buffer, int32_t bufferLength, int32_t reportLength);
		void Clear();
		mscorlib::System::String* ToString();
	};
}

