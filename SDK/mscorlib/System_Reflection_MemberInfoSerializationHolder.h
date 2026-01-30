#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct RuntimeType; };
#include "System_Reflection_MemberTypes.h"
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Reflection
{
	struct MemberInfoSerializationHolder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_memberName;
		mscorlib::System::RuntimeType* m_reflectedType;
		mscorlib::System::String* m_signature;
		mscorlib::System::String* m_signature2;
		mscorlib::System::Reflection::MemberTypes m_memberType;
		mscorlib::System::Runtime::Serialization::SerializationInfo* m_info;
		static void GetSerializationInfo(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::String* name, mscorlib::System::RuntimeType* reflectedClass, mscorlib::System::String* signature, mscorlib::System::Reflection::MemberTypes type);
		static void GetSerializationInfo(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::String* name, mscorlib::System::RuntimeType* reflectedClass, mscorlib::System::String* signature, mscorlib::System::String* signature2, mscorlib::System::Reflection::MemberTypes type, IL2CPP::Array<mscorlib::System::Type*>* genericArguments);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Object* GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context);
	};
}

