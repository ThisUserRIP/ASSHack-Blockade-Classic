#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_SystemException.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Exception; };

namespace System_Xml::System::Xml::XPath
{
	struct XPathException : mscorlib::System::SystemException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* res;
		IL2CPP::Array<mscorlib::System::String*>* args;
		mscorlib::System::String* message;
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor();
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException);
		static System_Xml::System::Xml::XPath::XPathException* Create(mscorlib::System::String* res);
		static System_Xml::System::Xml::XPath::XPathException* Create(mscorlib::System::String* res, mscorlib::System::String* arg);
		static System_Xml::System::Xml::XPath::XPathException* Create(mscorlib::System::String* res, mscorlib::System::String* arg, mscorlib::System::String* arg2);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* inner);
		static mscorlib::System::String* CreateMessage(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args);
		mscorlib::System::String* get_Message();
	};
}

