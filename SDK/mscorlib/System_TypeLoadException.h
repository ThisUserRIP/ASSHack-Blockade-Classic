#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_SystemException.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System
{
	struct TypeLoadException : mscorlib::System::SystemException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ClassName;
		mscorlib::System::String* AssemblyName;
		mscorlib::System::String* MessageArg;
		int32_t ResourceId;
		void _ctor();
		void _ctor(mscorlib::System::String* message);
		mscorlib::System::String* get_Message();
		void SetMessageField();
		void _ctor(mscorlib::System::String* className, mscorlib::System::String* assemblyName);
		void _ctor(mscorlib::System::String* className, mscorlib::System::String* assemblyName, mscorlib::System::String* messageArg, int32_t resourceId);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
	};
}

