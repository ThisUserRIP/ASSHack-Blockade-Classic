#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Metadata_SoapAttribute.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Metadata
{
	struct SoapFieldAttribute : mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _elementName;
		bool _isElement;
		void _ctor();
		mscorlib::System::String* get_XmlElementName();
		bool IsInteropXmlElement();
		void SetReflectionObject(mscorlib::System::Object* reflectionObject);
	};
}

