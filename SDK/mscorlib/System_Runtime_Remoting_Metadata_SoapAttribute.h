#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Remoting::Metadata
{
	struct SoapAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _useAttribute;
		mscorlib::System::String* ProtXmlNamespace;
		mscorlib::System::Object* ReflectInfo;
		void _ctor();
		bool get_UseAttribute();
		mscorlib::System::String* get_XmlNamespace();
		void SetReflectionObject(mscorlib::System::Object* reflectionObject);
	};
}

