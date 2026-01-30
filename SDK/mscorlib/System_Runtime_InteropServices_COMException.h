#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_InteropServices_ExternalException.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct COMException : mscorlib::System::Runtime::InteropServices::ExternalException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(mscorlib::System::String* message, int32_t errorCode);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* ToString();
	};
}

