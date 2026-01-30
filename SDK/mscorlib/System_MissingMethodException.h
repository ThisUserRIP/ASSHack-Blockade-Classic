#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MissingMemberException.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System
{
	struct MissingMethodException : mscorlib::System::MissingMemberException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* signature;
		void _ctor();
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* get_Message();
		void _ctor(mscorlib::System::String* className, mscorlib::System::String* methodName);
		void _ctor(mscorlib::System::String* className, mscorlib::System::String* methodName, mscorlib::System::String* signature, mscorlib::System::String* message);
	};
}

