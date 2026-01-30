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
	struct SoapMethodAttribute : mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _responseElement;
		mscorlib::System::String* _responseNamespace;
		mscorlib::System::String* _returnElement;
		mscorlib::System::String* _soapAction;
		bool _useAttribute;
		mscorlib::System::String* _namespace;
		void _ctor();
		bool get_UseAttribute();
		mscorlib::System::String* get_XmlNamespace();
		void SetReflectionObject(mscorlib::System::Object* reflectionObject);
	};
}

