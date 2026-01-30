#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "System_Runtime_InteropServices_UnmanagedType.h"
#include "System_Runtime_InteropServices_VarEnum.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct MarshalAsAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* MarshalCookie;
		mscorlib::System::String* MarshalType;
		mscorlib::System::Type* MarshalTypeRef;
		mscorlib::System::Type* SafeArrayUserDefinedSubType;
		mscorlib::System::Runtime::InteropServices::UnmanagedType utype;
		mscorlib::System::Runtime::InteropServices::UnmanagedType ArraySubType;
		mscorlib::System::Runtime::InteropServices::VarEnum SafeArraySubType;
		int32_t SizeConst;
		int32_t IidParameterIndex;
		int16_t SizeParamIndex;
		mscorlib::System::Runtime::InteropServices::MarshalAsAttribute* Copy();
	};
}

