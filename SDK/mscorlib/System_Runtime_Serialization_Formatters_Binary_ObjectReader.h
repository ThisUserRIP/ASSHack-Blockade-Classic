#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Runtime::Serialization { struct ISurrogateSelector; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectManager; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct InternalFE; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationBinder; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct Header; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct HeaderHandler; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerObjectInfoInit; };
namespace mscorlib::System::Runtime::Serialization { struct IFormatterConverter; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerStack; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct IntSizedArray; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct NameCache; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryParser; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ReadObjectInfo; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ParseRecord; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System::Reflection { struct AssemblyName; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryAssemblyInfo; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct ObjectReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* m_stream;
		mscorlib::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;
		mscorlib::System::Runtime::Serialization::StreamingContext m_context;
		mscorlib::System::Runtime::Serialization::ObjectManager* m_objectManager;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums;
		mscorlib::System::Runtime::Serialization::SerializationBinder* m_binder;
		int64_t topId;
		bool bSimpleAssembly;
		mscorlib::System::Object* handlerObject;
		mscorlib::System::Object* m_topObject;
		IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* headers;
		mscorlib::System::Runtime::Remoting::Messaging::HeaderHandler* handler;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
		mscorlib::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerStack* stack;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerStack* valueFixupStack;
		IL2CPP::Array<mscorlib::System::Object*>* crossAppDomainArray;
		bool bFullDeserialization;
		bool bOldFormatDetected;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* valTypeObjectIdTable;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::NameCache* typeCache;
		mscorlib::System::String* previousAssemblyString;
		mscorlib::System::String* previousName;
		mscorlib::System::Type* previousType;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerStack* get_ValueFixupStack();
		mscorlib::System::Object* get_TopObject();
		void set_TopObject(mscorlib::System::Object* value);
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, mscorlib::System::Runtime::Serialization::SerializationBinder* binder);
		mscorlib::System::Object* Deserialize(mscorlib::System::Runtime::Remoting::Messaging::HeaderHandler* handler, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* serParser, bool fCheck);
		bool HasSurrogate(mscorlib::System::Type* t);
		void CheckSerializable(mscorlib::System::Type* t);
		void InitFullDeserialization();
		mscorlib::System::Object* CrossAppDomainArray(int32_t index);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(mscorlib::System::Type* objectType);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes);
		void Parse(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseError(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* processing, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* onStack);
		void ParseSerializedStreamHeader(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseSerializedStreamHeaderEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseObject(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseObjectEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void NextRectangleMap(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseArrayMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseArrayMemberEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseMemberEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ParseString(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parentPr);
		void RegisterObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr);
		void RegisterObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr, bool bIsString);
		int64_t GetId(int64_t objectId);
		mscorlib::System::Type* Bind(mscorlib::System::String* assemblyString, mscorlib::System::String* typeString);
		mscorlib::System::Type* FastBindToType(mscorlib::System::String* assemblyName, mscorlib::System::String* typeName);
		static mscorlib::System::Reflection::Assembly* ResolveSimpleAssemblyName(mscorlib::System::Reflection::AssemblyName* assemblyName);
		static void GetSimplyNamedTypeFromAssembly(mscorlib::System::Reflection::Assembly* assm, mscorlib::System::String* typeName, mscorlib::System::Type& type);
		mscorlib::System::Type* GetType(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, mscorlib::System::String* name);
		static void CheckTypeForwardedTo(mscorlib::System::Reflection::Assembly* sourceAssembly, mscorlib::System::Reflection::Assembly* destAssembly, mscorlib::System::Type* resolvedType);
	};
}

