#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Queue; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectIDGenerator; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization { struct ISurrogateSelector; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryWriter; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationObjectManager; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct Header; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct InternalFE; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationBinder; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerObjectInfoInit; };
namespace mscorlib::System::Runtime::Serialization { struct IFormatterConverter; };
namespace mscorlib::System { struct Object; };
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerStack; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct WriteObjectInfo; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct NameInfo; };
namespace mscorlib::System { struct Array; };
#include "System_Runtime_Serialization_Formatters_FormatterTypeStyle.h"

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct ObjectWriter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Queue* m_objectQueue;
		mscorlib::System::Runtime::Serialization::ObjectIDGenerator* m_idGenerator;
		int32_t m_currentId;
		mscorlib::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;
		mscorlib::System::Runtime::Serialization::StreamingContext m_context;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter;
		mscorlib::System::Runtime::Serialization::SerializationObjectManager* m_objectManager;
		int64_t topId;
		mscorlib::System::String* topName;
		IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* headers;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums;
		mscorlib::System::Runtime::Serialization::SerializationBinder* m_binder;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
		mscorlib::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter;
		IL2CPP::Array<mscorlib::System::Object*>* crossAppDomainArray;
		mscorlib::System::Object* previousObj;
		int64_t previousId;
		mscorlib::System::Type* previousType;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE previousCode;
		mscorlib::System::Collections::Hashtable* assemblyToIdTable;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerStack* niPool;
		void _ctor(mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, mscorlib::System::Runtime::Serialization::SerializationBinder* binder);
		void Serialize(mscorlib::System::Object* graph, IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* inHeaders, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter, bool fCheck);
		mscorlib::System::Runtime::Serialization::SerializationObjectManager* get_ObjectManager();
		void Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
		void Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes, IL2CPP::Array<mscorlib::System::Object*>* memberData, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos);
		void WriteMemberSetup(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::String* memberName, mscorlib::System::Type* memberType, mscorlib::System::Object* memberData, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);
		void WriteMembers(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberTypeNameInfo, mscorlib::System::Object* memberData, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);
		void WriteArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);
		void WriteArrayMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, mscorlib::System::Object* data);
		void WriteRectangle(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, int32_t rank, IL2CPP::Array<int32_t>* maxA, mscorlib::System::Array* array, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemNameTypeInfo, IL2CPP::Array<int32_t>* lowerBoundA);
		mscorlib::System::Object* GetNext(int64_t& objID);
		int64_t InternalGetId(mscorlib::System::Object* obj, bool assignUniqueIdToValueType, mscorlib::System::Type* type, bool& isNew);
		int64_t Schedule(mscorlib::System::Object* obj, bool assignUniqueIdToValueType, mscorlib::System::Type* type);
		int64_t Schedule(mscorlib::System::Object* obj, bool assignUniqueIdToValueType, mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
		bool WriteKnownValueClass(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* data);
		void WriteObjectRef(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int64_t objectId);
		void WriteString(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* stringObject);
		bool CheckForNull(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* data);
		void WriteSerializedStreamHeader(int64_t topId, int64_t headerId);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(mscorlib::System::Type* type);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);
		void TypeToNameInfo(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* MemberToNameInfo(mscorlib::System::String* name);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(mscorlib::System::Type* type);
		int64_t GetAssemblyId(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
		mscorlib::System::Type* GetType(mscorlib::System::Object* obj);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* GetNameInfo();
		bool CheckTypeFormat(mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle test, mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle want);
		void PutNameInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);
	};
}

