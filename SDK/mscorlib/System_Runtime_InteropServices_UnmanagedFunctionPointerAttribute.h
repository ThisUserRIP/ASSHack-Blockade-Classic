#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Runtime_InteropServices_CallingConvention.h"
#include "System_Runtime_InteropServices_CharSet.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct UnmanagedFunctionPointerAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::InteropServices::CallingConvention m_callingConvention;
		mscorlib::System::Runtime::InteropServices::CharSet CharSet;
		bool BestFitMapping;
		bool ThrowOnUnmappableChar;
		bool SetLastError;
		void _ctor(mscorlib::System::Runtime::InteropServices::CallingConvention callingConvention);
	};
}

