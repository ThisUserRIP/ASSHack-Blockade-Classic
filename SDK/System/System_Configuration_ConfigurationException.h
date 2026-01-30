#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_SystemException.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct XmlNode; };

namespace System::System::Configuration
{
	struct ConfigurationException : mscorlib::System::SystemException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* inner);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* inner, mscorlib::System::String* filename, int32_t line);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* inner, System_Xml::System::Xml::XmlNode* node);
		void _ctor(mscorlib::System::String* message, mscorlib::System::String* filename, int32_t line);
		void _ctor(mscorlib::System::String* message, System_Xml::System::Xml::XmlNode* node);
		mscorlib::System::String* get_BareMessage();
		mscorlib::System::String* get_Filename();
		int32_t get_Line();
		static mscorlib::System::String* GetXmlNodeFilename(System_Xml::System::Xml::XmlNode* node);
		static int32_t GetXmlNodeLineNumber(System_Xml::System::Xml::XmlNode* node);
	};
}

