#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_SystemException.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Exception; };
namespace System_Xml::System::Xml { struct IXmlLineInfo; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace System_Xml::System::Xml
{
	struct XmlException : mscorlib::System::SystemException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* res;
		IL2CPP::Array<mscorlib::System::String*>* args;
		int32_t lineNumber;
		int32_t linePosition;
		mscorlib::System::String* sourceUri;
		mscorlib::System::String* message;
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor();
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, mscorlib::System::String* sourceUri);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg, mscorlib::System::String* sourceUri);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg, System_Xml::System::Xml::IXmlLineInfo* lineInfo);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg, mscorlib::System::Exception* innerException, System_Xml::System::Xml::IXmlLineInfo* lineInfo);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::IXmlLineInfo* lineInfo);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::IXmlLineInfo* lineInfo, mscorlib::System::String* sourceUri);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg, int32_t lineNumber, int32_t linePosition);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg, int32_t lineNumber, int32_t linePosition, mscorlib::System::String* sourceUri);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, int32_t lineNumber, int32_t linePosition);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, int32_t lineNumber, int32_t linePosition, mscorlib::System::String* sourceUri);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, mscorlib::System::String* sourceUri);
		static mscorlib::System::String* FormatUserMessage(mscorlib::System::String* message, int32_t lineNumber, int32_t linePosition);
		static mscorlib::System::String* CreateMessage(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, int32_t lineNumber, int32_t linePosition);
		static IL2CPP::Array<mscorlib::System::String*>* BuildCharExceptionArgs(mscorlib::System::String* data, int32_t invCharIndex);
		static IL2CPP::Array<mscorlib::System::String*>* BuildCharExceptionArgs(IL2CPP::Array<wchar_t>* data, int32_t length, int32_t invCharIndex);
		static IL2CPP::Array<mscorlib::System::String*>* BuildCharExceptionArgs(wchar_t invChar, wchar_t nextChar);
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		mscorlib::System::String* get_Message();
		mscorlib::System::String* get_ResString();
	};
}

