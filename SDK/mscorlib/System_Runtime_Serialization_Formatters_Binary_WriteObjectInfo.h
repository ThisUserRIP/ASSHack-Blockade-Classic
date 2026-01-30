#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerObjectInfoCache; };
namespace mscorlib::System::Runtime::Serialization { struct ISerializationSurrogate; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerObjectInfoInit; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct ISurrogateSelector; };
namespace mscorlib::System::Runtime::Serialization { struct IFormatterConverter; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectWriter; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationBinder; };
namespace mscorlib::System::Reflection { struct MemberInfo; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct WriteObjectInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t objectInfoId;
		mscorlib::System::Object* obj;
		mscorlib::System::Type* objectType;
		bool isSi;
		bool isNamed;
		bool isTyped;
		bool isArray;
		mscorlib::System::Runtime::Serialization::SerializationInfo* si;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;
		IL2CPP::Array<mscorlib::System::Object*>* memberData;
		mscorlib::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;
		mscorlib::System::Runtime::Serialization::StreamingContext context;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
		int64_t objectId;
		int64_t assemId;
		mscorlib::System::String* binderTypeName;
		mscorlib::System::String* binderAssemblyString;
		void _ctor();
		void ObjectEnd();
		void InternalInit();
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, mscorlib::System::Runtime::Serialization::SerializationBinder* binder);
		void InitSerialize(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, mscorlib::System::Runtime::Serialization::SerializationBinder* binder);
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, mscorlib::System::Runtime::Serialization::SerializationBinder* binder);
		void InitSerialize(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, mscorlib::System::Runtime::Serialization::SerializationBinder* binder);
		void InitSiWrite();
		static void CheckTypeForwardedFrom(mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache, mscorlib::System::Type* objectType, mscorlib::System::String* binderAssemblyString);
		void InitNoMembers();
		void InitMemberInfo();
		mscorlib::System::String* GetTypeFullName();
		mscorlib::System::String* GetAssemblyString();
		void InvokeSerializationBinder(mscorlib::System::Runtime::Serialization::SerializationBinder* binder);
		mscorlib::System::Type* GetMemberType(mscorlib::System::Reflection::MemberInfo* objMember);
		void GetMemberInfo(IL2CPP::Array<mscorlib::System::String*>& outMemberNames, IL2CPP::Array<mscorlib::System::Type*>& outMemberTypes, IL2CPP::Array<mscorlib::System::Object*>& outMemberData);
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);
		static void PutObjectInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
	};
}

