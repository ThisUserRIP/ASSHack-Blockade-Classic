#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "System_Runtime_InteropServices_CharSet.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_InteropServices_CallingConvention.h"
namespace mscorlib::System { struct Attribute; };
namespace mscorlib::System::Reflection { struct RuntimeMethodInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct DllImportAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _val;
		mscorlib::System::String* EntryPoint;
		mscorlib::System::Runtime::InteropServices::CharSet CharSet;
		bool SetLastError;
		bool ExactSpelling;
		bool PreserveSig;
		mscorlib::System::Runtime::InteropServices::CallingConvention CallingConvention;
		bool BestFitMapping;
		bool ThrowOnUnmappableChar;
		static mscorlib::System::Attribute* GetCustomAttribute(mscorlib::System::Reflection::RuntimeMethodInfo* method);
		static bool IsDefined(mscorlib::System::Reflection::RuntimeMethodInfo* method);
		void _ctor(mscorlib::System::String* dllName, mscorlib::System::String* entryPoint, mscorlib::System::Runtime::InteropServices::CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, mscorlib::System::Runtime::InteropServices::CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar);
		void _ctor(mscorlib::System::String* dllName);
		mscorlib::System::String* get_Value();
	};
}

