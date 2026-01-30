#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectManager; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerObjectInfoCache; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Serialization { struct ISerializationSurrogate; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerObjectInfoInit; };
namespace mscorlib::System::Runtime::Serialization { struct IFormatterConverter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct ISurrogateSelector; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct ReadObjectInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t objectInfoId;
		mscorlib::System::Type* objectType;
		mscorlib::System::Runtime::Serialization::ObjectManager* objectManager;
		int32_t count;
		bool isSi;
		bool isNamed;
		bool isTyped;
		bool bSimpleAssembly;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;
		IL2CPP::Array<mscorlib::System::String*>* wireMemberNames;
		IL2CPP::Array<mscorlib::System::Type*>* wireMemberTypes;
		int32_t lastPosition;
		mscorlib::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;
		mscorlib::System::Runtime::Serialization::StreamingContext context;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Type>* memberTypesList;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
		mscorlib::System::Runtime::Serialization::IFormatterConverter* formatterConverter;
		struct StaticFields
		{
			int32_t readObjectInfoCounter;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void ObjectEnd();
		void PrepareForReuse();
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ObjectManager* objectManager, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
		void Init(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ObjectManager* objectManager, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ObjectManager* objectManager, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
		void Init(mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ObjectManager* objectManager, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
		void InitReadConstructor(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void InitSiRead();
		void InitNoMembers();
		void InitMemberInfo();
		mscorlib::System::Reflection::MemberInfo* GetMemberInfo(mscorlib::System::String* name);
		mscorlib::System::Type* GetType(mscorlib::System::String* name);
		void AddValue(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::System::Runtime::Serialization::SerializationInfo& si, IL2CPP::Array<mscorlib::System::Object*>& memberData);
		void InitDataStore(mscorlib::System::Runtime::Serialization::SerializationInfo& si, IL2CPP::Array<mscorlib::System::Object*>& memberData);
		void RecordFixup(int64_t objectId, mscorlib::System::String* name, int64_t idRef);
		void PopulateObjectMembers(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* memberData);
		int32_t Position(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::Type*>* GetMemberTypes(IL2CPP::Array<mscorlib::System::String*>* inMemberNames, mscorlib::System::Type* objectType);
		mscorlib::System::Type* GetMemberType(mscorlib::System::Reflection::MemberInfo* objMember);
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);
	};
}

