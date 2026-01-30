#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Serialization { struct ISurrogateSelector; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationBinder; };
#include "System_Runtime_Serialization_Formatters_FormatterTypeStyle.h"
#include "System_Runtime_Serialization_Formatters_FormatterAssemblyStyle.h"
#include "System_Runtime_Serialization_Formatters_TypeFilterLevel.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct TypeInformation; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct HeaderHandler; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct Header; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct BinaryFormatter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;
		mscorlib::System::Runtime::Serialization::StreamingContext m_context;
		mscorlib::System::Runtime::Serialization::SerializationBinder* m_binder;
		mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle m_typeFormat;
		mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle m_assemblyFormat;
		mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel m_securityLevel;
		IL2CPP::Array<mscorlib::System::Object*>* m_crossAppDomainArray;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Type, mscorlib::System::Runtime::Serialization::Formatters::Binary::TypeInformation>* typeNameCache;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void set_AssemblyFormat(mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);
		void set_SurrogateSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector* value);
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Object* Deserialize(mscorlib::System::IO::Stream* serializationStream);
		mscorlib::System::Object* Deserialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Runtime::Remoting::Messaging::HeaderHandler* handler, bool fCheck);
		mscorlib::System::Object* Deserialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Runtime::Remoting::Messaging::HeaderHandler* handler);
		void Serialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Object* graph);
		void Serialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Object* graph, IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* headers);
		void Serialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Object* graph, IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* headers, bool fCheck);
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::TypeInformation* GetTypeInformation(mscorlib::System::Type* type);
		static void _cctor();
	};
}

