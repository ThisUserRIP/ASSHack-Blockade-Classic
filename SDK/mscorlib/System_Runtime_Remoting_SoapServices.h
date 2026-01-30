#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct MethodBase; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct Assembly; };

namespace mscorlib::System::Runtime::Remoting
{
	struct SoapServices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Hashtable* _xmlTypes;
			mscorlib::System::Collections::Hashtable* _xmlElements;
			mscorlib::System::Collections::Hashtable* _soapActions;
			mscorlib::System::Collections::Hashtable* _soapActionsMethods;
			mscorlib::System::Collections::Hashtable* _typeInfos;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_XmlNsForClrTypeWithAssembly();
		static mscorlib::System::String* get_XmlNsForClrTypeWithNs();
		static mscorlib::System::String* get_XmlNsForClrTypeWithNsAndAssembly();
		static mscorlib::System::String* CodeXmlNamespaceForClrTypeNamespace(mscorlib::System::String* typeNamespace, mscorlib::System::String* assemblyName);
		static mscorlib::System::String* GetNameKey(mscorlib::System::String* name, mscorlib::System::String* namspace);
		static mscorlib::System::String* GetAssemblyName(mscorlib::System::Reflection::MethodBase* mb);
		static bool GetXmlElementForInteropType(mscorlib::System::Type* type, mscorlib::System::String& xmlElement, mscorlib::System::String& xmlNamespace);
		static mscorlib::System::String* GetXmlNamespaceForMethodCall(mscorlib::System::Reflection::MethodBase* mb);
		static mscorlib::System::String* GetXmlNamespaceForMethodResponse(mscorlib::System::Reflection::MethodBase* mb);
		static bool GetXmlTypeForInteropType(mscorlib::System::Type* type, mscorlib::System::String& xmlType, mscorlib::System::String& xmlTypeNamespace);
		static void PreLoad(mscorlib::System::Reflection::Assembly* assembly);
		static void PreLoad(mscorlib::System::Type* type);
		static void RegisterInteropXmlElement(mscorlib::System::String* xmlElement, mscorlib::System::String* xmlNamespace, mscorlib::System::Type* type);
		static void RegisterInteropXmlType(mscorlib::System::String* xmlType, mscorlib::System::String* xmlTypeNamespace, mscorlib::System::Type* type);
		static mscorlib::System::String* EncodeNs(mscorlib::System::String* ns);
		static void _cctor();
	};
}

