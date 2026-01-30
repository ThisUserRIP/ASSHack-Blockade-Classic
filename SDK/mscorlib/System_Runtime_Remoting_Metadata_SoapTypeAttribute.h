#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Metadata_SoapAttribute.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Metadata
{
	struct SoapTypeAttribute : mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _useAttribute;
		mscorlib::System::String* _xmlElementName;
		mscorlib::System::String* _xmlNamespace;
		mscorlib::System::String* _xmlTypeName;
		mscorlib::System::String* _xmlTypeNamespace;
		bool _isType;
		bool _isElement;
		void _ctor();
		bool get_UseAttribute();
		mscorlib::System::String* get_XmlElementName();
		mscorlib::System::String* get_XmlNamespace();
		mscorlib::System::String* get_XmlTypeName();
		mscorlib::System::String* get_XmlTypeNamespace();
		bool get_IsInteropXmlElement();
		bool get_IsInteropXmlType();
		void SetReflectionObject(mscorlib::System::Object* reflectionObject);
	};
}

